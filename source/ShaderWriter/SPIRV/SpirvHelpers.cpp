/*
See LICENSE file in root folder
*/
#include "ShaderWriter/SPIRV/SpirvHelpers.hpp"

namespace sdw::spirv
{
	//*************************************************************************

	spv::MemoryModel getMemoryModel()
	{
		return spv::MemoryModel::GLSL450;
	}

	spv::ExecutionModel getExecutionModel( ShaderType kind )
	{
		spv::ExecutionModel result;

		switch ( kind )
		{
		case sdw::ShaderType::eVertex:
			result = spv::ExecutionModel::Vertex;
			break;
		case sdw::ShaderType::eTessellationControl:
			result = spv::ExecutionModel::TessellationControl;
			break;
		case sdw::ShaderType::eTessellationEvaluation:
			result = spv::ExecutionModel::TessellationEvaluation;
			break;
		case sdw::ShaderType::eGeometry:
			result = spv::ExecutionModel::Geometry;
			break;
		case sdw::ShaderType::eCompute:
			result = spv::ExecutionModel::GLCompute;
			break;
		case sdw::ShaderType::eFragment:
			result = spv::ExecutionModel::Fragment;
			break;
		default:
			assert( false && "Unsupported ShaderType." );
			break;
		}

		return result;
	}

	std::string getTypeName( spv::Op op )
	{
		return getOpName( op );
	}

	std::string getOperatorName( spv::Op op )
	{
		return getOpName( op );
	}

	//*************************************************************************

	Instruction makeExtension( std::string const & name )
	{
		return Instruction
		{
			spv::Op::OpExtension,
			std::nullopt,
			std::nullopt,
			{},
			name,
		};
	}

	Instruction makeName( spv::Op op, spv::Id id, std::string const & name )
	{
		return Instruction
		{
			op,
			std::nullopt,
			id,
			{},
			name,
		};
	}

	Instruction makeName( spv::Op op, spv::Id outerId, spv::Id memberIndex, std::string const & name )
	{
		return Instruction
		{
			op,
			std::nullopt,
			std::nullopt,
			{ outerId, memberIndex },
			name,
		};
	}

	spv::ImageFormat getImageFormat( type::ImageFormat value )
	{
		switch ( value )
		{
		case ast::type::ImageFormat::eUnknown:
			return spv::ImageFormat::Unknown;
		case ast::type::ImageFormat::eRgba32f:
			return spv::ImageFormat::Rgba32f;
		case ast::type::ImageFormat::eRgba16f:
			return spv::ImageFormat::Rgba16f;
		case ast::type::ImageFormat::eRg32f:
			return spv::ImageFormat::Rg32f;
		case ast::type::ImageFormat::eRg16f:
			return spv::ImageFormat::Rg16f;
		case ast::type::ImageFormat::eR32f:
			return spv::ImageFormat::R32f;
		case ast::type::ImageFormat::eR16f:
			return spv::ImageFormat::R16f;
		case ast::type::ImageFormat::eRgba32i:
			return spv::ImageFormat::Rgba32i;
		case ast::type::ImageFormat::eRgba16i:
			return spv::ImageFormat::Rgba16i;
		case ast::type::ImageFormat::eRgba8i:
			return spv::ImageFormat::Rgba8i;
		case ast::type::ImageFormat::eRg32i:
			return spv::ImageFormat::Rg32i;
		case ast::type::ImageFormat::eRg16i:
			return spv::ImageFormat::Rg16i;
		case ast::type::ImageFormat::eRg8i:
			return spv::ImageFormat::Rg8i;
		case ast::type::ImageFormat::eR32i:
			return spv::ImageFormat::R32i;
		case ast::type::ImageFormat::eR16i:
			return spv::ImageFormat::R16i;
		case ast::type::ImageFormat::eR8i:
			return spv::ImageFormat::R8i;
		case ast::type::ImageFormat::eRgba32u:
			return spv::ImageFormat::Rgba32ui;
		case ast::type::ImageFormat::eRgba16u:
			return spv::ImageFormat::Rgba16ui;
		case ast::type::ImageFormat::eRgba8u:
			return spv::ImageFormat::Rgba8ui;
		case ast::type::ImageFormat::eRg32u:
			return spv::ImageFormat::Rg32ui;
		case ast::type::ImageFormat::eRg16u:
			return spv::ImageFormat::Rg16ui;
		case ast::type::ImageFormat::eRg8u:
			return spv::ImageFormat::Rg8ui;
		case ast::type::ImageFormat::eR32u:
			return spv::ImageFormat::R32ui;
		case ast::type::ImageFormat::eR16u:
			return spv::ImageFormat::R16ui;
		case ast::type::ImageFormat::eR8u:
			return spv::ImageFormat::R8ui;
		default:
			assert( false && "Unsupported type::ImageFormat" );
			return spv::ImageFormat::Rgba32f;
		}
	}

