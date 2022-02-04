#include "Common.hpp"
#include "WriterCommon.hpp"

namespace
{
#define DummyMain writer.implementMain( [&]( sdw::FragmentIn in, sdw::FragmentOut out ){} )

	template< ast::type::ImageFormat FormatT
		, ast::type::ImageDim DimT
		, bool ArrayedT
		, bool MsT >
	void testSampledBase( test::sdw_test::TestCounts & testCounts )
	{
		testBegin( "testSampledBase" + ast::debug::getName( FormatT ) );
		auto nameBase = sdw::debug::getName( sdw::typeEnum< sdw::SampledImage > )
			+ sdw::debug::getName( FormatT, DimT, ArrayedT, MsT );
		{
			sdw::FragmentWriter writer;
			auto & shader = writer.getShader();
			auto name = nameBase + "Value_1_1";
			auto value = writer.declSampled< FormatT, DimT, ArrayedT, MsT >( name, 1u, 1u );
			check( getNonArrayKind( value.getType() ) == sdw::typeEnum< sdw::SampledImage > );
			check( getArraySize( value.getType() ) == sdw::type::NotArray );
			require( value.getExpr()->getKind() == sdw::expr::Kind::eIdentifier );
			check( static_cast< sdw::expr::Identifier const & >( *value.getExpr() ).getVariable()->getName() == name );
			auto & stmt = *shader.getStatements()->back();
			require( stmt.getKind() == sdw::stmt::Kind::eSampledImageDecl );
			check( static_cast< sdw::stmt::SampledImageDecl const & >( stmt ).getBindingPoint() == 1u );
			check( static_cast< sdw::stmt::SampledImageDecl const & >( stmt ).getDescriptorSet() == 1u );
			DummyMain;
			test::writeShader( writer, testCounts, CurrentCompilers );
		}
		testEnd();
	}

	template< ast::type::ImageFormat FormatT
		, ast::type::ImageDim DimT
		, bool ArrayedT
		, bool MsT >
		void testSampledBaseArray( test::sdw_test::TestCounts & testCounts )
	{
		testBegin( "testSampledBaseArray" + ast::debug::getName( FormatT ) );
		auto nameBase = sdw::debug::getName( sdw::typeEnum< sdw::SampledImage > )
			+ sdw::debug::getName( FormatT, DimT, ArrayedT, MsT );
		{
			sdw::FragmentWriter writer;
			auto & shader = writer.getShader();
			auto name = nameBase + "Value_2_2";
			auto value = writer.declSampledArray< FormatT, DimT, ArrayedT, MsT >( name, 2u, 2u, 6u );
			check( getNonArrayKind( value.getType() ) == sdw::typeEnum< sdw::SampledImage > );
			check( getArraySize( value.getType() ) == 6u );
			require( value.getExpr()->getKind() == sdw::expr::Kind::eIdentifier );
			check( static_cast< sdw::expr::Identifier const & >( *value.getExpr() ).getVariable()->getName() == name );
			auto & stmt = *shader.getStatements()->back();
			require( stmt.getKind() == sdw::stmt::Kind::eSampledImageDecl );
			check( static_cast< sdw::stmt::SampledImageDecl const & >( stmt ).getBindingPoint() == 2u );
			check( static_cast< sdw::stmt::SampledImageDecl const & >( stmt ).getDescriptorSet() == 2u );
			DummyMain;
			test::writeShader( writer, testCounts, CurrentCompilers );
		}
		testEnd();
	}

	template< ast::type::ImageFormat FormatT
		, ast::type::ImageDim DimT
		, bool ArrayedT
		, bool MsT >
		void testSampledOptDisabled( test::sdw_test::TestCounts & testCounts )
	{
		testBegin( "testSampledOptDisabled" + ast::debug::getName( FormatT ) );
		auto nameBase = sdw::debug::getName( sdw::typeEnum< sdw::SampledImage > )
			+ sdw::debug::getName( FormatT, DimT, ArrayedT, MsT );
		{
			sdw::FragmentWriter writer;
			auto & shader = writer.getShader();
			auto count = shader.getStatements()->size();
			auto value = writer.declSampled< FormatT, DimT, ArrayedT, MsT >( "value", 1u, 1u, false );
			check( !value.isEnabled() );
			check( getNonArrayKind( value.getType() ) == sdw::typeEnum< sdw::SampledImage > );
			check( getArraySize( value.getType() ) == sdw::type::NotArray );
			require( value.getExpr()->getKind() == sdw::expr::Kind::eIdentifier );
			check( static_cast< sdw::expr::Identifier const & >( *value.getExpr() ).getVariable()->getName() == "value" );
			check( shader.getStatements()->size() == count );
			DummyMain;
			test::writeShader( writer, testCounts, CurrentCompilers );
		}
		testEnd();
	}

