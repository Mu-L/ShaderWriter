/*
See LICENSE file in root folder
*/
#include "VertexWriter.hpp"

#include "BaseTypes/Int.hpp"

namespace sdw
{
	//*************************************************************************

	template< template< ast::var::Flag FlagT > typename DataT >
	VertexInT< DataT >::VertexInT( ShaderWriter & writer
		, ast::expr::ExprPtr expr
		, bool enabled )
		: InputT< DataT >{ writer, std::move( expr ), enabled }
		, vertexIndex{ getIntMember( *this, ast::Builtin::eVertexIndex ) }
		, instanceIndex{ getIntMember( *this, ast::Builtin::eInstanceIndex ) }
		, drawID{ getIntMember( *this, ast::Builtin::eDrawIndex ) }
		, baseVertex{ getIntMember( *this, ast::Builtin::eBaseVertex ) }
		, baseInstance{ getIntMember( *this, ast::Builtin::eBaseInstance ) }
	{
	}

	template< template< ast::var::Flag FlagT > typename DataT >
	VertexInT< DataT >::VertexInT( ShaderWriter & writer )
		: VertexInT{ writer
			, makeExpr( writer
				, getShader( writer ).registerName( "vertIn"
					, makeType( getTypesCache( writer ) )
					, FlagT ) ) }
	{
	}

	template< template< ast::var::Flag FlagT > typename DataT >
	ast::type::IOStructPtr VertexInT< DataT >::makeType( ast::type::TypesCache & cache )
	{
		auto result = InputT< DataT >::makeType( cache );

		if ( !result->hasMember( ast::Builtin::eVertexIndex ) )
		{
			result->declMember( ast::Builtin::eVertexIndex
				, type::Kind::eInt
				, ast::type::NotArray );
			result->declMember( ast::Builtin::eInstanceIndex
				, type::Kind::eInt
				, ast::type::NotArray );
			result->declMember( ast::Builtin::eDrawIndex
				, type::Kind::eInt
				, ast::type::NotArray );
			result->declMember( ast::Builtin::eBaseVertex
				, type::Kind::eInt
				, ast::type::NotArray );
			result->declMember( ast::Builtin::eBaseInstance
				, type::Kind::eInt
				, ast::type::NotArray );
		}

		return result;
	}

	//*************************************************************************

	template< template< ast::var::Flag FlagT > typename DataT >
	VertexOutT< DataT >::VertexOutT( ShaderWriter & writer
		, ast::expr::ExprPtr expr
		, bool enabled )
		: OutputT< DataT >{ writer, std::move( expr ), enabled }
		, vtx{ writer, *this, FlagT }
	{
	}

	template< template< ast::var::Flag FlagT > typename DataT >
	VertexOutT< DataT >::VertexOutT( ShaderWriter & writer )
		: VertexOutT{ writer
			, makeExpr( writer
				, getShader( writer ).registerName( "vertOut"
					, makeType( getTypesCache( writer ) )
					, FlagT ) ) }
	{
	}

	template< template< ast::var::Flag FlagT > typename DataT >
	ast::type::IOStructPtr VertexOutT< DataT >::makeType( ast::type::TypesCache & cache )
	{
		ast::type::IOStructPtr result = OutputT< DataT >::makeType( cache );
		PerVertex::fillType( *result );
		return result;
	}

	//*************************************************************************

	template< template< ast::var::Flag FlagT > typename InT
		, template< ast::var::Flag FlagT > typename OutT >
	inline void VertexWriter::implementMainT( VertexMainFuncT< InT, OutT > const & function )
	{
		this->implementMainT( VertexInT< InT >{ *this }
			, VertexOutT< OutT >{ *this }
			, function );
	}

	template< template< ast::var::Flag FlagT > typename InT
		, template< ast::var::Flag FlagT > typename OutT >
	inline void VertexWriter::implementMainT( VertexInT< InT > in
		, VertexOutT< OutT > out
		, VertexMainFuncT< InT, OutT > const & function )
	{
		( void )implementFunction< Void >( "main"
			, ast::stmt::FunctionFlag::eEntryPoint
			, function
			, makeInParam( std::move( in ) )
			, makeOutParam( std::move( out ) ) );
	}

	//*************************************************************************
}
