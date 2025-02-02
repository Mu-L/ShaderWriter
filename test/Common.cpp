#include "Common.hpp"

#include <ShaderAST/ShaderLog.hpp>

#if defined( _WIN32 )
#	include <Windows.h>
#elif defined( __linux__ )
#	include <unistd.h>
#	include <dirent.h>
#	include <pwd.h>
#elif defined( __APPLE__ )
#	include <mach-o/dyld.h>
#	include <cpuid.h>
#	include <sys/sysctl.h>
#endif

#include <thread>

namespace test
{
	//*********************************************************************************************

#if defined( _WIN32 )
	static char constexpr PathSeparator = '\\';
#else
	static char constexpr PathSeparator = '/';
#endif

	namespace
	{
		template< typename LogStreambufTraits >
		class LogStreambuf
			: public std::streambuf
		{
		public:
			using string_type = std::string;
			using ostream_type = std::ostream;
			using streambuf_type = std::streambuf;
			using int_type = std::streambuf::int_type;
			using traits_type = std::streambuf::traits_type;

			LogStreambuf( std::string const & name
				, std::ostream & stream )
				: m_stream{ stream }
				, m_fstream{ getExecutableDirectory() + name + ".log" }
			{
				m_old = m_stream.rdbuf( this );
			}

			~LogStreambuf()noexcept override
			{
				try
				{
					m_stream.flush();
					m_stream.rdbuf( m_old );
				}
				catch ( ... )
				{
				}
			}

			int_type overflow( int_type c = traits_type::eof() )override
			{
				if ( traits_type::eq_int_type( c, traits_type::eof() ) )
				{
					do_sync();
				}
				else if ( c == '\n' )
				{
					do_sync();
				}
				else if ( c == '\r' )
				{
					m_buffer += '\r';
					do_sync_no_nl();
				}
				else
				{
					m_buffer += traits_type::to_char_type( c );
				}

				return c;
			}

			int do_sync()
			{
				LogStreambufTraits::log( m_fstream, m_buffer );
				m_buffer.clear();
				return 0;
			}

			int do_sync_no_nl()
			{
				LogStreambufTraits::logNoNL( m_fstream, m_buffer );
				m_buffer.clear();
				return 0;
			}

		private:
			string_type m_buffer;
			ostream_type & m_stream;
			streambuf_type * m_old;
			std::ofstream m_fstream;
		};

		template< typename LogStringbufTraits >
		class LogStringbuf
			: public std::streambuf
		{
		public:
			using string_type = std::string;
			using ostream_type = std::ostream;
			using streambuf_type = std::streambuf;
			using int_type = std::streambuf::int_type;
			using traits_type = std::streambuf::traits_type;

			LogStringbuf( std::string & string
				, std::ostream & stream )
				: m_string{ string }
				, m_stream{ stream }
			{
				m_old = m_stream.rdbuf( this );
			}

			~LogStringbuf()noexcept override
			{
				try
				{
					m_stream.flush();
					m_stream.rdbuf( m_old );
				}
				catch ( ... )
				{
				}
			}

			int_type overflow( int_type c = traits_type::eof() )override
			{
				if ( traits_type::eq_int_type( c, traits_type::eof() ) )
				{
					do_sync();
				}
				else if ( c == '\n' )
				{
					do_sync();
				}
				else if ( c == '\r' )
				{
					m_buffer += '\r';
					do_sync_no_nl();
				}
				else
				{
					m_buffer += traits_type::to_char_type( c );
				}

				return c;
			}

			int do_sync()
			{
				LogStringbufTraits::log( m_string, m_buffer );
				m_buffer.clear();
				return 0;
			}

			int do_sync_no_nl()
			{
				LogStringbufTraits::logNoNL( m_string, m_buffer );
				m_buffer.clear();
				return 0;
			}

		private:
			string_type m_buffer;
			std::string & m_string;
			ostream_type & m_stream;
			streambuf_type * m_old;
		};

		struct StreamLogStreambufTraits
		{
			static void log( std::ostream & stream
				, std::string const & text )
			{
				printCDBConsole( text, true );
				stream << text << std::endl;
				printf( "%s\n", text.c_str() );
			}

