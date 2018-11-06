/*
See LICENSE file in root folder
*/
namespace sdw
{
	template< typename T >
	inline T Ubo::declMember( std::string const & name )
	{
		auto type = m_info.registerMember( name, typeEnum< T > );
		auto var = registerMember( m_shader, m_var, name, type );
		m_stmt->add( stmt::makeVariableDecl( var ) );
		return T{ &m_shader
			, makeExpr( var ) };
	}

	template< typename T >
	inline Array< T > Ubo::declMember( std::string const & name
		, uint32_t dimension )
	{
		auto type = m_info.registerMember( name, typeEnum< T >, dimension );
		auto var = registerMember( m_shader, m_var, name, type );
		m_stmt->add( stmt::makeVariableDecl( var ) );
		return Array< T >{ &m_shader
			, makeExpr( var ) };
	}

	template< typename T >
	inline Array< T > Ubo::declMemberArray( std::string const & name )
	{
		auto type = m_info.registerMember( name, typeEnum< T >, type::UnknownArraySize );
		auto var = registerMember( m_shader, m_var, name, type );
		m_stmt->add( stmt::makeVariableDecl( var ) );
		return Array< T >{ &m_shader
			, makeExpr( var ) };
	}

	template< typename T >
	inline Optional< T > Ubo::declMember( std::string const & name
		, bool enabled )
	{
		auto type = m_info.registerMember( name, typeEnum< T > );
		auto var = registerMember( m_shader, m_var, name, type );

		if ( enabled )
		{
			m_stmt->add( stmt::makeVariableDecl( var ) );
		}

		return Optional< T >{ &m_shader
			, makeExpr( var )
			, enabled };
	}

	template< typename T >
	inline Optional< Array< T > > Ubo::declMember( std::string const & name
		, uint32_t dimension
		, bool enabled )
	{
		auto type = m_info.registerMember( name, typeEnum< T >, dimension );
		auto var = registerMember( m_shader, m_var, name, type );

		if ( enabled )
		{
			m_stmt->add( stmt::makeVariableDecl( var ) );
		}

		return Optional< Array< T > >{ &m_shader
			, makeExpr( var )
			, enabled };
	}

	template< typename T >
	inline Optional< Array< T > > Ubo::declMemberArray( std::string const & name
		, bool enabled )
	{
		auto type = m_info.registerMember( name, typeEnum< T >, type::UnknownArraySize );
		auto var = registerMember( m_shader, m_var, name, type );

		if ( enabled )
		{
			m_stmt->add( stmt::makeVariableDecl( var ) );
		}

		return Optional< Array< T > >{ &m_shader
			, makeExpr( var )
			, enabled };
	}

	template< typename T >
	inline T Ubo::getMember( std::string const & name )
	{
		auto var = getVar( m_shader, name );
		return T{ &m_shader
			, makeExpr( var ) };
	}

	template< typename T >
	inline Array< T > Ubo::getMemberArray( std::string const & name )
	{
		auto var = getVar( m_shader, name );
		return Array< T >{ &m_shader
			, makeExpr( var ) };
	}

	template< typename T >
	inline Optional< T > Ubo::getMember( std::string const & name
		, bool enabled )
	{
		auto var = getVar( m_shader, name );
		return Optional< T >{ &m_shader
			, makeExpr( var )
			, enabled };
	}

	template< typename T >
	inline Optional< Array< T > > Ubo::getMemberArray( std::string const & name
		, bool enabled )
	{
		auto var = getVar( m_shader, name );
		return Optional< Array< T > >{ &m_shader
			, makeExpr( var )
			, enabled };
	}
}