	Instruction makeType( type::Kind kind
		, spv::Id id )
	{
		assert( !isSamplerType( kind )
			&& !isImageType( kind ) );
		IdList operands;

		switch ( kind )
		{
		case ast::type::Kind::eInt:
			operands.push_back( 32u );
			operands.push_back( 1u );
			break;
		case ast::type::Kind::eUInt:
			operands.push_back( 32u );
			operands.push_back( 0u );
			break;
		case ast::type::Kind::eFloat:
			operands.push_back( 32u );
			break;
		case ast::type::Kind::eDouble:
			operands.push_back( 64u );
			break;
		case ast::type::Kind::eHalf:
			operands.push_back( 16u );
			break;
		}

		return Instruction
		{
			getOpCode( kind ),
			std::nullopt,
			id,
			operands,
		};
	}

	Instruction makeType( type::Kind kind
		, spv::Id id
		, IdList const & subTypes )
	{
		return Instruction
		{
			getOpCode( kind ),
			std::nullopt,
			id,
			subTypes
		};
	}

	Instruction makeImageType( type::ImageConfiguration const & config
		, spv::Id id
		, spv::Id sampledTypeId )
	{
		IdList operands;
		operands.push_back( sampledTypeId );
		operands.push_back( spv::Id( config.dimension ) );
		operands.push_back( config.isDepth == ast::type::Trinary::eTrue
			? 1u
			: ( config.isDepth == ast::type::Trinary::eFalse
				? 0u
				: 2u ) );
		operands.push_back( config.isArrayed ? 1u : 0u );
		operands.push_back( config.isMS ? 1u : 0u );
		operands.push_back( config.isSampled == ast::type::Trinary::eTrue
			? 1u
			: ( config.isDepth == ast::type::Trinary::eFalse
				? 2u
				: 0u ) );
		operands.push_back( uint32_t( getImageFormat( config.format ) ) );
		operands.push_back( uint32_t( config.accessKind ) );

		return Instruction
		{
			spv::Op::OpTypeImage,
			std::nullopt,
			id,
			operands,
		};
	}

	Instruction makeSamplerType( spv::Id id )
	{
		return Instruction
		{
			spv::Op::OpTypeSampler,
			std::nullopt,
			id,
		};
	}

	Instruction makeSampledImageType( spv::Id id
		, spv::Id imgTypeId )
	{
		IdList operands
		{
			imgTypeId
		};
		return Instruction
		{
			spv::Op::OpTypeSampledImage,
			std::nullopt,
			id,
			operands,
		};
	}

	Instruction makeStructType( spv::Id id, IdList const & subTypes )
	{
		return Instruction
		{
			spv::Op::OpTypeStruct,
			std::nullopt,
			id,
			subTypes
		};
	}

	Instruction makeArrayType( type::Kind kind, spv::Id id, spv::Id elementTypeId )
	{
		return Instruction
		{
			spv::Op::OpTypeRuntimeArray,
			std::nullopt,
			id,
			{ elementTypeId }
		};
	}

	Instruction makeArrayType( type::Kind kind
		, spv::Id id
		, spv::Id elementTypeId
		, spv::Id lengthId )
	{
		return Instruction
		{
			spv::Op::OpTypeArray,
			std::nullopt,
			id,
			{ elementTypeId, lengthId }
		};
	}

	Instruction makeType( type::TypePtr type, spv::Id id )
	{
		return Instruction
		{
			getOpCode( type ),
			std::nullopt,
			id,
		};
	}

