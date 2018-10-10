/*
See LICENSE file in root folder
*/
#ifndef ___AST_Stmt_H___
#define ___AST_Stmt_H___
#pragma once

#include "ASTGenerator/ASTGeneratorPrerequisites.hpp"

namespace ast
{
	class Stmt
	{
	public:
		enum class Kind
			: uint8_t
		{
			eSimple,
			eCompound,
			eVariableDecl,
			eFunctionDecl,
			eStructureDecl,
			eIf,
			eElse,
			eElseIf,
			eWhile,
			eFor,
			eDoWhile,
			eSwitch,
			eSwitchCase,
			eReturn,
		};

	public:
		Stmt( Kind kind );
		virtual ~Stmt();

		virtual void accept( StmtVisitorPtr ) = 0;

		inline Kind getKind()const
		{
			return m_kind;
		}

	private:
		Kind m_kind;
	};
}

#endif
