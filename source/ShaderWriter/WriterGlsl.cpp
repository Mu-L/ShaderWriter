/*
See LICENSE file in root folder
*/
#include "ShaderWriter/WriterGlsl.hpp"

#include "ShaderWriter/GLSL/GlslStmtAdapter.hpp"
#include "ShaderWriter/GLSL/GlslStmtConfigFiller.hpp"
#include "ShaderWriter/GLSL/GlslStmtVisitor.hpp"

#include "ShaderWriter/Shader.hpp"

namespace sdw
{
	std::string compileGlsl( Shader const & shader
		, ShaderType type
		, SpecialisationInfo const & specialisation )
	{
		auto config = glsl::StmtConfigFiller::submit( shader );
		auto glStatements = glsl::StmtAdapter::submit( shader, type, config );
		return glsl::StmtVisitor::submit( glStatements.get() );
	}
}
