/*
See LICENSE file in root folder
*/
#ifndef ___AST_ExprLessEqual_H___
#define ___AST_ExprLessEqual_H___
#pragma once

#include "ExprBinary.hpp"

namespace ast
{
	class ExprLessEqual
		: public ExprBinary
	{
	public:
		ExprLessEqual( ExprPtr lhs
			, ExprPtr rhs );

		void accept( ExprVisitorPtr vis )override;
	};

	inline std::unique_ptr< ExprLessEqual > makeLessEqualExpr( ExprPtr lhs
		, ExprPtr rhs )
	{
		return std::make_unique< ExprLessEqual >( std::move( lhs )
			, std::move( rhs ) );
	}
}

#endif