			static void logNoNL( std::ostream & stream
				, std::string const & text )
			{
				printCDBConsole( text, false );
				stream << text;
				printf( "%s", text.c_str() );
			}
		};

		struct StringLogStreambufTraits
		{
			static void log( std::string & stream
				, std::string const & text )
			{
				stream += text + "\n";
				std::cout << text << std::endl;
			}

			static void logNoNL( std::string & stream
				, std::string const & text )
			{
				stream += text;
				std::cout << text;
			}
		};

		std::string getPath( std::string const & path )
		{
			return path.substr( 0, path.find_last_of( PathSeparator ) );
		}

		uint32_t printBlocks( std::vector< TestBlock * > const & blocks
			, uint32_t count
			, TestCounts & testCounts )
		{
			for ( auto block : blocks )
			{
				if ( !block->indent )
				{
					testCounts.decIndent();
					--count;
				}

				testCounts << block->text << endl;
				testCounts.incIndent();
				++count;
			}

			return count;
		}
	}

#if defined( _WIN32 )

	void printCDBConsole( std::string const & toLog
		, bool newLine )
	{
		if ( ::IsDebuggerPresent() )
		{
			int length = MultiByteToWideChar( CP_UTF8, 0u, toLog.c_str(), -1, nullptr, 0u );

			if ( length > 0 )
			{
				std::vector< wchar_t > buffer( size_t( length + 1 ), wchar_t{} );
				MultiByteToWideChar( CP_UTF8, 0u, toLog.c_str(), -1, buffer.data(), length );
				std::wstring converted{ buffer.begin(), buffer.end() };
				::OutputDebugStringW( converted.c_str() );
			}

			if ( newLine )
			{
				::OutputDebugStringW( L"\n" );
			}
		}
	}

	uint32_t getCoreCount()
	{
		SYSTEM_INFO sysinfo = { 0 };
		::GetSystemInfo( &sysinfo );
		return uint32_t( sysinfo.dwNumberOfProcessors );
	}

	std::string getExecutableDirectory()
	{
		std::string result;
		char path[FILENAME_MAX];
		DWORD res = ::GetModuleFileNameA( nullptr
			, path
			, sizeof( path ) );

		if ( res != 0 )
		{
			result = path;
		}

		result = getPath( result ) + PathSeparator;
		return result;
	}

#elif defined( __linux__ )

	void printCDBConsole( std::string const &
		, bool )
	{
	}

	uint32_t getCoreCount()
	{
		char res[128];
		FILE * fp = popen( "/bin/cat /proc/cpuinfo | grep -c '^processor'", "r" );
		auto read = fread( res, 1, sizeof( res ) - 1, fp );

		if ( !read )
		{
			AST_Assert( false );
		}

		pclose( fp );
		return uint32_t( res[0] );
	}

	std::string getExecutableDirectory()
	{
		std::string result;
		char path[FILENAME_MAX];
		char buffer[32];
		sprintf( buffer, "/proc/%d/exe", getpid() );
		auto bytes = std::min< std::size_t >( readlink( buffer
			, path
			, sizeof( path ) )
			, sizeof( path ) - 1 );

		if ( bytes > 0 )
		{
			path[bytes] = '\0';
			result = path;
		}

		result = getPath( result ) + PathSeparator;
		return result;
	}

#elif defined( __APPLE__ )

	void printCDBConsole( std::string const &
		, bool )
	{
	}

	uint32_t getCoreCount()
	{
		int mib[4];
		int numCPU;
		size_t len = sizeof( numCPU );

		/* set the mib for hw.ncpu */
		mib[0] = CTL_HW;
		mib[1] = HW_AVAILCPU;

		/* get the number of CPUs from the system */
		sysctl( mib, 2, &numCPU, &len, nullptr, 0 );

		if ( numCPU < 1 )
		{
			mib[1] = HW_NCPU;
			sysctl( mib, 2, &numCPU, &len, nullptr, 0 );

			if ( numCPU < 1 )
			{
				numCPU = 1;
			}
		}

		return uint32_t( numCPU );
	}

