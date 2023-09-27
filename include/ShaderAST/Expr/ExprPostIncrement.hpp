/*
See LICENSE file in root folder
*/
#ifndef ___AST_ExprPostIncrement_H___
#define ___AST_ExprPostIncrement_H___
#pragma once

#include "ExprUnary.hpp"

namespace ast::expr
{
	class PostIncrement
		: public Unary
	{
	public:
		SDAST_API PostIncrement( ExprCache & exprCache
			, type::TypePtr type
			, ExprPtr operand );

		SDAST_API void accept( VisitorPtr vis )override;
	};
}

#endif
