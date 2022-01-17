/*
See LICENSE file in root folder
*/
#ifndef ___AST_TypeAccelerationStructure_H___
#define ___AST_TypeAccelerationStructure_H___
#pragma once

#include "Type.hpp"

namespace ast::type
{
	class AccelerationStructure
		: public Type
	{
	public:
		SDAST_API AccelerationStructure( TypesCache & cache );
	};
	using AccelerationStructurePtr = std::shared_ptr< AccelerationStructure >;
}

#endif