	template< ast::type::ImageFormat FormatT
		, ast::type::ImageDim DimT
		, bool ArrayedT
		, bool MsT >
		void testSampledArrayOptDisabled( test::sdw_test::TestCounts & testCounts )
	{
		testBegin( "testSampledArrayOptDisabled" + ast::debug::getName( FormatT ) );
		auto nameBase = sdw::debug::getName( sdw::typeEnum< sdw::SampledImage > )
			+ sdw::debug::getName( FormatT, DimT, ArrayedT, MsT );
		{
			sdw::FragmentWriter writer;
			auto & shader = writer.getShader();
			auto count = shader.getStatements()->size();
			auto value = writer.declSampledArray< FormatT, DimT, ArrayedT, MsT >( "value", 1u, 1u, 6u, false );
			check( !value.isEnabled() );
			check( getNonArrayKind( value.getType() ) == sdw::typeEnum< sdw::SampledImage > );
			check( getArraySize( value.getType() ) == 6u );
			require( value.getExpr()->getKind() == sdw::expr::Kind::eIdentifier );
			check( static_cast< sdw::expr::Identifier const & >( *value.getExpr() ).getVariable()->getName() == "value" );
			check( shader.getStatements()->size() == count );
			DummyMain;
			test::writeShader( writer, testCounts, CurrentCompilers );
		}
		testEnd();
	}

	template< ast::type::ImageFormat FormatT
		, ast::type::ImageDim DimT
		, bool ArrayedT
		, bool MsT >
		void testSampledOptEnabled( test::sdw_test::TestCounts & testCounts )
	{
		testBegin( "testSampledOptEnabled" + ast::debug::getName( FormatT ) );
		auto nameBase = sdw::debug::getName( sdw::typeEnum< sdw::SampledImage > )
			+ sdw::debug::getName( FormatT, DimT, ArrayedT, MsT );
		{
			sdw::FragmentWriter writer;
			auto & shader = writer.getShader();
			auto name = nameBase + "Value_1_1_opt";
			auto value = writer.declSampled< FormatT, DimT, ArrayedT, MsT >( name, 1u, 1u, true );
			check( value.isEnabled() );
			check( getNonArrayKind( value.getType() ) == sdw::typeEnum< sdw::SampledImage > );
			check( getArraySize( value.getType() ) == sdw::type::NotArray );
			require( value.getExpr()->getKind() == sdw::expr::Kind::eIdentifier );
			check( static_cast< sdw::expr::Identifier const & >( *value.getExpr() ).getVariable()->getName() == name );
			auto & stmt = *shader.getStatements()->back();
			require( stmt.getKind() == sdw::stmt::Kind::eSampledImageDecl );
			check( static_cast< sdw::stmt::SampledImageDecl const & >( stmt ).getBindingPoint() == 1u );
			check( static_cast< sdw::stmt::SampledImageDecl const & >( stmt ).getDescriptorSet() == 1u );
			DummyMain;
			test::writeShader( writer, testCounts, CurrentCompilers );
		}
		testEnd();
	}

	template< ast::type::ImageFormat FormatT
		, ast::type::ImageDim DimT
		, bool ArrayedT
		, bool MsT >
		void testSampledArrayOptEnabled( test::sdw_test::TestCounts & testCounts )
	{
		testBegin( "testSampledArrayOptEnabled" + ast::debug::getName( FormatT ) );
		auto nameBase = sdw::debug::getName( sdw::typeEnum< sdw::SampledImage > )
			+ sdw::debug::getName( FormatT, DimT, ArrayedT, MsT );
		{
			sdw::FragmentWriter writer;
			auto & shader = writer.getShader();
			auto name = nameBase + "Value_2_2_opt";
			auto value = writer.declSampledArray< FormatT, DimT, ArrayedT, MsT >( name, 2u, 2u, 6u, true );
			check( value.isEnabled() );
			check( getNonArrayKind( value.getType() ) == sdw::typeEnum< sdw::SampledImage > );
			check( getArraySize( value.getType() ) == 6u );
			require( value.getExpr()->getKind() == sdw::expr::Kind::eIdentifier );
			check( static_cast< sdw::expr::Identifier const & >( *value.getExpr() ).getVariable()->getName() == name );
			auto & stmt = *shader.getStatements()->back();
			require( stmt.getKind() == sdw::stmt::Kind::eSampledImageDecl );
			check( static_cast< sdw::stmt::SampledImageDecl const & >( stmt ).getBindingPoint() == 2u );
			check( static_cast< sdw::stmt::SampledImageDecl const & >( stmt ).getDescriptorSet() == 2u );
			DummyMain;
			test::writeShader( writer, testCounts, CurrentCompilers );
		}
		testEnd();
	}

