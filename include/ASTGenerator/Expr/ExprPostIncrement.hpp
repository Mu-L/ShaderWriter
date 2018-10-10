/*
See LICENSE file in root folder
*/
#ifndef ___AST_ExprPostIncrement_H___
#define ___AST_ExprPostIncrement_H___
#pragma once

#include "ExprUnary.hpp"

namespace ast
{
	class ExprPostIncrement
		: public ExprUnary
	{
	public:
		ExprPostIncrement( ExprPtr operand );

		void accept( ExprVisitorPtr vis )override;
	};

	inline std::unique_ptr< ExprPostIncrement > makePostIncrementExpr( ExprPtr operand )
	{
		return std::make_unique< ExprPostIncrement >( std::move( operand ) );
	}
}

#endif
