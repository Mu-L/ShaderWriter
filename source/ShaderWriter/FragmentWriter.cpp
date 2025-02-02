/*
See LICENSE file in root folder
*/
#include "ShaderWriter/FragmentWriter.hpp"

#include "ShaderWriter/Intrinsics/IntrinsicFunctions.hpp"

namespace sdw
{
	FragmentWriter::FragmentWriter( ShaderAllocator * allocator )
		: EntryPointWriter{ ast::ShaderStage::eFragment, allocator }
	{
	}

	FragmentWriter::FragmentWriter( ShaderBuilder & builder )
		: EntryPointWriter{ ast::ShaderStage::eFragment, builder }
	{
		if ( builder.getType() != ast::ShaderStage::eFragment
			&& builder.getType() != ast::ShaderStage::eTraditionalGraphics
			&& builder.getType() != ast::ShaderStage::eModernGraphicsEXT
			&& builder.getType() != ast::ShaderStage::eModernGraphicsNV )
		{
			throw ast::Exception{ "Can't create a FragmentWriter from this kind of builder." };
		}
	}

	void FragmentWriter::implementMain( FragmentMainFuncT< VoidT, VoidT > const & function )
	{
		implementMainT( function );
	}

	void FragmentWriter::implementMain( ast::FragmentOrigin origin
		, ast::FragmentCenter center
		, ast::InvocationOrdering ordering
		, FragmentMainFuncT< VoidT, VoidT > const & function )
	{
		implementMainT( origin, center, ordering, function );
	}

	void FragmentWriter::beginInvocationInterlock()
	{
		sdw::beginInvocationInterlock( *this );
	}

	void FragmentWriter::endInvocationInterlock()
	{
		sdw::endInvocationInterlock( *this );
	}
}