	Instruction makeSwitch( spv::Id selector
		, spv::Id defaultId
		, std::map< int64_t, spv::Id > const & cases )
	{
		return Instruction
		{
			spv::Op::OpSwitch,
			std::nullopt,
			std::nullopt,
			{},
			{},
			cases
		};
	}

	Instruction makeVariable( spv::Id resultId
		, spv::Id typeId
		, spv::StorageClass storage )
	{
		return Instruction
		{
			spv::Op::OpVariable,
			typeId,
			resultId,
			{ spv::Id( storage ) },
		};
	}

	Instruction makeVariable( spv::Id resultId
		, spv::Id typeId
		, spv::StorageClass storage
		, spv::Id initialiser )
	{
		return Instruction
		{
			spv::Op::OpVariable,
			typeId,
			resultId,
			{ spv::Id( storage ), initialiser },
		};
	}

	Instruction makeAccessChain( spv::Op op
		, spv::Id resultId
		, spv::Id typeId
		, IdList const & accessChain )
	{
		return Instruction
		{
			op,
			typeId,
			resultId,
			accessChain,
		};
	}

	Instruction makeVectorShuffle( spv::Id resultId
		, spv::Id typeId
		, IdList const & shuffle )
	{
		return Instruction
		{
			spv::Op::OpVectorShuffle,
			typeId,
			resultId,
			shuffle,
		};
	}

	Instruction makeVectorShuffle( spv::Id resultId
		, spv::Id typeId
		, spv::Id vector
		, IdList const & components )
	{
		IdList shuffle;
		shuffle.push_back( vector );
		shuffle.push_back( vector );
		shuffle.insert( shuffle.end(), components.begin(), components.end() );
		return makeVectorShuffle( resultId
			, typeId
			, shuffle );
	}

	Instruction makeVectorShuffle( spv::Id resultId
		, spv::Id typeId
		, spv::Id vector1
		, spv::Id vector2
		, IdList const & components )
	{
		IdList shuffle;
		shuffle.push_back( vector1 );
		shuffle.push_back( vector2 );
		shuffle.insert( shuffle.end(), components.begin(), components.end() );
		return makeVectorShuffle( resultId
			, typeId
			, shuffle );
	}

	Instruction makeInstruction( spv::Op op )
	{
		return Instruction
		{
			op,
			std::nullopt,
			std::nullopt,
			{},
		};
	}

	Instruction makeInstruction( spv::Op op
		, spv::Id resultId )
	{
		return Instruction
		{
			op,
			std::nullopt,
			resultId,
		};
	}

	Instruction makeInstruction( spv::Op op
		, spv::Id resultId
		, spv::Id typeId )
	{
		return Instruction
		{
			op,
			typeId,
			resultId,
		};
	}

	Instruction makeInstruction( expr::Kind exprKind
		, type::Kind typeKind )
	{
		return makeInstruction( getOpCode( exprKind, typeKind ) );
	}

	Instruction makeInstruction( spv::Op op
		, IdList const & operands )
	{
		return Instruction
		{
			op,
			std::nullopt,
			std::nullopt,
			operands,
		};
	}

	Instruction makeInstruction( expr::Kind exprKind
		, type::Kind typeKind
		, IdList const & operands )
	{
		return makeInstruction( getOpCode( exprKind, typeKind )
			, operands );
	}

	Instruction makeInstruction( spv::Op op
		, IdList const & operands
		, std::string const & name )
	{
		return Instruction
		{
			op,
			std::nullopt,
			std::nullopt,
			operands,
			name,
		};
	}

	Instruction makeInstruction( expr::Kind exprKind
		, type::Kind typeKind
		, IdList const & operands
		, std::string const & name )
	{
		return makeInstruction( getOpCode( exprKind, typeKind )
			, operands
			, name );
	}

	Instruction makeInstruction( spv::Op op
		, spv::Id resultId
		, IdList const & operands )
	{
		return Instruction
		{
			op,
			std::nullopt,
			resultId,
			operands,
		};
	}

	Instruction makeInstruction( expr::Kind exprKind
		, type::Kind typeKind
		, spv::Id resultId
		, IdList const & operands )
	{
		return makeInstruction( getOpCode( exprKind, typeKind )
			, resultId
			, operands );
	}

	Instruction makeInstruction( spv::Op op
		, spv::Id resultId
		, spv::Id typeId
		, IdList const & operands )
	{
		return Instruction
		{
			op,
			typeId,
			resultId,
			operands,
		};
	}