	std::string getExecutableDirectory()
	{
		std::string result;
		char path[FILENAME_MAX]{};
		uint32_t size = FILENAME_MAX;

		if ( _NSGetExecutablePath( &path[0], &size ) == 0 )
		{
			char realPath[FILENAME_MAX]{};
			result = realpath( path, realPath );
		}

		result = getPath( result );
		return result;
	}

#endif

	//*********************************************************************************************

	TestStringStreams::TestStringStreams( std::string & sout )
		: cout{ sout }
		, tcout{ std::make_unique< test::LogStringbuf< test::StringLogStreambufTraits > >( sout, cout ) }
	{
	}

	//*********************************************************************************************

	TestSuite::TestSuite( std::string name )
		: suiteName{ std::move( name ) }
		, tcout{ std::make_unique< test::LogStreambuf< test::StreamLogStreambufTraits > >( suiteName, std::cout ) }
	{
	}

	TestSuite::~TestSuite()noexcept
	{
		try
		{
			if ( errorCount )
			{
				std::cout << "********************************************************************************" << std::endl;
				std::cout << "Test suite ended with some failures." << std::endl;
			}
			else
			{
				std::cout << "********************************************************************************" << std::endl;
				std::cout << "Test suite ended cleanly." << std::endl;
			}

			std::cout << "Total checks count: " << totalCount << std::endl;
			std::cout << "Failed checks count: " << errorCount << std::endl;
			std::cout << "Total memory spent: " << totalMemory << " bytes " << endl;
		}
		catch ( ... )
		{
		}

		tcout.reset();
	}

	void TestSuite::registerTests( std::string name
		, TestSuite::TestSuiteLaunch launch
		, TestCountsPtr testCounts )
	{
		tests.emplace_back( std::make_unique< TestSuiteRun >( std::move( launch )
			, std::move( name )
			, std::move( testCounts ) ) );
	}

	int TestSuite::run()
	{
		std::locale::global( std::locale{ "C" } );
		std::vector< TestSuiteRunPtr > running;
		std::swap( tests, running );

		while ( !running.empty() )
		{
			std::vector< std::pair< TestSuiteRunPtr, std::thread > > threads;

			while ( !running.empty() && threads.size() < getCoreCount() )
			{
				threads.emplace_back( std::move( std::move( running.back() ) ), std::thread{} );
				running.pop_back();
				auto & current = threads.back();
				auto * run = current.first.get();

				current.second = std::thread{ [this, run]()
					{
						ast::Logger::setErrorCallback( [&run]( std::string msg, bool newLine )
							{
								if ( newLine )
								{
									msg += "\n";
								}

								run->testCount->appendToNextError( msg );
							} );
						run->testCount->initialise();
						auto result = run->launch( *this, *run->testCount );
						auto memory = run->testCount->allocator.report();

						if ( run->name != this->suiteName )
						{
							if ( errorCount )
							{
								( *run->testCount ) << "********************************************************************************" << endl;
								( *run->testCount ) << run->name << " ended with some failures." << endl;
								( *run->testCount ) << "Total Checks count: " << result.totalCount << endl;
								( *run->testCount ) << "Failed checks count: " << result.errorCount << endl;
							}
							else
							{
								( *run->testCount ) << "********************************************************************************" << endl;
								( *run->testCount ) << run->name << " ended cleanly." << endl;
								( *run->testCount ) << "Total Checks count: " << result.totalCount << endl;
							}

							( *run->testCount ) << "Total memory spent: " << memory << " bytes" << endl;
						}

						totalMemory += uint32_t( memory );
						std::cout << run->testCount->streams.cout.str();
					} };
			}

			for ( auto & thread : threads )
			{
				thread.second.join();
			}
		}

		return errorCount
			? EXIT_FAILURE
			: EXIT_SUCCESS;
	}

	//*************************************************************************************************

	TestBlock::TestBlock( TestCounts & testCounts
		, std::string text
		, bool indent )
		: testCounts{ testCounts }
		, text{ std::move( text ) }
		, indent{ indent }
	{
	}