	template< ast::type::ImageFormat FormatT
		, ast::type::ImageDim DimT
		, bool ArrayedT
		, bool MsT >
	void testSampled( test::sdw_test::TestCounts & testCounts )
	{
		testSampledBase< FormatT, DimT, ArrayedT, MsT >( testCounts );
		testSampledBaseArray< FormatT, DimT, ArrayedT, MsT >( testCounts );
		testSampledOptDisabled< FormatT, DimT, ArrayedT, MsT >( testCounts );
		testSampledArrayOptDisabled< FormatT, DimT, ArrayedT, MsT >( testCounts );
		testSampledOptEnabled< FormatT, DimT, ArrayedT, MsT >( testCounts );
		testSampledArrayOptEnabled< FormatT, DimT, ArrayedT, MsT >( testCounts );
	}

	template< ast::type::ImageFormat FormatT >
	void testSampledFormat( test::sdw_test::TestCounts & testCounts )
	{
		if constexpr ( isFloatFormat( FormatT ) )
		{
			testSampled< FormatT, Img1D >( testCounts );
			testSampled< FormatT, Img2D >( testCounts );
			testSampled< FormatT, Img3D >( testCounts );
			testSampled< FormatT, ImgCube >( testCounts );
			testSampled< FormatT, ImgBuffer >( testCounts );
			testSampled< FormatT, Img1DArray >( testCounts );
			testSampled< FormatT, Img2DArray >( testCounts );
			testSampled< FormatT, ImgCubeArray >( testCounts );
			testSampled< FormatT, Img2DMS >( testCounts );
			testSampled< FormatT, Img2DMSArray >( testCounts );
		}
		else if constexpr ( isSIntFormat( FormatT ) )
		{
			testSampled< FormatT, Img1D >( testCounts );
			testSampled< FormatT, Img2D >( testCounts );
			testSampled< FormatT, Img3D >( testCounts );
			testSampled< FormatT, ImgCube >( testCounts );
			testSampled< FormatT, ImgBuffer >( testCounts );
			testSampled< FormatT, Img1DArray >( testCounts );
			testSampled< FormatT, Img2DArray >( testCounts );
			testSampled< FormatT, ImgCubeArray >( testCounts );
			testSampled< FormatT, Img2DMS >( testCounts );
			testSampled< FormatT, Img2DMSArray >( testCounts );
		}
		else if constexpr ( isUIntFormat( FormatT ) )
		{
			testSampled< FormatT, Img1D >( testCounts );
			testSampled< FormatT, Img2D >( testCounts );
			testSampled< FormatT, Img3D >( testCounts );
			testSampled< FormatT, ImgCube >( testCounts );
			testSampled< FormatT, ImgBuffer >( testCounts );
			testSampled< FormatT, Img1DArray >( testCounts );
			testSampled< FormatT, Img2DArray >( testCounts );
			testSampled< FormatT, ImgCubeArray >( testCounts );
			testSampled< FormatT, Img2DMS >( testCounts );
			testSampled< FormatT, Img2DMSArray >( testCounts );
		}
	}
}

sdwTestSuiteMain( TestWriterTextureDeclarations )
{
	sdwTestSuiteBegin();
	testSampledFormat< ast::type::ImageFormat::eRgba32f >( testCounts );
	testSampledFormat< ast::type::ImageFormat::eRgba16f >( testCounts );
	testSampledFormat< ast::type::ImageFormat::eRg32f >( testCounts );
	testSampledFormat< ast::type::ImageFormat::eRg16f >( testCounts );
	testSampledFormat< ast::type::ImageFormat::eR32f >( testCounts );
	testSampledFormat< ast::type::ImageFormat::eR16f >( testCounts );
	testSampledFormat< ast::type::ImageFormat::eRgba32i >( testCounts );
	testSampledFormat< ast::type::ImageFormat::eRgba16i >( testCounts );
	testSampledFormat< ast::type::ImageFormat::eRgba8i >( testCounts );
	testSampledFormat< ast::type::ImageFormat::eRg32i >( testCounts );
	testSampledFormat< ast::type::ImageFormat::eRg16i >( testCounts );
	testSampledFormat< ast::type::ImageFormat::eRg8i >( testCounts );
	testSampledFormat< ast::type::ImageFormat::eR32i >( testCounts );
	testSampledFormat< ast::type::ImageFormat::eR16i >( testCounts );
	testSampledFormat< ast::type::ImageFormat::eR8i >( testCounts );
	testSampledFormat< ast::type::ImageFormat::eRgba32u >( testCounts );
	testSampledFormat< ast::type::ImageFormat::eRgba16u >( testCounts );
	testSampledFormat< ast::type::ImageFormat::eRgba8u >( testCounts );
	testSampledFormat< ast::type::ImageFormat::eRg32u >( testCounts );
	testSampledFormat< ast::type::ImageFormat::eRg16u >( testCounts );
	testSampledFormat< ast::type::ImageFormat::eRg8u >( testCounts );
	testSampledFormat< ast::type::ImageFormat::eR32u >( testCounts );
	testSampledFormat< ast::type::ImageFormat::eR16u >( testCounts );
	testSampledFormat< ast::type::ImageFormat::eR8u >( testCounts );
	sdwTestSuiteEnd();
}

sdwTestSuiteLaunch( TestWriterTextureDeclarations )
