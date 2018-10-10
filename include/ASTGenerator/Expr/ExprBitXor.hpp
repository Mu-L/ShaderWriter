/*
See LICENSE file in root folder
*/
#ifndef ___AST_ExprBitXor_H___
#define ___AST_ExprBitXor_H___
#pragma once

#include "ExprBinary.hpp"

namespace ast
{
	class ExprBitXor
		: public ExprBinary
	{
	public:
		ExprBitXor( Type type
			, ExprPtr lhs
			, ExprPtr rhs );

		void accept( ExprVisitorPtr vis )override;
	};

	inline std::unique_ptr< ExprBitXor > makeBitXorExpr( Type type
		, ExprPtr lhs
		, ExprPtr rhs )
	{
		return std::make_unique< ExprBitXor >( type
			, std::move( lhs )
			, std::move( rhs ) );
	}
}

#endif