	TestBlock::~TestBlock()noexcept
	{
		testCounts.doPopBlock( this );
	}

	//*********************************************************************************************

	TestCounts::TestCounts( TestSuite & parent )
		: sout{ "" }
		, streams{ sout }
		, allocatorBlock{ allocator.getBlock() }
		, suite{ parent }
	{
	}

	TestCounts::~TestCounts()noexcept
	{
	}

	void TestCounts::initialise()
	{
		if ( !m_initialised.exchange( true ) )
		{
			doInitialise();
			m_cleaned = false;
		}
	}

	TestResults TestCounts::cleanup()
	{
		if ( !m_cleaned.exchange( true ) )
		{
			doCleanup();
			m_initialised = false;
		}

		return result;
	}

	void TestCounts::printBlock( std::string const & text )
	{
		auto count = printBlocks( m_blocks, 0u, *this );
		( *this ) << text << endl;

		for ( auto i = 0u; i < count; ++i )
		{
			decIndent();
		}
	}

	void TestCounts::incTest()
	{
		++suite.totalCount;
		++result.totalCount;
	}

	void TestCounts::incErr()
	{
		++suite.errorCount;
		++curTestErrors;
		++result.errorCount;
	}

	void TestCounts::reportFailure( char const * const error
		, char const * const function
		, int line )
	{
		if ( !curTestErrors )
		{
			( *this ) << "********************************************************************************" << endl;
		}

		incErr();
		( *this ) << function << ":" << line << ":" << endl;
		incIndent();
		auto count = printBlocks( m_blocks, 1u, *this );

		if ( !m_nextErrors.empty() )
		{
			( *this ) << m_nextErrors << endl;
			m_nextErrors.clear();
		}

		( *this ) << error << endl;

		for ( auto i = 0u; i < count; ++i )
		{
			decIndent();
		}
	}

	void TestCounts::reportFailure( char const * const error
		, char const * const callerFunction
		, int callerLine
		, char const * const calleeFunction
		, int calleeLine )
	{
		if ( !curTestErrors )
		{
			( *this ) << "********************************************************************************" << endl;
		}

		incErr();
		( *this ) << calleeFunction << ":" << calleeLine << endl;
		incIndent();
		( *this ) << "Called from " << callerFunction << ":" << callerLine << endl;
		incIndent();
		auto count = printBlocks( m_blocks, 2u, *this );

		if ( !m_nextErrors.empty() )
		{
			( *this ) << m_nextErrors << endl;
			m_nextErrors.clear();
		}

		( *this ) << error << endl;

		for ( auto i = 0u; i < count; ++i )
		{
			decIndent();
		}

		m_nextErrors.clear();
	}

	TestBlockPtr TestCounts::doPushBlock( std::string const & text, bool isIndented )
	{
		auto block = std::make_unique< TestBlock >( *this, text, isIndented );
		m_blocks.emplace_back( block.get() );
		return block;
	}

	void TestCounts::doPopBlock( TestBlock * block )
	{
		auto it = std::find( m_blocks.begin(), m_blocks.end(), block );
		m_blocks.erase( it );
	}

	//*********************************************************************************************

	void beginTest( TestCounts & testCounts
		, std::string name )
	{
		testCounts.testName = std::move( name );
		testCounts.curTestErrors = 0u;
		testCounts << "TEST: " << testCounts.testName << endl;
	}

	void endTest( TestCounts & testCounts )
	{
		if ( testCounts.curTestErrors )
		{
			testCounts << "********************************************************************************" << endl;
		}
	}

	void reportFailure( std::string_view error
		, std::string_view function
		, int line
		, TestCounts & testCounts )
	{
		testCounts.reportFailure( error.data(), function.data(), line );
	}

	void reportFailure( std::string_view error
		, std::string_view callerFunction
		, int callerLine
		, std::string_view calleeFunction
		, int calleeLine
		, TestCounts & testCounts )
	{
		testCounts.reportFailure( error.data(), callerFunction.data(), callerLine, calleeFunction.data(), calleeLine );
	}

	//*********************************************************************************************
}