	Instruction makeInstruction( expr::Kind exprKind
		, type::Kind typeKind
		, spv::Id resultId
		, spv::Id typeId
		, IdList const & operands )
	{
		return makeInstruction( getOpCode( exprKind, typeKind )
			, resultId
			, typeId
			, operands );
	}

	Instruction makeInstruction( spv::Op op
		, spv::Id resultId
		, spv::Id typeId
		, IdList const & operands
		, std::string const & name )
	{
		return Instruction
		{
			op,
			typeId,
			resultId,
			operands,
			name,
		};
	}

	Instruction makeInstruction( expr::Kind exprKind
		, type::Kind typeKind
		, spv::Id resultId
		, spv::Id typeId
		, IdList const & operands
		, std::string const & name )
	{
		return makeInstruction( getOpCode( exprKind, typeKind )
			, resultId
			, typeId
			, operands
			, name );
	}

	Instruction makeUnInstruction( expr::Kind exprKind
		, type::Kind typeKind
		, spv::Id resultId
		, spv::Id const & operand )
	{
		return makeInstruction( getOpCode( exprKind, typeKind )
			, resultId
			, { operand } );
	}

	Instruction makeBinInstruction( expr::Kind exprKind
		, type::Kind lhsTypeKind
		, type::Kind rhsTypeKind
		, spv::Id resultId
		, spv::Id lhs
		, spv::Id rhs )
	{
		bool switchParams;
		auto opCode = getBinOpCode( exprKind, lhsTypeKind, rhsTypeKind, switchParams );

		if ( switchParams )
		{
			return makeInstruction( opCode
				, resultId
				, { rhs, lhs } );
		}

		return makeInstruction( opCode
			, resultId
			, { lhs, rhs } );
	}

	Instruction makeUnSpecConstantInstruction( expr::Kind exprKind
		, type::Kind typeKind
		, spv::Id resultId
		, spv::Id typeId
		, spv::Id operand )
	{
		return makeInstruction( spv::Op::OpSpecConstantOp
			, resultId
			, typeId
			, IdList{ spv::Id( getOpCode( exprKind, typeKind ) ), operand } );
	}

	Instruction makeBinSpecConstantInstruction( expr::Kind exprKind
		, type::Kind lhsTypeKind
		, type::Kind rhsTypeKind
		, spv::Id resultId
		, spv::Id typeId
		, spv::Id lhs
		, spv::Id rhs )
	{
		bool switchParams{ false };
		auto opCode = getBinOpCode( exprKind, lhsTypeKind, rhsTypeKind, switchParams );

		if ( switchParams )
		{
			std::swap( lhs, rhs );
		}

		return makeInstruction( spv::Op::OpSpecConstantOp
			, resultId
			, typeId
			, IdList{ spv::Id( opCode ), lhs, rhs } );
	}

	Instruction makeUnInstruction( expr::Kind exprKind
		, type::Kind typeKind
		, spv::Id resultId
		, spv::Id typeId
		, spv::Id operand )
	{
		return makeInstruction( getOpCode( exprKind, typeKind )
			, resultId
			, typeId
			, IdList{ operand } );
	}

	Instruction makeBinInstruction( expr::Kind exprKind
		, type::Kind lhsTypeKind
		, type::Kind rhsTypeKind
		, spv::Id resultId
		, spv::Id typeId
		, spv::Id lhs
		, spv::Id rhs )
	{
		bool switchParams{ false };
		auto opCode = getBinOpCode( exprKind, lhsTypeKind, rhsTypeKind, switchParams );

		if ( switchParams )
		{
			std::swap( lhs, rhs );
		}

		return makeInstruction( opCode
			, resultId
			, typeId
			, { lhs, rhs } );
	}

	Instruction makeLoad( spv::Id resultId
		, spv::Id typeId
		, spv::Id varId )
	{
		return makeInstruction( spv::Op::OpLoad
			, resultId
			, typeId
			, { varId } );
	}

	Instruction makeStore( spv::Id lhs
		, spv::Id rhs )
	{
		return makeInstruction( spv::Op::OpStore
			, { lhs, rhs } );
	}

	//*************************************************************************
}
