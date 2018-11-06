/*
See LICENSE file in root folder
*/
#ifndef ___SDW_GetIntrinsicFunctions_H___
#define ___SDW_GetIntrinsicFunctions_H___
#pragma once

#include "Function.hpp"
#include "FunctionParam.hpp"
#include "Bool.hpp"
#include "Image.hpp"
#include "SampledImage.hpp"
#include "OptionalMat2.hpp"
#include "OptionalMat2x3.hpp"
#include "OptionalMat2x4.hpp"
#include "OptionalMat3.hpp"
#include "OptionalMat3x2.hpp"
#include "OptionalMat3x4.hpp"
#include "OptionalMat4.hpp"
#include "OptionalMat4x2.hpp"
#include "OptionalMat4x3.hpp"
#include "Sampler.hpp"

#include <ASTGenerator/Expr/MakeIntrinsic.hpp>

namespace sdw
{	// Angle and Trigonometry Functions

	inline Float degrees( Float const & radians )
	{
		return Float{ findShader( radians )
			, expr::makeDegrees1( makeExpr( radians ) ) };
	}

	inline Vec2 degrees( Vec2 const & radians )
	{
		return Vec2{ findShader( radians )
			, expr::makeDegrees2( makeExpr( radians ) ) };
	}

	inline Vec3 degrees( Vec3 const & radians )
	{
		return Vec3{ findShader( radians )
			, expr::makeDegrees3( makeExpr( radians ) ) };
	}

	inline Vec4 degrees( Vec4 const & radians )
	{
		return Vec4{ findShader( radians )
			, expr::makeDegrees4( makeExpr( radians ) ) };
	}

	inline Float radians( Float const & degrees )
	{
		return Float{ findShader( degrees )
			, expr::makeRadians1F( makeExpr( degrees ) ) };
	}

	inline Vec2 radians( Vec2 const & degrees )
	{
		return Vec2{ findShader( degrees )
			, expr::makeRadians2F( makeExpr( degrees ) ) };
	}

	inline Vec3 radians( Vec3 const & degrees )
	{
		return Vec3{ findShader( degrees )
			, expr::makeRadians3F( makeExpr( degrees ) ) };
	}

	inline Vec4 radians( Vec4 const & degrees )
	{
		return Vec4{ findShader( degrees )
			, expr::makeRadians4F( makeExpr( degrees ) ) };
	}

	inline Float cos( Float const & x )
	{
		return Float{ findShader( x )
			, expr::makeCos1( makeExpr( x ) ) };
	}

	inline Vec2 cos( Vec2 const & x )
	{
		return Vec2{ findShader( x )
			, expr::makeCos2( makeExpr( x ) ) };
	}

	inline Vec3 cos( Vec3 const & x )
	{
		return Vec3{ findShader( x )
			, expr::makeCos3( makeExpr( x ) ) };
	}

	inline Vec4 cos( Vec4 const & x )
	{
		return Vec4{ findShader( x )
			, expr::makeCos4( makeExpr( x ) ) };
	}

	inline Float sin( Float const & x )
	{
		return Float{ findShader( x )
			, expr::makeSin1( makeExpr( x ) ) };
	}

	inline Vec2 sin( Vec2 const & x )
	{
		return Vec2{ findShader( x )
			, expr::makeSin2( makeExpr( x ) ) };
	}

	inline Vec3 sin( Vec3 const & x )
	{
		return Vec3{ findShader( x )
			, expr::makeSin3( makeExpr( x ) ) };
	}

	inline Vec4 sin( Vec4 const & x )
	{
		return Vec4{ findShader( x )
			, expr::makeSin4( makeExpr( x ) ) };
	}

	inline Float tan( Float const & x )
	{
		return Float{ findShader( x )
			, expr::makeTan1( makeExpr( x ) ) };
	}

	inline Vec2 tan( Vec2 const & x )
	{
		return Vec2{ findShader( x )
			, expr::makeTan2( makeExpr( x ) ) };
	}

	inline Vec3 tan( Vec3 const & x )
	{
		return Vec3{ findShader( x )
			, expr::makeTan3( makeExpr( x ) ) };
	}

	inline Vec4 tan( Vec4 const & x )
	{
		return Vec4{ findShader( x )
			, expr::makeTan4( makeExpr( x ) ) };
	}

	inline Float cosh( Float const & x )
	{
		return Float{ findShader( x )
			, expr::makeCosh1( makeExpr( x ) ) };
	}

	inline Vec2 cosh( Vec2 const & x )
	{
		return Vec2{ findShader( x )
			, expr::makeCosh2( makeExpr( x ) ) };
	}

	inline Vec3 cosh( Vec3 const & x )
	{
		return Vec3{ findShader( x )
			, expr::makeCosh3( makeExpr( x ) ) };
	}

	inline Vec4 cosh( Vec4 const & x )
	{
		return Vec4{ findShader( x )
			, expr::makeCosh4( makeExpr( x ) ) };
	}

	inline Float sinh( Float const & x )
	{
		return Float{ findShader( x )
			, expr::makeSinh1( makeExpr( x ) ) };
	}

	inline Vec2 sinh( Vec2 const & x )
	{
		return Vec2{ findShader( x )
			, expr::makeSinh2( makeExpr( x ) ) };
	}

	inline Vec3 sinh( Vec3 const & x )
	{
		return Vec3{ findShader( x )
			, expr::makeSinh3( makeExpr( x ) ) };
	}

	inline Vec4 sinh( Vec4 const & x )
	{
		return Vec4{ findShader( x )
			, expr::makeSinh4( makeExpr( x ) ) };
	}

	inline Float tanh( Float const & x )
	{
		return Float{ findShader( x )
			, expr::makeTanh1( makeExpr( x ) ) };
	}

	inline Vec2 tanh( Vec2 const & x )
	{
		return Vec2{ findShader( x )
			, expr::makeTanh2( makeExpr( x ) ) };
	}

	inline Vec3 tanh( Vec3 const & x )
	{
		return Vec3{ findShader( x )
			, expr::makeTanh3( makeExpr( x ) ) };
	}

	inline Vec4 tanh( Vec4 const & x )
	{
		return Vec4{ findShader( x )
			, expr::makeTanh4( makeExpr( x ) ) };
	}

	inline Float acos( Float const & x )
	{
		return Float{ findShader( x )
			, expr::makeAcos1( makeExpr( x ) ) };
	}

	inline Vec2 acos( Vec2 const & x )
	{
		return Vec2{ findShader( x )
			, expr::makeAcos2( makeExpr( x ) ) };
	}

	inline Vec3 acos( Vec3 const & x )
	{
		return Vec3{ findShader( x )
			, expr::makeAcos3( makeExpr( x ) ) };
	}

	inline Vec4 acos( Vec4 const & x )
	{
		return Vec4{ findShader( x )
			, expr::makeAcos4( makeExpr( x ) ) };
	}

	inline Float asin( Float const & x )
	{
		return Float{ findShader( x )
			, expr::makeAsin1( makeExpr( x ) ) };
	}

	inline Vec2 asin( Vec2 const & x )
	{
		return Vec2{ findShader( x )
			, expr::makeAsin2( makeExpr( x ) ) };
	}

	inline Vec3 asin( Vec3 const & x )
	{
		return Vec3{ findShader( x )
			, expr::makeAsin3( makeExpr( x ) ) };
	}

	inline Vec4 asin( Vec4 const & x )
	{
		return Vec4{ findShader( x )
			, expr::makeAsin4( makeExpr( x ) ) };
	}

	inline Float atan( Float const & x )
	{
		return Float{ findShader( x )
			, expr::makeAtan1( makeExpr( x ) ) };
	}

	inline Vec2 atan( Vec2 const & x )
	{
		return Vec2{ findShader( x )
			, expr::makeAtan2( makeExpr( x ) ) };
	}

	inline Vec3 atan( Vec3 const & x )
	{
		return Vec3{ findShader( x )
			, expr::makeAtan3( makeExpr( x ) ) };
	}

	inline Vec4 atan( Vec4 const & x )
	{
		return Vec4{ findShader( x )
			, expr::makeAtan4( makeExpr( x ) ) };
	}

	inline Float acosh( Float const & x )
	{
		return Float{ findShader( x )
			, expr::makeAcosh1( makeExpr( x ) ) };
	}

	inline Vec2 acosh( Vec2 const & x )
	{
		return Vec2{ findShader( x )
			, expr::makeAcosh2( makeExpr( x ) ) };
	}

	inline Vec3 acosh( Vec3 const & x )
	{
		return Vec3{ findShader( x )
			, expr::makeAcosh3( makeExpr( x ) ) };
	}

	inline Vec4 acosh( Vec4 const & x )
	{
		return Vec4{ findShader( x )
			, expr::makeAcosh4( makeExpr( x ) ) };
	}

	inline Float asinh( Float const & x )
	{
		return Float{ findShader( x )
			, expr::makeAsinh1( makeExpr( x ) ) };
	}

	inline Vec2 asinh( Vec2 const & x )
	{
		return Vec2{ findShader( x )
			, expr::makeAsinh2( makeExpr( x ) ) };
	}

	inline Vec3 asinh( Vec3 const & x )
	{
		return Vec3{ findShader( x )
			, expr::makeAsinh3( makeExpr( x ) ) };
	}

	inline Vec4 asinh( Vec4 const & x )
	{
		return Vec4{ findShader( x )
			, expr::makeAsinh4( makeExpr( x ) ) };
	}

	inline Float atanh( Float const & x )
	{
		return Float{ findShader( x )
			, expr::makeAtanh1( makeExpr( x ) ) };
	}

	inline Vec2 atanh( Vec2 const & x )
	{
		return Vec2{ findShader( x )
			, expr::makeAtanh2( makeExpr( x ) ) };
	}

	inline Vec3 atanh( Vec3 const & x )
	{
		return Vec3{ findShader( x )
			, expr::makeAtanh3( makeExpr( x ) ) };
	}

	inline Vec4 atanh( Vec4 const & x )
	{
		return Vec4{ findShader( x )
			, expr::makeAtanh4( makeExpr( x ) ) };
	}

	// Exponential Functions

	inline Float pow( Float const & x
		, Float const & y )
	{
		return Float{ findShader( x, y )
			, expr::makePow1( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Vec2 pow( Vec2 const & x
		, Vec2 const & y )
	{
		return Vec2{ findShader( x, y )
			, expr::makePow2( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Vec3 pow( Vec3 const & x
		, Vec3 const & y )
	{
		return Vec3{ findShader( x, y )
			, expr::makePow3( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Vec4 pow( Vec4 const & x
		, Vec4 const & y )
	{
		return Vec4{ findShader( x, y )
			, expr::makePow4( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Float exp( Float const & x )
	{
		return Float{ findShader( x )
			, expr::makeExp1( makeExpr( x ) ) };
	}

	inline Vec2 exp( Vec2 const & x )
	{
		return Vec2{ findShader( x )
			, expr::makeExp2( makeExpr( x ) ) };
	}

	inline Vec3 exp( Vec3 const & x )
	{
		return Vec3{ findShader( x )
			, expr::makeExp3( makeExpr( x ) ) };
	}

	inline Vec4 exp( Vec4 const & x )
	{
		return Vec4{ findShader( x )
			, expr::makeExp4( makeExpr( x ) ) };
	}

	inline Float log( Float const & x )
	{
		return Float{ findShader( x )
			, expr::makeLog1( makeExpr( x ) ) };
	}

	inline Vec2 log( Vec2 const & x )
	{
		return Vec2{ findShader( x )
			, expr::makeLog2( makeExpr( x ) ) };
	}

	inline Vec3 log( Vec3 const & x )
	{
		return Vec3{ findShader( x )
			, expr::makeLog3( makeExpr( x ) ) };
	}

	inline Vec4 log( Vec4 const & x )
	{
		return Vec4{ findShader( x )
			, expr::makeLog4( makeExpr( x ) ) };
	}

	inline Float exp2( Float const & x )
	{
		return Float{ findShader( x )
			, expr::makeExp21( makeExpr( x ) ) };
	}

	inline Vec2 exp2( Vec2 const & x )
	{
		return Vec2{ findShader( x )
			, expr::makeExp22( makeExpr( x ) ) };
	}

	inline Vec3 exp2( Vec3 const & x )
	{
		return Vec3{ findShader( x )
			, expr::makeExp23( makeExpr( x ) ) };
	}

	inline Vec4 exp2( Vec4 const & x )
	{
		return Vec4{ findShader( x )
			, expr::makeExp24( makeExpr( x ) ) };
	}

	inline Float log2( Float const & x )
	{
		return Float{ findShader( x )
			, expr::makeLog21( makeExpr( x ) ) };
	}

	inline Vec2 log2( Vec2 const & x )
	{
		return Vec2{ findShader( x )
			, expr::makeLog22( makeExpr( x ) ) };
	}

	inline Vec3 log2( Vec3 const & x )
	{
		return Vec3{ findShader( x )
			, expr::makeLog23( makeExpr( x ) ) };
	}

	inline Vec4 log2( Vec4 const & x )
	{
		return Vec4{ findShader( x )
			, expr::makeLog24( makeExpr( x ) ) };
	}

	inline Float sqrt( Float const & x )
	{
		return Float{ findShader( x )
			, expr::makeSqrt1F( makeExpr( x ) ) };
	}

	inline Vec2 sqrt( Vec2 const & x )
	{
		return Vec2{ findShader( x )
			, expr::makeSqrt2F( makeExpr( x ) ) };
	}

	inline Vec3 sqrt( Vec3 const & x )
	{
		return Vec3{ findShader( x )
			, expr::makeSqrt3F( makeExpr( x ) ) };
	}

	inline Vec4 sqrt( Vec4 const & x )
	{
		return Vec4{ findShader( x )
			, expr::makeSqrt4F( makeExpr( x ) ) };
	}

	inline Double sqrt( Double const & x )
	{
		return Double{ findShader( x )
			, expr::makeSqrt1D( makeExpr( x ) ) };
	}

	inline DVec2 sqrt( DVec2 const & x )
	{
		return DVec2{ findShader( x )
			, expr::makeSqrt2D( makeExpr( x ) ) };
	}

	inline DVec3 sqrt( DVec3 const & x )
	{
		return DVec3{ findShader( x )
			, expr::makeSqrt3D( makeExpr( x ) ) };
	}

	inline DVec4 sqrt( DVec4 const & x )
	{
		return DVec4{ findShader( x )
			, expr::makeSqrt4D( makeExpr( x ) ) };
	}

	inline Float inverseSqrt( Float const & x )
	{
		return Float{ findShader( x )
			, expr::makeInverseSqrt1F( makeExpr( x ) ) };
	}

	inline Vec2 inverseSqrt( Vec2 const & x )
	{
		return Vec2{ findShader( x )
			, expr::makeInverseSqrt2F( makeExpr( x ) ) };
	}

	inline Vec3 inverseSqrt( Vec3 const & x )
	{
		return Vec3{ findShader( x )
			, expr::makeInverseSqrt3F( makeExpr( x ) ) };
	}

	inline Vec4 inverseSqrt( Vec4 const & x )
	{
		return Vec4{ findShader( x )
			, expr::makeInverseSqrt4F( makeExpr( x ) ) };
	}

	inline Double inverseSqrt( Double const & x )
	{
		return Double{ findShader( x )
			, expr::makeInverseSqrt1D( makeExpr( x ) ) };
	}

	inline DVec2 inverseSqrt( DVec2 const & x )
	{
		return DVec2{ findShader( x )
			, expr::makeInverseSqrt2D( makeExpr( x ) ) };
	}

	inline DVec3 inverseSqrt( DVec3 const & x )
	{
		return DVec3{ findShader( x )
			, expr::makeInverseSqrt3D( makeExpr( x ) ) };
	}

	inline DVec4 inverseSqrt( DVec4 const & x )
	{
		return DVec4{ findShader( x )
			, expr::makeInverseSqrt4D( makeExpr( x ) ) };
	}

	// Common Functions

	inline Float abs( Float const & x )
	{
		return Float{ findShader( x )
			, expr::makeAbs1F( makeExpr( x ) ) };
	}

	inline Vec2 abs( Vec2 const & x )
	{
		return Vec2{ findShader( x )
			, expr::makeAbs2F( makeExpr( x ) ) };
	}

	inline Vec3 abs( Vec3 const & x )
	{
		return Vec3{ findShader( x )
			, expr::makeAbs3F( makeExpr( x ) ) };
	}

	inline Vec4 abs( Vec4 const & x )
	{
		return Vec4{ findShader( x )
			, expr::makeAbs4F( makeExpr( x ) ) };
	}

	inline Int abs( Int const & x )
	{
		return Int{ findShader( x )
			, expr::makeAbs1I( makeExpr( x ) ) };
	}

	inline IVec2 abs( IVec2 const & x )
	{
		return IVec2{ findShader( x )
			, expr::makeAbs2I( makeExpr( x ) ) };
	}

	inline IVec3 abs( IVec3 const & x )
	{
		return IVec3{ findShader( x )
			, expr::makeAbs3I( makeExpr( x ) ) };
	}

	inline IVec4 abs( IVec4 const & x )
	{
		return IVec4{ findShader( x )
			, expr::makeAbs4I( makeExpr( x ) ) };
	}

	inline Double abs( Double const & x )
	{
		return Double{ findShader( x )
			, expr::makeAbs1D( makeExpr( x ) ) };
	}

	inline DVec2 abs( DVec2 const & x )
	{
		return DVec2{ findShader( x )
			, expr::makeAbs2D( makeExpr( x ) ) };
	}

	inline DVec3 abs( DVec3 const & x )
	{
		return DVec3{ findShader( x )
			, expr::makeAbs3D( makeExpr( x ) ) };
	}

	inline DVec4 abs( DVec4 const & x )
	{
		return DVec4{ findShader( x )
			, expr::makeAbs4D( makeExpr( x ) ) };
	}

	inline Float sign( Float const & x )
	{
		return Float{ findShader( x )
			, expr::makeSign1F( makeExpr( x ) ) };
	}

	inline Vec2 sign( Vec2 const & x )
	{
		return Vec2{ findShader( x )
			, expr::makeSign2F( makeExpr( x ) ) };
	}

	inline Vec3 sign( Vec3 const & x )
	{
		return Vec3{ findShader( x )
			, expr::makeSign3F( makeExpr( x ) ) };
	}

	inline Vec4 sign( Vec4 const & x )
	{
		return Vec4{ findShader( x )
			, expr::makeSign4F( makeExpr( x ) ) };
	}

	inline Int sign( Int const & x )
	{
		return Int{ findShader( x )
			, expr::makeSign1I( makeExpr( x ) ) };
	}

	inline IVec2 sign( IVec2 const & x )
	{
		return IVec2{ findShader( x )
			, expr::makeSign2I( makeExpr( x ) ) };
	}

	inline IVec3 sign( IVec3 const & x )
	{
		return IVec3{ findShader( x )
			, expr::makeSign3I( makeExpr( x ) ) };
	}

	inline IVec4 sign( IVec4 const & x )
	{
		return IVec4{ findShader( x )
			, expr::makeSign4I( makeExpr( x ) ) };
	}

	inline Double sign( Double const & x )
	{
		return Double{ findShader( x )
			, expr::makeSign1D( makeExpr( x ) ) };
	}

	inline DVec2 sign( DVec2 const & x )
	{
		return DVec2{ findShader( x )
			, expr::makeSign2D( makeExpr( x ) ) };
	}

	inline DVec3 sign( DVec3 const & x )
	{
		return DVec3{ findShader( x )
			, expr::makeSign3D( makeExpr( x ) ) };
	}

	inline DVec4 sign( DVec4 const & x )
	{
		return DVec4{ findShader( x )
			, expr::makeSign4D( makeExpr( x ) ) };
	}

	inline Float floor( Float const & x )
	{
		return Float{ findShader( x )
			, expr::makeFloor1F( makeExpr( x ) ) };
	}

	inline Vec2 floor( Vec2 const & x )
	{
		return Vec2{ findShader( x )
			, expr::makeFloor2F( makeExpr( x ) ) };
	}

	inline Vec3 floor( Vec3 const & x )
	{
		return Vec3{ findShader( x )
			, expr::makeFloor3F( makeExpr( x ) ) };
	}

	inline Vec4 floor( Vec4 const & x )
	{
		return Vec4{ findShader( x )
			, expr::makeFloor4F( makeExpr( x ) ) };
	}

	inline Double floor( Double const & x )
	{
		return Double{ findShader( x )
			, expr::makeFloor1D( makeExpr( x ) ) };
	}

	inline DVec2 floor( DVec2 const & x )
	{
		return DVec2{ findShader( x )
			, expr::makeFloor2D( makeExpr( x ) ) };
	}

	inline DVec3 floor( DVec3 const & x )
	{
		return DVec3{ findShader( x )
			, expr::makeFloor3D( makeExpr( x ) ) };
	}

	inline DVec4 floor( DVec4 const & x )
	{
		return DVec4{ findShader( x )
			, expr::makeFloor4D( makeExpr( x ) ) };
	}

	inline Float trunc( Float const & x )
	{
		return Float{ findShader( x )
			, expr::makeTrunc1F( makeExpr( x ) ) };
	}

	inline Vec2 trunc( Vec2 const & x )
	{
		return Vec2{ findShader( x )
			, expr::makeTrunc2F( makeExpr( x ) ) };
	}

	inline Vec3 trunc( Vec3 const & x )
	{
		return Vec3{ findShader( x )
			, expr::makeTrunc3F( makeExpr( x ) ) };
	}

	inline Vec4 trunc( Vec4 const & x )
	{
		return Vec4{ findShader( x )
			, expr::makeTrunc4F( makeExpr( x ) ) };
	}

	inline Double trunc( Double const & x )
	{
		return Double{ findShader( x )
			, expr::makeTrunc1D( makeExpr( x ) ) };
	}

	inline DVec2 trunc( DVec2 const & x )
	{
		return DVec2{ findShader( x )
			, expr::makeTrunc2D( makeExpr( x ) ) };
	}

	inline DVec3 trunc( DVec3 const & x )
	{
		return DVec3{ findShader( x )
			, expr::makeTrunc3D( makeExpr( x ) ) };
	}

	inline DVec4 trunc( DVec4 const & x )
	{
		return DVec4{ findShader( x )
			, expr::makeTrunc4D( makeExpr( x ) ) };
	}

	inline Float round( Float const & x )
	{
		return Float{ findShader( x )
			, expr::makeRound1F( makeExpr( x ) ) };
	}

	inline Vec2 round( Vec2 const & x )
	{
		return Vec2{ findShader( x )
			, expr::makeRound2F( makeExpr( x ) ) };
	}

	inline Vec3 round( Vec3 const & x )
	{
		return Vec3{ findShader( x )
			, expr::makeRound3F( makeExpr( x ) ) };
	}

	inline Vec4 round( Vec4 const & x )
	{
		return Vec4{ findShader( x )
			, expr::makeRound4F( makeExpr( x ) ) };
	}

	inline Double round( Double const & x )
	{
		return Double{ findShader( x )
			, expr::makeRound1D( makeExpr( x ) ) };
	}

	inline DVec2 round( DVec2 const & x )
	{
		return DVec2{ findShader( x )
			, expr::makeRound2D( makeExpr( x ) ) };
	}

	inline DVec3 round( DVec3 const & x )
	{
		return DVec3{ findShader( x )
			, expr::makeRound3D( makeExpr( x ) ) };
	}

	inline DVec4 round( DVec4 const & x )
	{
		return DVec4{ findShader( x )
			, expr::makeRound4D( makeExpr( x ) ) };
	}

	inline Float roundEven( Float const & x )
	{
		return Float{ findShader( x )
			, expr::makeRoundEven1F( makeExpr( x ) ) };
	}

	inline Vec2 roundEven( Vec2 const & x )
	{
		return Vec2{ findShader( x )
			, expr::makeRoundEven2F( makeExpr( x ) ) };
	}

	inline Vec3 roundEven( Vec3 const & x )
	{
		return Vec3{ findShader( x )
			, expr::makeRoundEven3F( makeExpr( x ) ) };
	}

	inline Vec4 roundEven( Vec4 const & x )
	{
		return Vec4{ findShader( x )
			, expr::makeRoundEven4F( makeExpr( x ) ) };
	}

	inline Double roundEven( Double const & x )
	{
		return Double{ findShader( x )
			, expr::makeRoundEven1D( makeExpr( x ) ) };
	}

	inline DVec2 roundEven( DVec2 const & x )
	{
		return DVec2{ findShader( x )
			, expr::makeRoundEven2D( makeExpr( x ) ) };
	}

	inline DVec3 roundEven( DVec3 const & x )
	{
		return DVec3{ findShader( x )
			, expr::makeRoundEven3D( makeExpr( x ) ) };
	}

	inline DVec4 roundEven( DVec4 const & x )
	{
		return DVec4{ findShader( x )
			, expr::makeRoundEven4D( makeExpr( x ) ) };
	}

	inline Float ceil( Float const & x )
	{
		return Float{ findShader( x )
			, expr::makeCeil1F( makeExpr( x ) ) };
	}

	inline Vec2 ceil( Vec2 const & x )
	{
		return Vec2{ findShader( x )
			, expr::makeCeil2F( makeExpr( x ) ) };
	}

	inline Vec3 ceil( Vec3 const & x )
	{
		return Vec3{ findShader( x )
			, expr::makeCeil3F( makeExpr( x ) ) };
	}

	inline Vec4 ceil( Vec4 const & x )
	{
		return Vec4{ findShader( x )
			, expr::makeCeil4F( makeExpr( x ) ) };
	}

	inline Double ceil( Double const & x )
	{
		return Double{ findShader( x )
			, expr::makeCeil1D( makeExpr( x ) ) };
	}

	inline DVec2 ceil( DVec2 const & x )
	{
		return DVec2{ findShader( x )
			, expr::makeCeil2D( makeExpr( x ) ) };
	}

	inline DVec3 ceil( DVec3 const & x )
	{
		return DVec3{ findShader( x )
			, expr::makeCeil3D( makeExpr( x ) ) };
	}

	inline DVec4 ceil( DVec4 const & x )
	{
		return DVec4{ findShader( x )
			, expr::makeCeil4D( makeExpr( x ) ) };
	}

	inline Float fract( Float const & x )
	{
		return Float{ findShader( x )
			, expr::makeFract1F( makeExpr( x ) ) };
	}

	inline Vec2 fract( Vec2 const & x )
	{
		return Vec2{ findShader( x )
			, expr::makeFract2F( makeExpr( x ) ) };
	}

	inline Vec3 fract( Vec3 const & x )
	{
		return Vec3{ findShader( x )
			, expr::makeFract3F( makeExpr( x ) ) };
	}

	inline Vec4 fract( Vec4 const & x )
	{
		return Vec4{ findShader( x )
			, expr::makeFract4F( makeExpr( x ) ) };
	}

	inline Double fract( Double const & x )
	{
		return Double{ findShader( x )
			, expr::makeFract1D( makeExpr( x ) ) };
	}

	inline DVec2 fract( DVec2 const & x )
	{
		return DVec2{ findShader( x )
			, expr::makeFract2D( makeExpr( x ) ) };
	}

	inline DVec3 fract( DVec3 const & x )
	{
		return DVec3{ findShader( x )
			, expr::makeFract3D( makeExpr( x ) ) };
	}

	inline DVec4 fract( DVec4 const & x )
	{
		return DVec4{ findShader( x )
			, expr::makeFract4D( makeExpr( x ) ) };
	}

	inline Float mod( Float const & x
		, Float const & y )
	{
		return Float{ findShader( x, y )
			, expr::makeMod11F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Vec2 mod( Vec2 const & x
		, Vec2 const & y )
	{
		return Vec2{ findShader( x, y )
			, expr::makeMod22F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Vec3 mod( Vec3 const & x
		, Vec3 const & y )
	{
		return Vec3{ findShader( x, y )
			, expr::makeMod33F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Vec4 mod( Vec4 const & x
		, Vec4 const & y )
	{
		return Vec4{ findShader( x, y )
			, expr::makeMod44F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Vec2 mod( Vec2 const & x
		, Float const & y )
	{
		return Vec2{ findShader( x, y )
			, expr::makeMod21F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Vec3 mod( Vec3 const & x
		, Float const & y )
	{
		return Vec3{ findShader( x, y )
			, expr::makeMod31F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Vec4 mod( Vec4 const & x
		, Float const & y )
	{
		return Vec4{ findShader( x, y )
			, expr::makeMod41F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Double mod( Double const & x
		, Double const & y )
	{
		return Double{ findShader( x, y )
			, expr::makeMod11D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline DVec2 mod( DVec2 const & x
		, DVec2 const & y )
	{
		return DVec2{ findShader( x, y )
			, expr::makeMod22D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline DVec3 mod( DVec3 const & x
		, DVec3 const & y )
	{
		return DVec3{ findShader( x, y )
			, expr::makeMod33D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline DVec4 mod( DVec4 const & x
		, DVec4 const & y )
	{
		return DVec4{ findShader( x, y )
			, expr::makeMod44D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline DVec2 mod( DVec2 const & x
		, Double const & y )
	{
		return DVec2{ findShader( x, y )
			, expr::makeMod21D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline DVec3 mod( DVec3 const & x
		, Double const & y )
	{
		return DVec3{ findShader( x, y )
			, expr::makeMod31D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline DVec4 mod( DVec4 const & x
		, Double const & y )
	{
		return DVec4{ findShader( x, y )
			, expr::makeMod41D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Float modf( Float const & x
		, Float const & i )
	{
		return Float{ findShader( x, i )
			, expr::makeModf1F( makeExpr( x )
				, makeExpr( i ) ) };
	}

	inline Vec2 modf( Vec2 const & x
		, Vec2 const & i )
	{
		return Vec2{ findShader( x, i )
			, expr::makeModf2F( makeExpr( x )
				, makeExpr( i ) ) };
	}

	inline Vec3 modf( Vec3 const & x
		, Vec3 const & i )
	{
		return Vec3{ findShader( x, i )
			, expr::makeModf3F( makeExpr( x )
				, makeExpr( i ) ) };
	}

	inline Vec4 modf( Vec4 const & x
		, Vec4 const & i )
	{
		return Vec4{ findShader( x, i )
			, expr::makeModf4F( makeExpr( x )
				, makeExpr( i ) ) };
	}

	inline Double modf( Double const & x
		, Double const & i )
	{
		return Double{ findShader( x, i )
			, expr::makeModf1D( makeExpr( x )
				, makeExpr( i ) ) };
	}

	inline DVec2 modf( DVec2 const & x
		, DVec2 const & i )
	{
		return DVec2{ findShader( x, i )
			, expr::makeModf2D( makeExpr( x )
				, makeExpr( i ) ) };
	}

	inline DVec3 modf( DVec3 const & x
		, DVec3 const & i )
	{
		return DVec3{ findShader( x, i )
			, expr::makeModf3D( makeExpr( x )
				, makeExpr( i ) ) };
	}

	inline DVec4 modf( DVec4 const & x
		, DVec4 const & i )
	{
		return DVec4{ findShader( x, i )
			, expr::makeModf4D( makeExpr( x )
				, makeExpr( i ) ) };
	}

	inline Float min( Float const & x
		, Float const & y )
	{
		return Float{ findShader( x, y )
			, expr::makeMin11F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Vec2 min( Vec2 const & x
		, Vec2 const & y )
	{
		return Vec2{ findShader( x, y )
			, expr::makeMin22F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Vec3 min( Vec3 const & x
		, Vec3 const & y )
	{
		return Vec3{ findShader( x, y )
			, expr::makeMin33F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Vec4 min( Vec4 const & x
		, Vec4 const & y )
	{
		return Vec4{ findShader( x, y )
			, expr::makeMin44F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Vec2 min( Vec2 const & x
		, Float const & y )
	{
		return Vec2{ findShader( x, y )
			, expr::makeMin21F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Vec3 min( Vec3 const & x
		, Float const & y )
	{
		return Vec3{ findShader( x, y )
			, expr::makeMin31F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Vec4 min( Vec4 const & x
		, Float const & y )
	{
		return Vec4{ findShader( x, y )
			, expr::makeMin41F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Double min( Double const & x
		, Double const & y )
	{
		return Double{ findShader( x, y )
			, expr::makeMin11D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline DVec2 min( DVec2 const & x
		, DVec2 const & y )
	{
		return DVec2{ findShader( x, y )
			, expr::makeMin22D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline DVec3 min( DVec3 const & x
		, DVec3 const & y )
	{
		return DVec3{ findShader( x, y )
			, expr::makeMin33D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline DVec4 min( DVec4 const & x
		, DVec4 const & y )
	{
		return DVec4{ findShader( x, y )
			, expr::makeMin44D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline DVec2 min( DVec2 const & x
		, Double const & y )
	{
		return DVec2{ findShader( x, y )
			, expr::makeMin21D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline DVec3 min( DVec3 const & x
		, Double const & y )
	{
		return DVec3{ findShader( x, y )
			, expr::makeMin31D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline DVec4 min( DVec4 const & x
		, Double const & y )
	{
		return DVec4{ findShader( x, y )
			, expr::makeMin41D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Int min( Int const & x
		, Int const & y )
	{
		return Int{ findShader( x, y )
			, expr::makeMin11I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline IVec2 min( IVec2 const & x
		, IVec2 const & y )
	{
		return IVec2{ findShader( x, y )
			, expr::makeMin22I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline IVec3 min( IVec3 const & x
		, IVec3 const & y )
	{
		return IVec3{ findShader( x, y )
			, expr::makeMin33I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline IVec4 min( IVec4 const & x
		, IVec4 const & y )
	{
		return IVec4{ findShader( x, y )
			, expr::makeMin44I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline IVec2 min( IVec2 const & x
		, Int const & y )
	{
		return IVec2{ findShader( x, y )
			, expr::makeMin21I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline IVec3 min( IVec3 const & x
		, Int const & y )
	{
		return IVec3{ findShader( x, y )
			, expr::makeMin31I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline IVec4 min( IVec4 const & x
		, Int const & y )
	{
		return IVec4{ findShader( x, y )
			, expr::makeMin41I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline UInt min( UInt const & x
		, UInt const & y )
	{
		return UInt{ findShader( x, y )
			, expr::makeMin11U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline UVec2 min( UVec2 const & x
		, UVec2 const & y )
	{
		return UVec2{ findShader( x, y )
			, expr::makeMin22U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline UVec3 min( UVec3 const & x
		, UVec3 const & y )
	{
		return UVec3{ findShader( x, y )
			, expr::makeMin33U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline UVec4 min( UVec4 const & x
		, UVec4 const & y )
	{
		return UVec4{ findShader( x, y )
			, expr::makeMin44U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline UVec2 min( UVec2 const & x
		, UInt const & y )
	{
		return UVec2{ findShader( x, y )
			, expr::makeMin21U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline UVec3 min( UVec3 const & x
		, UInt const & y )
	{
		return UVec3{ findShader( x, y )
			, expr::makeMin31U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline UVec4 min( UVec4 const & x
		, UInt const & y )
	{
		return UVec4{ findShader( x, y )
			, expr::makeMin41U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Float max( Float const & x
		, Float const & y )
	{
		return Float{ findShader( x, y )
			, expr::makeMax11F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Vec2 max( Vec2 const & x
		, Vec2 const & y )
	{
		return Vec2{ findShader( x, y )
			, expr::makeMax22F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Vec3 max( Vec3 const & x
		, Vec3 const & y )
	{
		return Vec3{ findShader( x, y )
			, expr::makeMax33F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Vec4 max( Vec4 const & x
		, Vec4 const & y )
	{
		return Vec4{ findShader( x, y )
			, expr::makeMax44F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Vec2 max( Vec2 const & x
		, Float const & y )
	{
		return Vec2{ findShader( x, y )
			, expr::makeMax21F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Vec3 max( Vec3 const & x
		, Float const & y )
	{
		return Vec3{ findShader( x, y )
			, expr::makeMax31F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Vec4 max( Vec4 const & x
		, Float const & y )
	{
		return Vec4{ findShader( x, y )
			, expr::makeMax41F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Double max( Double const & x
		, Double const & y )
	{
		return Double{ findShader( x, y )
			, expr::makeMax11D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline DVec2 max( DVec2 const & x
		, DVec2 const & y )
	{
		return DVec2{ findShader( x, y )
			, expr::makeMax22D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline DVec3 max( DVec3 const & x
		, DVec3 const & y )
	{
		return DVec3{ findShader( x, y )
			, expr::makeMax33D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline DVec4 max( DVec4 const & x
		, DVec4 const & y )
	{
		return DVec4{ findShader( x, y )
			, expr::makeMax44D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline DVec2 max( DVec2 const & x
		, Double const & y )
	{
		return DVec2{ findShader( x, y )
			, expr::makeMax21D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline DVec3 max( DVec3 const & x
		, Double const & y )
	{
		return DVec3{ findShader( x, y )
			, expr::makeMax31D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline DVec4 max( DVec4 const & x
		, Double const & y )
	{
		return DVec4{ findShader( x, y )
			, expr::makeMax41D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Int max( Int const & x
		, Int const & y )
	{
		return Int{ findShader( x, y )
			, expr::makeMax11I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline IVec2 max( IVec2 const & x
		, IVec2 const & y )
	{
		return IVec2{ findShader( x, y )
			, expr::makeMax22I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline IVec3 max( IVec3 const & x
		, IVec3 const & y )
	{
		return IVec3{ findShader( x, y )
			, expr::makeMax33I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline IVec4 max( IVec4 const & x
		, IVec4 const & y )
	{
		return IVec4{ findShader( x, y )
			, expr::makeMax44I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline IVec2 max( IVec2 const & x
		, Int const & y )
	{
		return IVec2{ findShader( x, y )
			, expr::makeMax21I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline IVec3 max( IVec3 const & x
		, Int const & y )
	{
		return IVec3{ findShader( x, y )
			, expr::makeMax31I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline IVec4 max( IVec4 const & x
		, Int const & y )
	{
		return IVec4{ findShader( x, y )
			, expr::makeMax41I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline UInt max( UInt const & x
		, UInt const & y )
	{
		return UInt{ findShader( x, y )
			, expr::makeMax11U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline UVec2 max( UVec2 const & x
		, UVec2 const & y )
	{
		return UVec2{ findShader( x, y )
			, expr::makeMax22U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline UVec3 max( UVec3 const & x
		, UVec3 const & y )
	{
		return UVec3{ findShader( x, y )
			, expr::makeMax33U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline UVec4 max( UVec4 const & x
		, UVec4 const & y )
	{
		return UVec4{ findShader( x, y )
			, expr::makeMax44U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline UVec2 max( UVec2 const & x
		, UInt const & y )
	{
		return UVec2{ findShader( x, y )
			, expr::makeMax21U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline UVec3 max( UVec3 const & x
		, UInt const & y )
	{
		return UVec3{ findShader( x, y )
			, expr::makeMax31U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline UVec4 max( UVec4 const & x
		, UInt const & y )
	{
		return UVec4{ findShader( x, y )
			, expr::makeMax41U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Float clamp( Float const & x
		, Float const & minVal
		, Float const & maxVal )
	{
		return Float{ findShader( x, minVal, maxVal )
			, expr::makeClamp11F( makeExpr( x )
				, makeExpr( minVal )
				, makeExpr( maxVal ) ) };
	}

	inline Vec2 clamp( Vec2 const & x
		, Vec2 const & minVal
		, Vec2 const & maxVal )
	{
		return Vec2{ findShader( x, minVal, maxVal )
			, expr::makeClamp22F( makeExpr( x )
				, makeExpr( minVal )
				, makeExpr( maxVal ) ) };
	}

	inline Vec3 clamp( Vec3 const & x
		, Vec3 const & minVal
		, Vec3 const & maxVal )
	{
		return Vec3{ findShader( x, minVal, maxVal )
			, expr::makeClamp33F( makeExpr( x )
				, makeExpr( minVal )
				, makeExpr( maxVal ) ) };
	}

	inline Vec4 clamp( Vec4 const & x
		, Vec4 const & minVal
		, Vec4 const & maxVal )
	{
		return Vec4{ findShader( x, minVal, maxVal )
			, expr::makeClamp44F( makeExpr( x )
				, makeExpr( minVal )
				, makeExpr( maxVal ) ) };
	}

	inline Vec2 clamp( Vec2 const & x
		, Float const & minVal
		, Float const & maxVal )
	{
		return Vec2{ findShader( x, minVal, maxVal )
			, expr::makeClamp21F( makeExpr( x )
				, makeExpr( minVal )
				, makeExpr( maxVal ) ) };
	}

	inline Vec3 clamp( Vec3 const & x
		, Float const & minVal
		, Float const & maxVal )
	{
		return Vec3{ findShader( x, minVal, maxVal )
			, expr::makeClamp31F( makeExpr( x )
				, makeExpr( minVal )
				, makeExpr( maxVal ) ) };
	}

	inline Vec4 clamp( Vec4 const & x
		, Float const & minVal
		, Float const & maxVal )
	{
		return Vec4{ findShader( x, minVal, maxVal )
			, expr::makeClamp41F( makeExpr( x )
				, makeExpr( minVal )
				, makeExpr( maxVal ) ) };
	}

	inline Double clamp( Double const & x
		, Double const & minVal
		, Double const & maxVal )
	{
		return Double{ findShader( x, minVal, maxVal )
			, expr::makeClamp11D( makeExpr( x )
				, makeExpr( minVal )
				, makeExpr( maxVal ) ) };
	}

	inline DVec2 clamp( DVec2 const & x
		, DVec2 const & minVal
		, DVec2 const & maxVal )
	{
		return DVec2{ findShader( x, minVal, maxVal )
			, expr::makeClamp22D( makeExpr( x )
				, makeExpr( minVal )
				, makeExpr( maxVal ) ) };
	}

	inline DVec3 clamp( DVec3 const & x
		, DVec3 const & minVal
		, DVec3 const & maxVal )
	{
		return DVec3{ findShader( x, minVal, maxVal )
			, expr::makeClamp33D( makeExpr( x )
				, makeExpr( minVal )
				, makeExpr( maxVal ) ) };
	}

	inline DVec4 clamp( DVec4 const & x
		, DVec4 const & minVal
		, DVec4 const & maxVal )
	{
		return DVec4{ findShader( x, minVal, maxVal )
			, expr::makeClamp44D( makeExpr( x )
				, makeExpr( minVal )
				, makeExpr( maxVal ) ) };
	}

	inline DVec2 clamp( DVec2 const & x
		, Double const & minVal
		, Double const & maxVal )
	{
		return DVec2{ findShader( x, minVal, maxVal )
			, expr::makeClamp21D( makeExpr( x )
				, makeExpr( minVal )
				, makeExpr( maxVal ) ) };
	}

	inline DVec3 clamp( DVec3 const & x
		, Double const & minVal
		, Double const & maxVal )
	{
		return DVec3{ findShader( x, minVal, maxVal )
			, expr::makeClamp31D( makeExpr( x )
				, makeExpr( minVal )
				, makeExpr( maxVal ) ) };
	}

	inline DVec4 clamp( DVec4 const & x
		, Double const & minVal
		, Double const & maxVal )
	{
		return DVec4{ findShader( x, minVal, maxVal )
			, expr::makeClamp41D( makeExpr( x )
				, makeExpr( minVal )
				, makeExpr( maxVal ) ) };
	}

	inline Int clamp( Int const & x
		, Int const & minVal
		, Int const & maxVal )
	{
		return Int{ findShader( x, minVal, maxVal )
			, expr::makeClamp11I( makeExpr( x )
				, makeExpr( minVal )
				, makeExpr( maxVal ) ) };
	}

	inline IVec2 clamp( IVec2 const & x
		, IVec2 const & minVal
		, IVec2 const & maxVal )
	{
		return IVec2{ findShader( x, minVal, maxVal )
			, expr::makeClamp22I( makeExpr( x )
				, makeExpr( minVal )
				, makeExpr( maxVal ) ) };
	}

	inline IVec3 clamp( IVec3 const & x
		, IVec3 const & minVal
		, IVec3 const & maxVal )
	{
		return IVec3{ findShader( x, minVal, maxVal )
			, expr::makeClamp33I( makeExpr( x )
				, makeExpr( minVal )
				, makeExpr( maxVal ) ) };
	}

	inline IVec4 clamp( IVec4 const & x
		, IVec4 const & minVal
		, IVec4 const & maxVal )
	{
		return IVec4{ findShader( x, minVal, maxVal )
			, expr::makeClamp44I( makeExpr( x )
				, makeExpr( minVal )
				, makeExpr( maxVal ) ) };
	}

	inline IVec2 clamp( IVec2 const & x
		, Int const & minVal
		, Int const & maxVal )
	{
		return IVec2{ findShader( x, minVal, maxVal )
			, expr::makeClamp21I( makeExpr( x )
				, makeExpr( minVal )
				, makeExpr( maxVal ) ) };
	}

	inline IVec3 clamp( IVec3 const & x
		, Int const & minVal
		, Int const & maxVal )
	{
		return IVec3{ findShader( x, minVal, maxVal )
			, expr::makeClamp31I( makeExpr( x )
				, makeExpr( minVal )
				, makeExpr( maxVal ) ) };
	}

	inline IVec4 clamp( IVec4 const & x
		, Int const & minVal
		, Int const & maxVal )
	{
		return IVec4{ findShader( x, minVal, maxVal )
			, expr::makeClamp41I( makeExpr( x )
				, makeExpr( minVal )
				, makeExpr( maxVal ) ) };
	}

	inline UInt clamp( UInt const & x
		, UInt const & minVal
		, UInt const & maxVal )
	{
		return UInt{ findShader( x, minVal, maxVal )
			, expr::makeClamp11U( makeExpr( x )
				, makeExpr( minVal )
				, makeExpr( maxVal ) ) };
	}

	inline UVec2 clamp( UVec2 const & x
		, UVec2 const & minVal
		, UVec2 const & maxVal )
	{
		return UVec2{ findShader( x, minVal, maxVal )
			, expr::makeClamp22U( makeExpr( x )
				, makeExpr( minVal )
				, makeExpr( maxVal ) ) };
	}

	inline UVec3 clamp( UVec3 const & x
		, UVec3 const & minVal
		, UVec3 const & maxVal )
	{
		return UVec3{ findShader( x, minVal, maxVal )
			, expr::makeClamp33U( makeExpr( x )
				, makeExpr( minVal )
				, makeExpr( maxVal ) ) };
	}

	inline UVec4 clamp( UVec4 const & x
		, UVec4 const & minVal
		, UVec4 const & maxVal )
	{
		return UVec4{ findShader( x, minVal, maxVal )
			, expr::makeClamp44U( makeExpr( x )
				, makeExpr( minVal )
				, makeExpr( maxVal ) ) };
	}

	inline UVec2 clamp( UVec2 const & x
		, UInt const & minVal
		, UInt const & maxVal )
	{
		return UVec2{ findShader( x, minVal, maxVal )
			, expr::makeClamp21U( makeExpr( x )
				, makeExpr( minVal )
				, makeExpr( maxVal ) ) };
	}

	inline UVec3 clamp( UVec3 const & x
		, UInt const & minVal
		, UInt const & maxVal )
	{
		return UVec3{ findShader( x, minVal, maxVal )
			, expr::makeClamp31U( makeExpr( x )
				, makeExpr( minVal )
				, makeExpr( maxVal ) ) };
	}

	inline UVec4 clamp( UVec4 const & x
		, UInt const & minVal
		, UInt const & maxVal )
	{
		return UVec4{ findShader( x, minVal, maxVal )
			, expr::makeClamp41U( makeExpr( x )
				, makeExpr( minVal )
				, makeExpr( maxVal ) ) };
	}

	inline Float mix( Float const & x
		, Float const & y
		, Float const & a )
	{
		return Float{ findShader( x, y, a )
			, expr::makeMix11F( makeExpr( x )
				, makeExpr( y )
				, makeExpr( a ) ) };
	}

	inline Vec2 mix( Vec2 const & x
		, Vec2 const & y
		, Vec2 const & a )
	{
		return Vec2{ findShader( x, y, a )
			, expr::makeMix22F( makeExpr( x )
				, makeExpr( y )
				, makeExpr( a ) ) };
	}

	inline Vec3 mix( Vec3 const & x
		, Vec3 const & y
		, Vec3 const & a )
	{
		return Vec3{ findShader( x, y, a )
			, expr::makeMix33F( makeExpr( x )
				, makeExpr( y )
				, makeExpr( a ) ) };
	}

	inline Vec4 mix( Vec4 const & x
		, Vec4 const & y
		, Vec4 const & a )
	{
		return Vec4{ findShader( x, y, a )
			, expr::makeMix44F( makeExpr( x )
				, makeExpr( y )
				, makeExpr( a ) ) };
	}

	inline Vec2 mix( Vec2 const & x
		, Vec2 const & y
		, Float const & a )
	{
		return Vec2{ findShader( x, y, a )
			, expr::makeMix21F( makeExpr( x )
				, makeExpr( y )
				, makeExpr( a ) ) };
	}

	inline Vec3 mix( Vec3 const & x
		, Vec3 const & y
		, Float const & a )
	{
		return Vec3{ findShader( x, y, a )
			, expr::makeMix31F( makeExpr( x )
				, makeExpr( y )
				, makeExpr( a ) ) };
	}

	inline Vec4 mix( Vec4 const & x
		, Vec4 const & y
		, Float const & a )
	{
		return Vec4{ findShader( x, y, a )
			, expr::makeMix41F( makeExpr( x )
				, makeExpr( y )
				, makeExpr( a ) ) };
	}

	inline Float mix( Float const & x
		, Float const & y
		, Boolean const & a )
	{
		return Float{ findShader( x, y, a )
			, expr::makeMix11FB( makeExpr( x )
				, makeExpr( y )
				, makeExpr( a ) ) };
	}

	inline Vec2 mix( Vec2 const & x
		, Vec2 const & y
		, BVec2 const & a )
	{
		return Vec2{ findShader( x, y, a )
			, expr::makeMix22FB( makeExpr( x )
				, makeExpr( y )
				, makeExpr( a ) ) };
	}

	inline Vec3 mix( Vec3 const & x
		, Vec3 const & y
		, BVec3 const & a )
	{
		return Vec3{ findShader( x, y, a )
			, expr::makeMix33FB( makeExpr( x )
				, makeExpr( y )
				, makeExpr( a ) ) };
	}

	inline Vec4 mix( Vec4 const & x
		, Vec4 const & y
		, BVec4 const & a )
	{
		return Vec4{ findShader( x, y, a )
			, expr::makeMix44FB( makeExpr( x )
				, makeExpr( y )
				, makeExpr( a ) ) };
	}

	inline Double mix( Double const & x
		, Double const & y
		, Double const & a )
	{
		return Double{ findShader( x, y, a )
			, expr::makeMix11D( makeExpr( x )
				, makeExpr( y )
				, makeExpr( a ) ) };
	}

	inline DVec2 mix( DVec2 const & x
		, DVec2 const & y
		, DVec2 const & a )
	{
		return DVec2{ findShader( x, y, a )
			, expr::makeMix22D( makeExpr( x )
				, makeExpr( y )
				, makeExpr( a ) ) };
	}

	inline DVec3 mix( DVec3 const & x
		, DVec3 const & y
		, DVec3 const & a )
	{
		return DVec3{ findShader( x, y, a )
			, expr::makeMix33D( makeExpr( x )
				, makeExpr( y )
				, makeExpr( a ) ) };
	}

	inline DVec4 mix( DVec4 const & x
		, DVec4 const & y
		, DVec4 const & a )
	{
		return DVec4{ findShader( x, y, a )
			, expr::makeMix44D( makeExpr( x )
				, makeExpr( y )
				, makeExpr( a ) ) };
	}

	inline DVec2 mix( DVec2 const & x
		, DVec2 const & y
		, Double const & a )
	{
		return DVec2{ findShader( x, y, a )
			, expr::makeMix21D( makeExpr( x )
				, makeExpr( y )
				, makeExpr( a ) ) };
	}

	inline DVec3 mix( DVec3 const & x
		, DVec3 const & y
		, Double const & a )
	{
		return DVec3{ findShader( x, y, a )
			, expr::makeMix31D( makeExpr( x )
				, makeExpr( y )
				, makeExpr( a ) ) };
	}

	inline DVec4 mix( DVec4 const & x
		, DVec4 const & y
		, Double const & a )
	{
		return DVec4{ findShader( x, y, a )
			, expr::makeMix41D( makeExpr( x )
				, makeExpr( y )
				, makeExpr( a ) ) };
	}

	inline Double mix( Double const & x
		, Double const & y
		, Boolean const & a )
	{
		return Double{ findShader( x, y, a )
			, expr::makeMix11DB( makeExpr( x )
				, makeExpr( y )
				, makeExpr( a ) ) };
	}

	inline DVec2 mix( DVec2 const & x
		, DVec2 const & y
		, BVec2 const & a )
	{
		return DVec2{ findShader( x, y, a )
			, expr::makeMix22DB( makeExpr( x )
				, makeExpr( y )
				, makeExpr( a ) ) };
	}

	inline DVec3 mix( DVec3 const & x
		, DVec3 const & y
		, BVec3 const & a )
	{
		return DVec3{ findShader( x, y, a )
			, expr::makeMix33DB( makeExpr( x )
				, makeExpr( y )
				, makeExpr( a ) ) };
	}

	inline DVec4 mix( DVec4 const & x
		, DVec4 const & y
		, BVec4 const & a )
	{
		return DVec4{ findShader( x, y, a )
			, expr::makeMix44DB( makeExpr( x )
				, makeExpr( y )
				, makeExpr( a ) ) };
	}

	inline Float step( Float const & edge
		, Float const & x )
	{
		return Float{ findShader( edge, x )
			, expr::makeStep11F( makeExpr( edge )
				, makeExpr( x ) ) };
	}

	inline Vec2 step( Vec2 const & edge
		, Vec2 const & x )
	{
		return Vec2{ findShader( edge, x )
			, expr::makeStep22F( makeExpr( edge )
				, makeExpr( x ) ) };
	}

	inline Vec3 step( Vec3 const & edge
		, Vec3 const & x )
	{
		return Vec3{ findShader( edge, x )
			, expr::makeStep33F( makeExpr( edge )
				, makeExpr( x ) ) };
	}

	inline Vec4 step( Vec4 const & edge
		, Vec4 const & x )
	{
		return Vec4{ findShader( edge, x )
			, expr::makeStep44F( makeExpr( edge )
				, makeExpr( x ) ) };
	}

	inline Vec2 step( Float const & edge
		, Vec2 const & x )
	{
		return Vec2{ findShader( edge, x )
			, expr::makeStep12F( makeExpr( edge )
				, makeExpr( x ) ) };
	}

	inline Vec3 step( Float const & edge
		, Vec3 const & x )
	{
		return Vec3{ findShader( edge, x )
			, expr::makeStep13F( makeExpr( edge )
				, makeExpr( x ) ) };
	}

	inline Vec4 step( Float const & edge
		, Vec4 const & x )
	{
		return Vec4{ findShader( edge, x )
			, expr::makeStep14F( makeExpr( edge )
				, makeExpr( x ) ) };
	}

	inline Double step( Double const & edge
		, Double const & x )
	{
		return Double{ findShader( edge, x )
			, expr::makeStep11D( makeExpr( edge )
				, makeExpr( x ) ) };
	}

	inline DVec2 step( DVec2 const & edge
		, DVec2 const & x )
	{
		return DVec2{ findShader( edge, x )
			, expr::makeStep22D( makeExpr( edge )
				, makeExpr( x ) ) };
	}

	inline DVec3 step( DVec3 const & edge
		, DVec3 const & x )
	{
		return DVec3{ findShader( edge, x )
			, expr::makeStep33D( makeExpr( edge )
				, makeExpr( x ) ) };
	}

	inline DVec4 step( DVec4 const & edge
		, DVec4 const & x )
	{
		return DVec4{ findShader( edge, x )
			, expr::makeStep44D( makeExpr( edge )
				, makeExpr( x ) ) };
	}

	inline DVec2 step( Double const & edge
		, DVec2 const & x )
	{
		return DVec2{ findShader( edge, x )
			, expr::makeStep12D( makeExpr( edge )
				, makeExpr( x ) ) };
	}

	inline DVec3 step( Double const & edge
		, DVec3 const & x )
	{
		return DVec3{ findShader( edge, x )
			, expr::makeStep13D( makeExpr( edge )
				, makeExpr( x ) ) };
	}

	inline DVec4 step( Double const & edge
		, DVec4 const & x )
	{
		return DVec4{ findShader( edge, x )
			, expr::makeStep14D( makeExpr( edge )
				, makeExpr( x ) ) };
	}

	inline Float smoothStep( Float const & edge0
		, Float const & edge1
		, Float const & x )
	{
		return Float{ findShader( edge0, edge1, x )
			, expr::makeSmoothStep11F( makeExpr( edge0 )
				, makeExpr( edge1 )
				, makeExpr( x ) ) };
	}

	inline Vec2 smoothStep( Vec2 const & edge0
		, Vec2 const & edge1
		, Vec2 const & x )
	{
		return Vec2{ findShader( edge0, edge1, x )
			, expr::makeSmoothStep22F( makeExpr( edge0 )
				, makeExpr( edge1 )
				, makeExpr( x ) ) };
	}

	inline Vec3 smoothStep( Vec3 const & edge0
		, Vec3 const & edge1
		, Vec3 const & x )
	{
		return Vec3{ findShader( edge0, edge1, x )
			, expr::makeSmoothStep33F( makeExpr( edge0 )
				, makeExpr( edge1 )
				, makeExpr( x ) ) };
	}

	inline Vec4 smoothStep( Vec4 const & edge0
		, Vec4 const & edge1
		, Vec4 const & x )
	{
		return Vec4{ findShader( edge0, edge1, x )
			, expr::makeSmoothStep44F( makeExpr( edge0 )
				, makeExpr( edge1 )
				, makeExpr( x ) ) };
	}

	inline Vec2 smoothStep( Float const & edge0
		, Float const & edge1
		, Vec2 const & x )
	{
		return Vec2{ findShader( edge0, edge1, x )
			, expr::makeSmoothStep12F( makeExpr( edge0 )
				, makeExpr( edge1 )
				, makeExpr( x ) ) };
	}

	inline Vec3 smoothStep( Float const & edge0
		, Float const & edge1
		, Vec3 const & x )
	{
		return Vec3{ findShader( edge0, edge1, x )
			, expr::makeSmoothStep13F( makeExpr( edge0 )
				, makeExpr( edge1 )
				, makeExpr( x ) ) };
	}

	inline Vec4 smoothStep( Float const & edge0
		, Float const & edge1
		, Vec4 const & x )
	{
		return Vec4{ findShader( edge0, edge1, x )
			, expr::makeSmoothStep14F( makeExpr( edge0 )
				, makeExpr( edge1 )
				, makeExpr( x ) ) };
	}

	inline Double smoothStep( Double const & edge0
		, Double const & edge1
		, Double const & x )
	{
		return Double{ findShader( edge0, edge1, x )
			, expr::makeSmoothStep11D( makeExpr( edge0 )
				, makeExpr( edge1 )
				, makeExpr( x ) ) };
	}

	inline DVec2 smoothStep( DVec2 const & edge0
		, DVec2 const & edge1
		, DVec2 const & x )
	{
		return DVec2{ findShader( edge0, edge1, x )
			, expr::makeSmoothStep22D( makeExpr( edge0 )
				, makeExpr( edge1 )
				, makeExpr( x ) ) };
	}

	inline DVec3 smoothStep( DVec3 const & edge0
		, DVec3 const & edge1
		, DVec3 const & x )
	{
		return DVec3{ findShader( edge0, edge1, x )
			, expr::makeSmoothStep33D( makeExpr( edge0 )
				, makeExpr( edge1 )
				, makeExpr( x ) ) };
	}

	inline DVec4 smoothStep( DVec4 const & edge0
		, DVec4 const & edge1
		, DVec4 const & x )
	{
		return DVec4{ findShader( edge0, edge1, x )
			, expr::makeSmoothStep44D( makeExpr( edge0 )
				, makeExpr( edge1 )
				, makeExpr( x ) ) };
	}

	inline DVec2 smoothStep( Double const & edge0
		, Double const & edge1
		, DVec2 const & x )
	{
		return DVec2{ findShader( edge0, edge1, x )
			, expr::makeSmoothStep12D( makeExpr( edge0 )
				, makeExpr( edge1 )
				, makeExpr( x ) ) };
	}

	inline DVec3 smoothStep( Double const & edge0
		, Double const & edge1
		, DVec3 const & x )
	{
		return DVec3{ findShader( edge0, edge1, x )
			, expr::makeSmoothStep13D( makeExpr( edge0 )
				, makeExpr( edge1 )
				, makeExpr( x ) ) };
	}

	inline DVec4 smoothStep( Double const & edge0
		, Double const & edge1
		, DVec4 const & x )
	{
		return DVec4{ findShader( edge0, edge1, x )
			, expr::makeSmoothStep14D( makeExpr( edge0 )
				, makeExpr( edge1 )
				, makeExpr( x ) ) };
	}

	inline Boolean isnan( Float const & x )
	{
		return Boolean{ findShader( x )
			, expr::makeIsnan1F( makeExpr( x ) ) };
	}

	inline BVec2 isnan( Vec2 const & x )
	{
		return BVec2{ findShader( x )
			, expr::makeIsnan2F( makeExpr( x ) ) };
	}

	inline BVec3 isnan( Vec3 const & x )
	{
		return BVec3{ findShader( x )
			, expr::makeIsnan3F( makeExpr( x ) ) };
	}

	inline BVec4 isnan( Vec4 const & x )
	{
		return BVec4{ findShader( x )
			, expr::makeIsnan4F( makeExpr( x ) ) };
	}

	inline Boolean isnan( Double const & x )
	{
		return Boolean{ findShader( x )
			, expr::makeIsnan1D( makeExpr( x ) ) };
	}

	inline BVec2 isnan( DVec2 const & x )
	{
		return BVec2{ findShader( x )
			, expr::makeIsnan2D( makeExpr( x ) ) };
	}

	inline BVec3 isnan( DVec3 const & x )
	{
		return BVec3{ findShader( x )
			, expr::makeIsnan3D( makeExpr( x ) ) };
	}

	inline BVec4 isnan( DVec4 const & x )
	{
		return BVec4{ findShader( x )
			, expr::makeIsnan4D( makeExpr( x ) ) };
	}

	inline Boolean isinf( Float const & x )
	{
		return Boolean{ findShader( x )
			, expr::makeIsinf1F( makeExpr( x ) ) };
	}

	inline BVec2 isinf( Vec2 const & x )
	{
		return BVec2{ findShader( x )
			, expr::makeIsinf2F( makeExpr( x ) ) };
	}

	inline BVec3 isinf( Vec3 const & x )
	{
		return BVec3{ findShader( x )
			, expr::makeIsinf3F( makeExpr( x ) ) };
	}

	inline BVec4 isinf( Vec4 const & x )
	{
		return BVec4{ findShader( x )
			, expr::makeIsinf4F( makeExpr( x ) ) };
	}

	inline Boolean isinf( Double const & x )
	{
		return Boolean{ findShader( x )
			, expr::makeIsinf1D( makeExpr( x ) ) };
	}

	inline BVec2 isinf( DVec2 const & x )
	{
		return BVec2{ findShader( x )
			, expr::makeIsinf2D( makeExpr( x ) ) };
	}

	inline BVec3 isinf( DVec3 const & x )
	{
		return BVec3{ findShader( x )
			, expr::makeIsinf3D( makeExpr( x ) ) };
	}

	inline BVec4 isinf( DVec4 const & x )
	{
		return BVec4{ findShader( x )
			, expr::makeIsinf4D( makeExpr( x ) ) };
	}

	inline Int floatBitsToInt( Float const & value )
	{
		return Int{ findShader( value )
			, expr::makeFloatBitsToInt1( makeExpr( value ) ) };
	}

	inline IVec2 floatBitsToInt( Vec2 const & value )
	{
		return IVec2{ findShader( value )
			, expr::makeFloatBitsToInt2( makeExpr( value ) ) };
	}

	inline IVec3 floatBitsToInt( Vec3 const & value )
	{
		return IVec3{ findShader( value )
			, expr::makeFloatBitsToInt3( makeExpr( value ) ) };
	}

	inline IVec4 floatBitsToInt( Vec4 const & value )
	{
		return IVec4{ findShader( value )
			, expr::makeFloatBitsToInt4( makeExpr( value ) ) };
	}

	inline UInt floatBitsToUInt( Float const & value )
	{
		return UInt{ findShader( value )
			, expr::makeFloatBitsToUInt1( makeExpr( value ) ) };
	}

	inline UVec2 floatBitsToUInt( Vec2 const & value )
	{
		return UVec2{ findShader( value )
			, expr::makeFloatBitsToUInt2( makeExpr( value ) ) };
	}

	inline UVec3 floatBitsToUInt( Vec3 const & value )
	{
		return UVec3{ findShader( value )
			, expr::makeFloatBitsToUInt3( makeExpr( value ) ) };
	}

	inline UVec4 floatBitsToUInt( Vec4 const & value )
	{
		return UVec4{ findShader( value )
			, expr::makeFloatBitsToUInt4( makeExpr( value ) ) };
	}

	inline Float intBitsToFloat( Int const & x )
	{
		return Float{ findShader( x )
			, expr::makeIntBitsToFloat1( makeExpr( x ) ) };
	}

	inline Vec2 intBitsToFloat( IVec2 const & x )
	{
		return Vec2{ findShader( x )
			, expr::makeIntBitsToFloat2( makeExpr( x ) ) };
	}

	inline Vec3 intBitsToFloat( IVec3 const & x )
	{
		return Vec3{ findShader( x )
			, expr::makeIntBitsToFloat3( makeExpr( x ) ) };
	}

	inline Vec4 intBitsToFloat( IVec4 const & x )
	{
		return Vec4{ findShader( x )
			, expr::makeIntBitsToFloat4( makeExpr( x ) ) };
	}

	inline Float uintBitsToFloat( UInt const & x )
	{
		return Float{ findShader( x )
			, expr::makeUintBitsToFloat1( makeExpr( x ) ) };
	}

	inline Vec2 uintBitsToFloat( UVec2 const & x )
	{
		return Vec2{ findShader( x )
			, expr::makeUintBitsToFloat2( makeExpr( x ) ) };
	}

	inline Vec3 uintBitsToFloat( UVec3 const & x )
	{
		return Vec3{ findShader( x )
			, expr::makeUintBitsToFloat3( makeExpr( x ) ) };
	}

	inline Vec4 uintBitsToFloat( UVec4 const & x )
	{
		return Vec4{ findShader( x )
			, expr::makeUintBitsToFloat4( makeExpr( x ) ) };
	}

	inline Float fma( Float const & a
		, Float const & b
		, Float const & c )
	{
		return Float{ findShader( a, b, c )
			, expr::makeFma1F( makeExpr( a )
				, makeExpr( b )
				, makeExpr( c ) ) };
	}

	inline Vec2 fma( Vec2 const & a
		, Vec2 const & b
		, Vec2 const & c )
	{
		return Vec2{ findShader( a, b, c )
			, expr::makeFma2F( makeExpr( a )
				, makeExpr( b )
				, makeExpr( c ) ) };
	}

	inline Vec3 fma( Vec3 const & a
		, Vec3 const & b
		, Vec3 const & c )
	{
		return Vec3{ findShader( a, b, c )
			, expr::makeFma3F( makeExpr( a )
				, makeExpr( b )
				, makeExpr( c ) ) };
	}

	inline Vec4 fma( Vec4 const & a
		, Vec4 const & b
		, Vec4 const & c )
	{
		return Vec4{ findShader( a, b, c )
			, expr::makeFma4F( makeExpr( a )
				, makeExpr( b )
				, makeExpr( c ) ) };
	}

	inline Double fma( Double const & a
		, Double const & b
		, Double const & c )
	{
		return Double{ findShader( a, b, c )
			, expr::makeFma1D( makeExpr( a )
				, makeExpr( b )
				, makeExpr( c ) ) };
	}

	inline DVec2 fma( DVec2 const & a
		, DVec2 const & b
		, DVec2 const & c )
	{
		return DVec2{ findShader( a, b, c )
			, expr::makeFma2D( makeExpr( a )
				, makeExpr( b )
				, makeExpr( c ) ) };
	}

	inline DVec3 fma( DVec3 const & a
		, DVec3 const & b
		, DVec3 const & c )
	{
		return DVec3{ findShader( a, b, c )
			, expr::makeFma3D( makeExpr( a )
				, makeExpr( b )
				, makeExpr( c ) ) };
	}

	inline DVec4 fma( DVec4 const & a
		, DVec4 const & b
		, DVec4 const & c )
	{
		return DVec4{ findShader( a, b, c )
			, expr::makeFma4D( makeExpr( a )
				, makeExpr( b )
				, makeExpr( c ) ) };
	}

	inline Float frexp( Float const & x
		, Int const & exp )
	{
		return Float{ findShader( x, exp )
			, expr::makeFrexp1F( makeExpr( x )
				, makeExpr( exp ) ) };
	}

	inline Vec2 frexp( Vec2 const & x
		, IVec2 const & exp )
	{
		return Vec2{ findShader( x, exp )
			, expr::makeFrexp2F( makeExpr( x )
				, makeExpr( exp ) ) };
	}

	inline Vec3 frexp( Vec3 const & x
		, IVec3 const & exp )
	{
		return Vec3{ findShader( x, exp )
			, expr::makeFrexp3F( makeExpr( x )
				, makeExpr( exp ) ) };
	}

	inline Vec4 frexp( Vec4 const & x
		, IVec4 const & exp )
	{
		return Vec4{ findShader( x, exp )
			, expr::makeFrexp4F( makeExpr( x )
				, makeExpr( exp ) ) };
	}

	inline Double frexp( Double const & x
		, Int const & exp )
	{
		return Double{ findShader( x, exp )
			, expr::makeFrexp1D( makeExpr( x )
				, makeExpr( exp ) ) };
	}

	inline DVec2 frexp( DVec2 const & x
		, IVec2 const & exp )
	{
		return DVec2{ findShader( x, exp )
			, expr::makeFrexp2D( makeExpr( x )
				, makeExpr( exp ) ) };
	}

	inline DVec3 frexp( DVec3 const & x
		, IVec3 const & exp )
	{
		return DVec3{ findShader( x, exp )
			, expr::makeFrexp3D( makeExpr( x )
				, makeExpr( exp ) ) };
	}

	inline DVec4 frexp( DVec4 const & x
		, IVec4 const & exp )
	{
		return DVec4{ findShader( x, exp )
			, expr::makeFrexp4D( makeExpr( x )
				, makeExpr( exp ) ) };
	}

	inline Float ldexp( Float const & x
		, Int const & exp )
	{
		return Float{ findShader( x, exp )
			, expr::makeLdexp1F( makeExpr( x )
				, makeExpr( exp ) ) };
	}

	inline Vec2 ldexp( Vec2 const & x
		, IVec2 const & exp )
	{
		return Vec2{ findShader( x, exp )
			, expr::makeLdexp2F( makeExpr( x )
				, makeExpr( exp ) ) };
	}

	inline Vec3 ldexp( Vec3 const & x
		, IVec3 const & exp )
	{
		return Vec3{ findShader( x, exp )
			, expr::makeLdexp3F( makeExpr( x )
				, makeExpr( exp ) ) };
	}

	inline Vec4 ldexp( Vec4 const & x
		, IVec4 const & exp )
	{
		return Vec4{ findShader( x, exp )
			, expr::makeLdexp4F( makeExpr( x )
				, makeExpr( exp ) ) };
	}

	inline Double ldexp( Double const & x
		, Int const & exp )
	{
		return Double{ findShader( x, exp )
			, expr::makeLdexp1D( makeExpr( x )
				, makeExpr( exp ) ) };
	}

	inline DVec2 ldexp( DVec2 const & x
		, IVec2 const & exp )
	{
		return DVec2{ findShader( x, exp )
			, expr::makeLdexp2D( makeExpr( x )
				, makeExpr( exp ) ) };
	}

	inline DVec3 ldexp( DVec3 const & x
		, IVec3 const & exp )
	{
		return DVec3{ findShader( x, exp )
			, expr::makeLdexp3D( makeExpr( x )
				, makeExpr( exp ) ) };
	}

	inline DVec4 ldexp( DVec4 const & x
		, IVec4 const & exp )
	{
		return DVec4{ findShader( x, exp )
			, expr::makeLdexp4D( makeExpr( x )
				, makeExpr( exp ) ) };
	}

	// Floating-point Pack and Unpack Functions

	inline Double packDouble2x32( UVec2 const & v )
	{
		return Double{ findShader( v )
			, expr::makePackDouble2x32( makeExpr( v ) ) };
	}

	inline UInt packHalf2x16( Vec2 const & v )
	{
		return UInt{ findShader( v )
			, expr::makePackHalf2x16( makeExpr( v ) ) };
	}

	inline UInt packSnorm2x16( Vec2 const & v )
	{
		return UInt{ findShader( v )
			, expr::makePackSnorm2x16( makeExpr( v ) ) };
	}

	inline UInt packSnorm4x8( Vec4 const & v )
	{
		return UInt{ findShader( v )
			, expr::makePackSnorm4x8( makeExpr( v ) ) };
	}

	inline UInt packUnorm2x16( Vec2 const & v )
	{
		return UInt{ findShader( v )
			, expr::makePackUnorm2x16( makeExpr( v ) ) };
	}

	inline UInt packUnorm4x8( Vec4 const & v )
	{
		return UInt{ findShader( v )
			, expr::makePackUnorm4x8( makeExpr( v ) ) };
	}

	inline UVec2 unpackDouble2x32( Double const & d )
	{
		return UVec2{ findShader( d )
			, expr::makeUnpackDouble2x32( makeExpr( d ) ) };
	}

	inline Vec2 unpackHalf2x16( UInt const & v )
	{
		return Vec2{ findShader( v )
			, expr::makeUnpackHalf2x16( makeExpr( v ) ) };
	}

	inline Vec2 unpackSnorm2x16( UInt const & p )
	{
		return Vec2{ findShader( p )
			, expr::makeUnpackSnorm2x16( makeExpr( p ) ) };
	}

	inline Vec4 unpackSnorm4x8( UInt const & p )
	{
		return Vec4{ findShader( p )
			, expr::makeUnpackSnorm4x8( makeExpr( p ) ) };
	}

	inline Vec2 unpackUnorm2x16( UInt const & p )
	{
		return Vec2{ findShader( p )
			, expr::makeUnpackUnorm2x16( makeExpr( p ) ) };
	}

	inline Vec4 unpackUnorm4x8( UInt const & p )
	{
		return Vec4{ findShader( p )
			, expr::makeUnpackUnorm4x8( makeExpr( p ) ) };
	}

	// Geometric Functions

	inline Float length( Float const & x )
	{
		return Float{ findShader( x )
			, expr::makeLength1F( makeExpr( x ) ) };
	}

	inline Float length( Vec2 const & x )
	{
		return Float{ findShader( x )
			, expr::makeLength2F( makeExpr( x ) ) };
	}

	inline Float length( Vec3 const & x )
	{
		return Float{ findShader( x )
			, expr::makeLength3F( makeExpr( x ) ) };
	}

	inline Float length( Vec4 const & x )
	{
		return Float{ findShader( x )
			, expr::makeLength4F( makeExpr( x ) ) };
	}

	inline Double length( Double const & x )
	{
		return Double{ findShader( x )
			, expr::makeLength1D( makeExpr( x ) ) };
	}

	inline Double length( DVec2 const & x )
	{
		return Double{ findShader( x )
			, expr::makeLength2D( makeExpr( x ) ) };
	}

	inline Double length( DVec3 const & x )
	{
		return Double{ findShader( x )
			, expr::makeLength3D( makeExpr( x ) ) };
	}

	inline Double length( DVec4 const & x )
	{
		return Double{ findShader( x )
			, expr::makeLength4D( makeExpr( x ) ) };
	}

	inline Float distance( Float const & p0
		, Float const & p1 )
	{
		return Float{ findShader( p0, p1 )
			, expr::makeDistance1F( makeExpr( p0 )
				, makeExpr( p1 ) ) };
	}

	inline Vec2 distance( Vec2 const & p0
		, Vec2 const & p1 )
	{
		return Vec2{ findShader( p0, p1 )
			, expr::makeDistance2F( makeExpr( p0 )
				, makeExpr( p1 ) ) };
	}

	inline Vec3 distance( Vec3 const & p0
		, Vec3 const & p1 )
	{
		return Vec3{ findShader( p0, p1 )
			, expr::makeDistance3F( makeExpr( p0 )
				, makeExpr( p1 ) ) };
	}

	inline Vec4 distance( Vec4 const & p0
		, Vec4 const & p1 )
	{
		return Vec4{ findShader( p0, p1 )
			, expr::makeDistance4F( makeExpr( p0 )
				, makeExpr( p1 ) ) };
	}

	inline Double distance( Double const & p0
		, Double const & p1 )
	{
		return Double{ findShader( p0, p1 )
			, expr::makeDistance1D( makeExpr( p0 )
				, makeExpr( p1 ) ) };
	}

	inline Double distance( DVec2 const & p0
		, DVec2 const & p1 )
	{
		return Double{ findShader( p0, p1 )
			, expr::makeDistance2D( makeExpr( p0 )
				, makeExpr( p1 ) ) };
	}

	inline Double distance( DVec3 const & p0
		, DVec3 const & p1 )
	{
		return Double{ findShader( p0, p1 )
			, expr::makeDistance3D( makeExpr( p0 )
				, makeExpr( p1 ) ) };
	}

	inline Double distance( DVec4 const & p0
		, DVec4 const & p1 )
	{
		return Double{ findShader( p0, p1 )
			, expr::makeDistance4D( makeExpr( p0 )
				, makeExpr( p1 ) ) };
	}

	inline Float dot( Float const & x
		, Float const & y )
	{
		return Float{ findShader( x, y )
			, expr::makeDot1F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Float dot( Vec2 const & x
		, Vec2 const & y )
	{
		return Float{ findShader( x, y )
			, expr::makeDot2F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Float dot( Vec3 const & x
		, Vec3 const & y )
	{
		return Float{ findShader( x, y )
			, expr::makeDot3F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Float dot( Vec4 const & x
		, Vec4 const & y )
	{
		return Float{ findShader( x, y )
			, expr::makeDot4F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Double dot( Double const & x
		, Double const & y )
	{
		return Double{ findShader( x, y )
			, expr::makeDot1D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Double dot( DVec2 const & x
		, DVec2 const & y )
	{
		return Double{ findShader( x, y )
			, expr::makeDot2D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Double dot( DVec3 const & x
		, DVec3 const & y )
	{
		return Double{ findShader( x, y )
			, expr::makeDot3D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Double dot( DVec4 const & x
		, DVec4 const & y )
	{
		return Double{ findShader( x, y )
			, expr::makeDot4D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Vec3 cross( Vec3 const & x
		, Vec3 const & y )
	{
		return Vec3{ findShader( x, y )
			, expr::makeCrossF( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline DVec3 cross( DVec3 const & x
		, DVec3 const & y )
	{
		return DVec3{ findShader( x, y )
			, expr::makeCrossD( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Float normalize( Float const & x )
	{
		return Float{ findShader( x )
			, expr::makeNormalize1F( makeExpr( x ) ) };
	}

	inline Vec2 normalize( Vec2 const & x )
	{
		return Vec2{ findShader( x )
			, expr::makeNormalize2F( makeExpr( x ) ) };
	}

	inline Vec3 normalize( Vec3 const & x )
	{
		return Vec3{ findShader( x )
			, expr::makeNormalize3F( makeExpr( x ) ) };
	}

	inline Vec4 normalize( Vec4 const & x )
	{
		return Vec4{ findShader( x )
			, expr::makeNormalize4F( makeExpr( x ) ) };
	}

	inline Double normalize( Double const & x )
	{
		return Double{ findShader( x )
			, expr::makeNormalize1D( makeExpr( x ) ) };
	}

	inline DVec2 normalize( DVec2 const & x )
	{
		return DVec2{ findShader( x )
			, expr::makeNormalize2D( makeExpr( x ) ) };
	}

	inline DVec3 normalize( DVec3 const & x )
	{
		return DVec3{ findShader( x )
			, expr::makeNormalize3D( makeExpr( x ) ) };
	}

	inline DVec4 normalize( DVec4 const & x )
	{
		return DVec4{ findShader( x )
			, expr::makeNormalize4D( makeExpr( x ) ) };
	}

	inline Float faceForward( Float const & N
		, Float const & I
		, Float const & Nref )
	{
		return Float{ findShader( N, I, Nref )
			, expr::makeFaceForward1F( makeExpr( N )
				, makeExpr( I )
				, makeExpr( Nref ) ) };
	}

	inline Vec2 faceForward( Vec2 const & N
		, Vec2 const & I
		, Vec2 const & Nref )
	{
		return Vec2{ findShader( N, I, Nref )
			, expr::makeFaceForward2F( makeExpr( N )
				, makeExpr( I )
				, makeExpr( Nref ) ) };
	}

	inline Vec3 faceForward( Vec3 const & N
		, Vec3 const & I
		, Vec3 const & Nref )
	{
		return Vec3{ findShader( N, I, Nref )
			, expr::makeFaceForward3F( makeExpr( N )
				, makeExpr( I )
				, makeExpr( Nref ) ) };
	}

	inline Vec4 faceForward( Vec4 const & N
		, Vec4 const & I
		, Vec4 const & Nref )
	{
		return Vec4{ findShader( N, I, Nref )
			, expr::makeFaceForward4F( makeExpr( N )
				, makeExpr( I )
				, makeExpr( Nref ) ) };
	}

	inline Double faceForward( Double const & N
		, Double const & I
		, Double const & Nref )
	{
		return Double{ findShader( N, I, Nref )
			, expr::makeFaceForward1D( makeExpr( N )
				, makeExpr( I )
				, makeExpr( Nref ) ) };
	}

	inline DVec2 faceForward( DVec2 const & N
		, DVec2 const & I
		, DVec2 const & Nref )
	{
		return DVec2{ findShader( N, I, Nref )
			, expr::makeFaceForward2D( makeExpr( N )
				, makeExpr( I )
				, makeExpr( Nref ) ) };
	}

	inline DVec3 faceForward( DVec3 const & N
		, DVec3 const & I
		, DVec3 const & Nref )
	{
		return DVec3{ findShader( N, I, Nref )
			, expr::makeFaceForward3D( makeExpr( N )
				, makeExpr( I )
				, makeExpr( Nref ) ) };
	}

	inline DVec4 faceForward( DVec4 const & N
		, DVec4 const & I
		, DVec4 const & Nref )
	{
		return DVec4{ findShader( N, I, Nref )
			, expr::makeFaceForward4D( makeExpr( N )
				, makeExpr( I )
				, makeExpr( Nref ) ) };
	}

	inline Float reflect( Float const & I
		, Float const & N )
	{
		return Float{ findShader( I, N )
			, expr::makeReflect1F( makeExpr( I )
				, makeExpr( N ) ) };
	}

	inline Vec2 reflect( Vec2 const & I
		, Vec2 const & N )
	{
		return Vec2{ findShader( I, N )
			, expr::makeReflect2F( makeExpr( I )
				, makeExpr( N ) ) };
	}

	inline Vec3 reflect( Vec3 const & I
		, Vec3 const & N )
	{
		return Vec3{ findShader( I, N )
			, expr::makeReflect3F( makeExpr( I )
				, makeExpr( N ) ) };
	}

	inline Vec4 reflect( Vec4 const & I
		, Vec4 const & N )
	{
		return Vec4{ findShader( I, N )
			, expr::makeReflect4F( makeExpr( I )
				, makeExpr( N ) ) };
	}

	inline Double reflect( Float const & I
		, Double const & N )
	{
		return Double{ findShader( I, N )
			, expr::makeReflect1D( makeExpr( I )
				, makeExpr( N ) ) };
	}

	inline DVec2 reflect( DVec2 const & I
		, DVec2 const & N )
	{
		return DVec2{ findShader( I, N )
			, expr::makeReflect2D( makeExpr( I )
				, makeExpr( N ) ) };
	}

	inline DVec3 reflect( DVec3 const & I
		, DVec3 const & N )
	{
		return DVec3{ findShader( I, N )
			, expr::makeReflect3D( makeExpr( I )
				, makeExpr( N ) ) };
	}

	inline DVec4 reflect( DVec4 const & I
		, DVec4 const & N )
	{
		return DVec4{ findShader( I, N )
			, expr::makeReflect4D( makeExpr( I )
				, makeExpr( N ) ) };
	}

	inline Float refract( Float const & I
		, Float const & N )
	{
		return Float{ findShader( I, N )
			, expr::makeRefract1F( makeExpr( I )
				, makeExpr( N ) ) };
	}

	inline Vec2 refract( Vec2 const & I
		, Vec2 const & N )
	{
		return Vec2{ findShader( I, N )
			, expr::makeRefract2F( makeExpr( I )
				, makeExpr( N ) ) };
	}

	inline Vec3 refract( Vec3 const & I
		, Vec3 const & N )
	{
		return Vec3{ findShader( I, N )
			, expr::makeRefract3F( makeExpr( I )
				, makeExpr( N ) ) };
	}

	inline Vec4 refract( Vec4 const & I
		, Vec4 const & N )
	{
		return Vec4{ findShader( I, N )
			, expr::makeRefract4F( makeExpr( I )
				, makeExpr( N ) ) };
	}

	inline Double refract( Double const & I
		, Double const & N )
	{
		return Double{ findShader( I, N )
			, expr::makeRefract1D( makeExpr( I )
				, makeExpr( N ) ) };
	}

	inline DVec2 refract( DVec2 const & I
		, DVec2 const & N )
	{
		return DVec2{ findShader( I, N )
			, expr::makeRefract2D( makeExpr( I )
				, makeExpr( N ) ) };
	}

	inline DVec3 refract( DVec3 const & I
		, DVec3 const & N )
	{
		return DVec3{ findShader( I, N )
			, expr::makeRefract3D( makeExpr( I )
				, makeExpr( N ) ) };
	}

	inline DVec4 refract( DVec4 const & I
		, DVec4 const & N )
	{
		return DVec4{ findShader( I, N )
			, expr::makeRefract4D( makeExpr( I )
				, makeExpr( N ) ) };
	}

	// Matrix Functions

	inline Mat2 matrixCompMult( Mat2 const & x
		, Mat2 const & y )
	{
		return Mat2{ findShader( x, y )
			, expr::makeMatrixCompMult2x2F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Mat2x3 matrixCompMult( Mat2x3 const & x
		, Mat2x3 const & y )
	{
		return Mat2x3{ findShader( x, y )
			, expr::makeMatrixCompMult2x3F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Mat2x4 matrixCompMult( Mat2x4 const & x
		, Mat2x4 const & y )
	{
		return Mat2x4{ findShader( x, y )
			, expr::makeMatrixCompMult2x4F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Mat3x2 matrixCompMult( Mat3x2 const & x
		, Mat3x2 const & y )
	{
		return Mat3x2{ findShader( x, y )
			, expr::makeMatrixCompMult3x2F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Mat3 matrixCompMult( Mat3 const & x
		, Mat3 const & y )
	{
		return Mat3{ findShader( x, y )
			, expr::makeMatrixCompMult3x3F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Mat3x4 matrixCompMult( Mat3x4 const & x
		, Mat3x4 const & y )
	{
		return Mat3x4{ findShader( x, y )
			, expr::makeMatrixCompMult3x4F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Mat4x2 matrixCompMult( Mat4x2 const & x
		, Mat4x2 const & y )
	{
		return Mat4x2{ findShader( x, y )
			, expr::makeMatrixCompMult4x2F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Mat4x3 matrixCompMult( Mat4x3 const & x
		, Mat4x3 const & y )
	{
		return Mat4x3{ findShader( x, y )
			, expr::makeMatrixCompMult4x3F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Mat4 matrixCompMult( Mat4 const & x
		, Mat4 const & y )
	{
		return Mat4{ findShader( x, y )
			, expr::makeMatrixCompMult4x4F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline DMat2 matrixCompMult( DMat2 const & x
		, DMat2 const & y )
	{
		return DMat2{ findShader( x, y )
			, expr::makeMatrixCompMult2x2D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline DMat2x3 matrixCompMult( DMat2x3 const & x
		, DMat2x3 const & y )
	{
		return DMat2x3{ findShader( x, y )
			, expr::makeMatrixCompMult2x3D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline DMat2x4 matrixCompMult( DMat2x4 const & x
		, DMat2x4 const & y )
	{
		return DMat2x4{ findShader( x, y )
			, expr::makeMatrixCompMult2x4D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline DMat3x2 matrixCompMult( DMat3x2 const & x
		, DMat3x2 const & y )
	{
		return DMat3x2{ findShader( x, y )
			, expr::makeMatrixCompMult3x2D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline DMat3 matrixCompMult( DMat3 const & x
		, DMat3 const & y )
	{
		return DMat3{ findShader( x, y )
			, expr::makeMatrixCompMult3x3D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline DMat3x4 matrixCompMult( DMat3x4 const & x
		, DMat3x4 const & y )
	{
		return DMat3x4{ findShader( x, y )
			, expr::makeMatrixCompMult3x4D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline DMat4x2 matrixCompMult( DMat4x2 const & x
		, DMat4x2 const & y )
	{
		return DMat4x2{ findShader( x, y )
			, expr::makeMatrixCompMult4x2D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline DMat4x3 matrixCompMult( DMat4x3 const & x
		, DMat4x3 const & y )
	{
		return DMat4x3{ findShader( x, y )
			, expr::makeMatrixCompMult4x3D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline DMat4 matrixCompMult( DMat4 const & x
		, DMat4 const & y )
	{
		return DMat4{ findShader( x, y )
			, expr::makeMatrixCompMult4x4D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Mat2 outerProduct( Vec2 const & c
		, Vec2 const & r )
	{
		return Mat2{ findShader( c, r )
			, expr::makeOuterProduct2x2F( makeExpr( c )
				, makeExpr( r ) ) };
	}

	inline Mat3 outerProduct( Vec3 const & c
		, Vec3 const & r )
	{
		return Mat3{ findShader( c, r )
			, expr::makeOuterProduct3x3F( makeExpr( c )
				, makeExpr( r ) ) };
	}

	inline Mat4 outerProduct( Vec4 const & c
		, Vec4 const & r )
	{
		return Mat4{ findShader( c, r )
			, expr::makeOuterProduct4x4F( makeExpr( c )
				, makeExpr( r ) ) };
	}

	inline Mat2x3 outerProduct( Vec3 const & c
		, Vec2 const & r )
	{
		return Mat2x3{ findShader( c, r )
			, expr::makeOuterProduct3x2F( makeExpr( c )
				, makeExpr( r ) ) };
	}

	inline Mat3x2 outerProduct( Vec2 const & c
		, Vec3 const & r )
	{
		return Mat3x2{ findShader( c, r )
			, expr::makeOuterProduct2x3F( makeExpr( c )
				, makeExpr( r ) ) };
	}

	inline Mat2x4 outerProduct( Vec4 const & c
		, Vec2 const & r )
	{
		return Mat2x4{ findShader( c, r )
			, expr::makeOuterProduct4x2F( makeExpr( c )
				, makeExpr( r ) ) };
	}

	inline Mat4x2 outerProduct( Vec2 const & c
		, Vec4 const & r )
	{
		return Mat4x2{ findShader( c, r )
			, expr::makeOuterProduct2x4F( makeExpr( c )
				, makeExpr( r ) ) };
	}

	inline Mat3x4 outerProduct( Vec4 const & c
		, Vec3 const & r )
	{
		return Mat3x4{ findShader( c, r )
			, expr::makeOuterProduct4x3F( makeExpr( c )
				, makeExpr( r ) ) };
	}

	inline Mat4x3 outerProduct( Vec3 const & c
		, Vec4 const & r )
	{
		return Mat4x3{ findShader( c, r )
			, expr::makeOuterProduct3x4F( makeExpr( c )
				, makeExpr( r ) ) };
	}

	inline DMat2 outerProduct( DVec2 const & c
		, DVec2 const & r )
	{
		return DMat2{ findShader( c, r )
			, expr::makeOuterProduct2x2D( makeExpr( c )
				, makeExpr( r ) ) };
	}

	inline DMat3 outerProduct( DVec3 const & c
		, DVec3 const & r )
	{
		return DMat3{ findShader( c, r )
			, expr::makeOuterProduct3x3D( makeExpr( c )
				, makeExpr( r ) ) };
	}

	inline DMat4 outerProduct( DVec4 const & c
		, DVec4 const & r )
	{
		return DMat4{ findShader( c, r )
			, expr::makeOuterProduct4x4D( makeExpr( c )
				, makeExpr( r ) ) };
	}

	inline DMat2x3 outerProduct( DVec3 const & c
		, DVec2 const & r )
	{
		return DMat2x3{ findShader( c, r )
			, expr::makeOuterProduct3x2D( makeExpr( c )
				, makeExpr( r ) ) };
	}

	inline DMat3x2 outerProduct( DVec2 const & c
		, DVec3 const & r )
	{
		return DMat3x2{ findShader( c, r )
			, expr::makeOuterProduct2x3D( makeExpr( c )
				, makeExpr( r ) ) };
	}

	inline DMat2x4 outerProduct( DVec4 const & c
		, DVec2 const & r )
	{
		return DMat2x4{ findShader( c, r )
			, expr::makeOuterProduct4x2D( makeExpr( c )
				, makeExpr( r ) ) };
	}

	inline DMat4x2 outerProduct( DVec2 const & c
		, DVec4 const & r )
	{
		return DMat4x2{ findShader( c, r )
			, expr::makeOuterProduct2x4D( makeExpr( c )
				, makeExpr( r ) ) };
	}

	inline DMat3x4 outerProduct( DVec4 const & c
		, DVec3 const & r )
	{
		return DMat3x4{ findShader( c, r )
			, expr::makeOuterProduct4x3D( makeExpr( c )
				, makeExpr( r ) ) };
	}

	inline DMat4x3 outerProduct( DVec3 const & c
		, DVec4 const & r )
	{
		return DMat4x3{ findShader( c, r )
			, expr::makeOuterProduct3x4D( makeExpr( c )
				, makeExpr( r ) ) };
	}

	inline Mat2 transpose( Mat2 const & x )
	{
		return Mat2{ findShader( x )
			, expr::makeTranspose2x2F( makeExpr( x ) ) };
	}

	inline Mat3x2 transpose( Mat2x3 const & x )
	{
		return Mat3x2{ findShader( x )
			, expr::makeTranspose2x3F( makeExpr( x ) ) };
	}

	inline Mat4x2 transpose( Mat2x4 const & x )
	{
		return Mat4x2{ findShader( x )
			, expr::makeTranspose2x4F( makeExpr( x ) ) };
	}

	inline Mat2x3 transpose( Mat3x2 const & x )
	{
		return Mat2x3{ findShader( x )
			, expr::makeTranspose3x2F( makeExpr( x ) ) };
	}

	inline Mat3 transpose( Mat3 const & x )
	{
		return Mat3{ findShader( x )
			, expr::makeTranspose3x3F( makeExpr( x ) ) };
	}

	inline Mat4x3 transpose( Mat3x4 const & x )
	{
		return Mat4x3{ findShader( x )
			, expr::makeTranspose3x4F( makeExpr( x ) ) };
	}

	inline Mat2x4 transpose( Mat4x2 const & x )
	{
		return Mat2x4{ findShader( x )
			, expr::makeTranspose4x2F( makeExpr( x ) ) };
	}

	inline Mat3x4 transpose( Mat4x3 const & x )
	{
		return Mat3x4{ findShader( x )
			, expr::makeTranspose4x3F( makeExpr( x ) ) };
	}

	inline Mat4 transpose( Mat4 const & x )
	{
		return Mat4{ findShader( x )
			, expr::makeTranspose4x4F( makeExpr( x ) ) };
	}

	inline DMat2 transpose( DMat2 const & x )
	{
		return DMat2{ findShader( x )
			, expr::makeTranspose2x2D( makeExpr( x ) ) };
	}

	inline DMat3x2 transpose( DMat2x3 const & x )
	{
		return DMat3x2{ findShader( x )
			, expr::makeTranspose2x3D( makeExpr( x ) ) };
	}

	inline DMat4x2 transpose( DMat2x4 const & x )
	{
		return DMat4x2{ findShader( x )
			, expr::makeTranspose2x4D( makeExpr( x ) ) };
	}

	inline DMat2x3 transpose( DMat3x2 const & x )
	{
		return DMat2x3{ findShader( x )
			, expr::makeTranspose3x2D( makeExpr( x ) ) };
	}

	inline DMat3 transpose( DMat3 const & x )
	{
		return DMat3{ findShader( x )
			, expr::makeTranspose3x3D( makeExpr( x ) ) };
	}

	inline DMat4x3 transpose( DMat3x4 const & x )
	{
		return DMat4x3{ findShader( x )
			, expr::makeTranspose3x4D( makeExpr( x ) ) };
	}

	inline DMat2x4 transpose( DMat4x2 const & x )
	{
		return DMat2x4{ findShader( x )
			, expr::makeTranspose4x2D( makeExpr( x ) ) };
	}

	inline DMat3x4 transpose( DMat4x3 const & x )
	{
		return DMat3x4{ findShader( x )
			, expr::makeTranspose4x3D( makeExpr( x ) ) };
	}

	inline DMat4 transpose( DMat4 const & x )
	{
		return DMat4{ findShader( x )
			, expr::makeTranspose4x4D( makeExpr( x ) ) };
	}

	inline Float determinant( Mat2 const & m )
	{
		return Float{ findShader( m )
			, expr::makeDeterminant2x2F( makeExpr( m ) ) };
	}

	inline Float determinant( Mat3 const & m )
	{
		return Float{ findShader( m )
			, expr::makeDeterminant3x3F( makeExpr( m ) ) };
	}

	inline Float determinant( Mat4 const & m )
	{
		return Float{ findShader( m )
			, expr::makeDeterminant4x4F( makeExpr( m ) ) };
	}

	inline Double determinant( DMat2 const & m )
	{
		return Double{ findShader( m )
			, expr::makeDeterminant2x2D( makeExpr( m ) ) };
	}

	inline Double determinant( DMat3 const & m )
	{
		return Double{ findShader( m )
			, expr::makeDeterminant3x3D( makeExpr( m ) ) };
	}

	inline Double determinant( DMat4 const & m )
	{
		return Double{ findShader( m )
			, expr::makeDeterminant4x4D( makeExpr( m ) ) };
	}

	inline Mat2 inverse( Mat2 const & m )
	{
		return Mat2{ findShader( m )
			, expr::makeInverse2x2F( makeExpr( m ) ) };
	}

	inline Mat3 inverse( Mat3 const & m )
	{
		return Mat3{ findShader( m )
			, expr::makeInverse3x3F( makeExpr( m ) ) };
	}

	inline Mat4 inverse( Mat4 const & m )
	{
		return Mat4{ findShader( m )
			, expr::makeInverse4x4F( makeExpr( m ) ) };
	}

	inline DMat2 inverse( DMat2 const & m )
	{
		return DMat2{ findShader( m )
			, expr::makeInverse2x2D( makeExpr( m ) ) };
	}

	inline DMat3 inverse( DMat3 const & m )
	{
		return DMat3{ findShader( m )
			, expr::makeInverse3x3D( makeExpr( m ) ) };
	}

	inline DMat4 inverse( DMat4 const & m )
	{
		return DMat4{ findShader( m )
			, expr::makeInverse4x4D( makeExpr( m ) ) };
	}

	// Vector Relational Functions

	inline BVec2 lessThan( Vec2 const & x
		, Vec2 const & y )
	{
		return BVec2{ findShader( x, y )
			, expr::makeLessThan2F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec3 lessThan( Vec3 const & x
		, Vec3 const & y )
	{
		return BVec3{ findShader( x, y )
			, expr::makeLessThan3F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec4 lessThan( Vec4 const & x
		, Vec4 const & y )
	{
		return BVec4{ findShader( x, y )
			, expr::makeLessThan4F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec2 lessThan( DVec2 const & x
		, DVec2 const & y )
	{
		return BVec2{ findShader( x, y )
			, expr::makeLessThan2D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec3 lessThan( DVec3 const & x
		, DVec3 const & y )
	{
		return BVec3{ findShader( x, y )
			, expr::makeLessThan3D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec4 lessThan( DVec4 const & x
		, DVec4 const & y )
	{
		return BVec4{ findShader( x, y )
			, expr::makeLessThan4D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec2 lessThan( IVec2 const & x
		, IVec2 const & y )
	{
		return BVec2{ findShader( x, y )
			, expr::makeLessThan2I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec3 lessThan( IVec3 const & x
		, IVec3 const & y )
	{
		return BVec3{ findShader( x, y )
			, expr::makeLessThan3I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec4 lessThan( IVec4 const & x
		, IVec4 const & y )
	{
		return BVec4{ findShader( x, y )
			, expr::makeLessThan4I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec2 lessThan( UVec2 const & x
		, UVec2 const & y )
	{
		return BVec2{ findShader( x, y )
			, expr::makeLessThan2U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec3 lessThan( UVec3 const & x
		, UVec3 const & y )
	{
		return BVec3{ findShader( x, y )
			, expr::makeLessThan3U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec4 lessThan( UVec4 const & x
		, UVec4 const & y )
	{
		return BVec4{ findShader( x, y )
			, expr::makeLessThan4U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec2 lessThanEqual( Vec2 const & x
		, Vec2 const & y )
	{
		return BVec2{ findShader( x, y )
			, expr::makeLessThanEqual2F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec3 lessThanEqual( Vec3 const & x
		, Vec3 const & y )
	{
		return BVec3{ findShader( x, y )
			, expr::makeLessThanEqual3F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec4 lessThanEqual( Vec4 const & x
		, Vec4 const & y )
	{
		return BVec4{ findShader( x, y )
			, expr::makeLessThanEqual4F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec2 lessThanEqual( DVec2 const & x
		, DVec2 const & y )
	{
		return BVec2{ findShader( x, y )
			, expr::makeLessThanEqual2D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec3 lessThanEqual( DVec3 const & x
		, DVec3 const & y )
	{
		return BVec3{ findShader( x, y )
			, expr::makeLessThanEqual3D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec4 lessThanEqual( DVec4 const & x
		, DVec4 const & y )
	{
		return BVec4{ findShader( x, y )
			, expr::makeLessThanEqual4D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec2 lessThanEqual( IVec2 const & x
		, IVec2 const & y )
	{
		return BVec2{ findShader( x, y )
			, expr::makeLessThanEqual2I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec3 lessThanEqual( IVec3 const & x
		, IVec3 const & y )
	{
		return BVec3{ findShader( x, y )
			, expr::makeLessThanEqual3I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec4 lessThanEqual( IVec4 const & x
		, IVec4 const & y )
	{
		return BVec4{ findShader( x, y )
			, expr::makeLessThanEqual4I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec2 lessThanEqual( UVec2 const & x
		, UVec2 const & y )
	{
		return BVec2{ findShader( x, y )
			, expr::makeLessThanEqual2U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec3 lessThanEqual( UVec3 const & x
		, UVec3 const & y )
	{
		return BVec3{ findShader( x, y )
			, expr::makeLessThanEqual3U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec4 lessThanEqual( UVec4 const & x
		, UVec4 const & y )
	{
		return BVec4{ findShader( x, y )
			, expr::makeLessThanEqual4U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec2 greaterThan( Vec2 const & x
		, Vec2 const & y )
	{
		return BVec2{ findShader( x, y )
			, expr::makeGreaterThan2F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec3 greaterThan( Vec3 const & x
		, Vec3 const & y )
	{
		return BVec3{ findShader( x, y )
			, expr::makeGreaterThan3F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec4 greaterThan( Vec4 const & x
		, Vec4 const & y )
	{
		return BVec4{ findShader( x, y )
			, expr::makeGreaterThan4F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec2 greaterThan( DVec2 const & x
		, DVec2 const & y )
	{
		return BVec2{ findShader( x, y )
			, expr::makeGreaterThan2D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec3 greaterThan( DVec3 const & x
		, DVec3 const & y )
	{
		return BVec3{ findShader( x, y )
			, expr::makeGreaterThan3D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec4 greaterThan( DVec4 const & x
		, DVec4 const & y )
	{
		return BVec4{ findShader( x, y )
			, expr::makeGreaterThan4D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec2 greaterThan( IVec2 const & x
		, IVec2 const & y )
	{
		return BVec2{ findShader( x, y )
			, expr::makeGreaterThan2I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec3 greaterThan( IVec3 const & x
		, IVec3 const & y )
	{
		return BVec3{ findShader( x, y )
			, expr::makeGreaterThan3I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec4 greaterThan( IVec4 const & x
		, IVec4 const & y )
	{
		return BVec4{ findShader( x, y )
			, expr::makeGreaterThan4I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec2 greaterThan( UVec2 const & x
		, UVec2 const & y )
	{
		return BVec2{ findShader( x, y )
			, expr::makeGreaterThan2U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec3 greaterThan( UVec3 const & x
		, UVec3 const & y )
	{
		return BVec3{ findShader( x, y )
			, expr::makeGreaterThan3U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec4 greaterThan( UVec4 const & x
		, UVec4 const & y )
	{
		return BVec4{ findShader( x, y )
			, expr::makeGreaterThan4U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec2 greaterThanEqual( Vec2 const & x
		, Vec2 const & y )
	{
		return BVec2{ findShader( x, y )
			, expr::makeGreaterThanEqual2F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec3 greaterThanEqual( Vec3 const & x
		, Vec3 const & y )
	{
		return BVec3{ findShader( x, y )
			, expr::makeGreaterThanEqual3F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec4 greaterThanEqual( Vec4 const & x
		, Vec4 const & y )
	{
		return BVec4{ findShader( x, y )
			, expr::makeGreaterThanEqual4F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec2 greaterThanEqual( DVec2 const & x
		, DVec2 const & y )
	{
		return BVec2{ findShader( x, y )
			, expr::makeGreaterThanEqual2D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec3 greaterThanEqual( DVec3 const & x
		, DVec3 const & y )
	{
		return BVec3{ findShader( x, y )
			, expr::makeGreaterThanEqual3D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec4 greaterThanEqual( DVec4 const & x
		, DVec4 const & y )
	{
		return BVec4{ findShader( x, y )
			, expr::makeGreaterThanEqual4D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec2 greaterThanEqual( IVec2 const & x
		, IVec2 const & y )
	{
		return BVec2{ findShader( x, y )
			, expr::makeGreaterThanEqual2I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec3 greaterThanEqual( IVec3 const & x
		, IVec3 const & y )
	{
		return BVec3{ findShader( x, y )
			, expr::makeGreaterThanEqual3I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec4 greaterThanEqual( IVec4 const & x
		, IVec4 const & y )
	{
		return BVec4{ findShader( x, y )
			, expr::makeGreaterThanEqual4I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec2 greaterThanEqual( UVec2 const & x
		, UVec2 const & y )
	{
		return BVec2{ findShader( x, y )
			, expr::makeGreaterThanEqual2U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec3 greaterThanEqual( UVec3 const & x
		, UVec3 const & y )
	{
		return BVec3{ findShader( x, y )
			, expr::makeGreaterThanEqual3U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec4 greaterThanEqual( UVec4 const & x
		, UVec4 const & y )
	{
		return BVec4{ findShader( x, y )
			, expr::makeGreaterThanEqual4U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec2 equal( Vec2 const & x
		, Vec2 const & y )
	{
		return BVec2{ findShader( x, y )
			, expr::makeEqual2F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec3 equal( Vec3 const & x
		, Vec3 const & y )
	{
		return BVec3{ findShader( x, y )
			, expr::makeEqual3F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec4 equal( Vec4 const & x
		, Vec4 const & y )
	{
		return BVec4{ findShader( x, y )
			, expr::makeEqual4F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec2 equal( DVec2 const & x
		, DVec2 const & y )
	{
		return BVec2{ findShader( x, y )
			, expr::makeEqual2D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec3 equal( DVec3 const & x
		, DVec3 const & y )
	{
		return BVec3{ findShader( x, y )
			, expr::makeEqual3D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec4 equal( DVec4 const & x
		, DVec4 const & y )
	{
		return BVec4{ findShader( x, y )
			, expr::makeEqual4D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec2 equal( IVec2 const & x
		, IVec2 const & y )
	{
		return BVec2{ findShader( x, y )
			, expr::makeEqual2I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec3 equal( IVec3 const & x
		, IVec3 const & y )
	{
		return BVec3{ findShader( x, y )
			, expr::makeEqual3I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec4 equal( IVec4 const & x
		, IVec4 const & y )
	{
		return BVec4{ findShader( x, y )
			, expr::makeEqual4I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec2 equal( UVec2 const & x
		, UVec2 const & y )
	{
		return BVec2{ findShader( x, y )
			, expr::makeEqual2U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec3 equal( UVec3 const & x
		, UVec3 const & y )
	{
		return BVec3{ findShader( x, y )
			, expr::makeEqual3U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec4 equal( UVec4 const & x
		, UVec4 const & y )
	{
		return BVec4{ findShader( x, y )
			, expr::makeEqual4U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec2 notEqual( Vec2 const & x
		, Vec2 const & y )
	{
		return BVec2{ findShader( x, y )
			, expr::makeNotEqual2F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec3 notEqual( Vec3 const & x
		, Vec3 const & y )
	{
		return BVec3{ findShader( x, y )
			, expr::makeNotEqual3F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec4 notEqual( Vec4 const & x
		, Vec4 const & y )
	{
		return BVec4{ findShader( x, y )
			, expr::makeNotEqual4F( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec2 notEqual( DVec2 const & x
		, DVec2 const & y )
	{
		return BVec2{ findShader( x, y )
			, expr::makeNotEqual2D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec3 notEqual( DVec3 const & x
		, DVec3 const & y )
	{
		return BVec3{ findShader( x, y )
			, expr::makeNotEqual3D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec4 notEqual( DVec4 const & x
		, DVec4 const & y )
	{
		return BVec4{ findShader( x, y )
			, expr::makeNotEqual4D( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec2 notEqual( IVec2 const & x
		, IVec2 const & y )
	{
		return BVec2{ findShader( x, y )
			, expr::makeNotEqual2I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec3 notEqual( IVec3 const & x
		, IVec3 const & y )
	{
		return BVec3{ findShader( x, y )
			, expr::makeNotEqual3I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec4 notEqual( IVec4 const & x
		, IVec4 const & y )
	{
		return BVec4{ findShader( x, y )
			, expr::makeNotEqual4I( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec2 notEqual( UVec2 const & x
		, UVec2 const & y )
	{
		return BVec2{ findShader( x, y )
			, expr::makeNotEqual2U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec3 notEqual( UVec3 const & x
		, UVec3 const & y )
	{
		return BVec3{ findShader( x, y )
			, expr::makeNotEqual3U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline BVec4 notEqual( UVec4 const & x
		, UVec4 const & y )
	{
		return BVec4{ findShader( x, y )
			, expr::makeNotEqual4U( makeExpr( x )
				, makeExpr( y ) ) };
	}

	inline Boolean all( BVec2 const & x )
	{
		return Boolean{ findShader( x )
			, expr::makeAll2( makeExpr( x ) ) };
	}

	inline Boolean all( BVec3 const & x )
	{
		return Boolean{ findShader( x )
			, expr::makeAll3( makeExpr( x ) ) };
	}

	inline Boolean all( BVec4 const & x )
	{
		return Boolean{ findShader( x )
			, expr::makeAll4( makeExpr( x ) ) };
	}

	inline Boolean any( BVec2 const & x )
	{
		return Boolean{ findShader( x )
			, expr::makeAny2( makeExpr( x ) ) };
	}

	inline Boolean any( BVec3 const & x )
	{
		return Boolean{ findShader( x )
			, expr::makeAny3( makeExpr( x ) ) };
	}

	inline Boolean any( BVec4 const & x )
	{
		return Boolean{ findShader( x )
			, expr::makeAny4( makeExpr( x ) ) };
	}

	inline BVec2 not( BVec2 const & x )
	{
		return BVec2{ findShader( x )
			, expr::makeNot2( makeExpr( x ) ) };
	}

	inline BVec3 not( BVec3 const & x )
	{
		return BVec3{ findShader( x )
			, expr::makeNot3( makeExpr( x ) ) };
	}

	inline BVec4 not( BVec4 const & x )
	{
		return BVec4{ findShader( x )
			, expr::makeNot4( makeExpr( x ) ) };
	}

	// Integer Functions

	inline UInt uaddCarry( UInt const & x
		, UInt const & y
		, UInt const & carry )
	{
		return UInt{ findShader( x, y, carry )
			, expr::makeUaddCarry1( makeExpr( x )
				, makeExpr( y )
				, makeExpr( carry ) ) };
	}

	inline UVec2 uaddCarry( UVec2 const & x
		, UVec2 const & y
		, UVec2 const & carry )
	{
		return UVec2{ findShader( x, y, carry )
			, expr::makeUaddCarry2( makeExpr( x )
				, makeExpr( y )
				, makeExpr( carry ) ) };
	}

	inline UVec3 uaddCarry( UVec3 const & x
		, UVec3 const & y
		, UVec3 const & carry )
	{
		return UVec3{ findShader( x, y, carry )
			, expr::makeUaddCarry3( makeExpr( x )
				, makeExpr( y )
				, makeExpr( carry ) ) };
	}

	inline UVec4 uaddCarry( UVec4 const & x
		, UVec4 const & y
		, UVec4 const & carry )
	{
		return UVec4{ findShader( x, y, carry )
			, expr::makeUaddCarry4( makeExpr( x )
				, makeExpr( y )
				, makeExpr( carry ) ) };
	}

	inline UInt usubBorrow( UInt const & x
		, UInt const & y
		, UInt const & borrow )
	{
		return UInt{ findShader( x, y, borrow )
			, expr::makeUsubBorrow1( makeExpr( x )
				, makeExpr( y )
				, makeExpr( borrow ) ) };
	}

	inline UVec2 usubBorrow( UVec2 const & x
		, UVec2 const & y
		, UVec2 const & borrow )
	{
		return UVec2{ findShader( x, y, borrow )
			, expr::makeUsubBorrow2( makeExpr( x )
				, makeExpr( y )
				, makeExpr( borrow ) ) };
	}

	inline UVec3 usubBorrow( UVec3 const & x
		, UVec3 const & y
		, UVec3 const & borrow )
	{
		return UVec3{ findShader( x, y, borrow )
			, expr::makeUsubBorrow3( makeExpr( x )
				, makeExpr( y )
				, makeExpr( borrow ) ) };
	}

	inline UVec4 usubBorrow( UVec4 const & x
		, UVec4 const & y
		, UVec4 const & borrow )
	{
		return UVec4{ findShader( x, y, borrow )
			, expr::makeUsubBorrow4( makeExpr( x )
				, makeExpr( y )
				, makeExpr( borrow ) ) };
	}

	inline Void umulExtended( UInt const & x
		, UInt const & y
		, UInt const & msb
		, UInt const & lsb )
	{
		return Void{ findShader( x, y, msb, lsb )
			, expr::makeUmulExtended1( makeExpr( x )
				, makeExpr( y )
				, makeExpr( msb )
				, makeExpr( lsb ) ) };
	}

	inline Void umulExtended( UVec2 const & x
		, UVec2 const & y
		, UVec2 const & msb
		, UVec2 const & lsb )
	{
		return Void{ findShader( x, y, msb, lsb )
			, expr::makeUmulExtended2( makeExpr( x )
				, makeExpr( y )
				, makeExpr( msb )
				, makeExpr( lsb ) ) };
	}

	inline Void umulExtended( UVec3 const & x
		, UVec3 const & y
		, UVec3 const & msb
		, UVec3 const & lsb )
	{
		return Void{ findShader( x, y, msb, lsb )
			, expr::makeUmulExtended3( makeExpr( x )
				, makeExpr( y )
				, makeExpr( msb )
				, makeExpr( lsb ) ) };
	}

	inline Void umulExtended( UVec4 const & x
		, UVec4 const & y
		, UVec4 const & msb
		, UVec4 const & lsb )
	{
		return Void{ findShader( x, y, msb, lsb )
			, expr::makeUmulExtended4( makeExpr( x )
				, makeExpr( y )
				, makeExpr( msb )
				, makeExpr( lsb ) ) };
	}

	inline Void imulExtended( Int const & x
		, Int const & y
		, Int const & msb
		, Int const & lsb )
	{
		return Void{ findShader( x, y, msb, lsb )
			, expr::makeImulExtended1( makeExpr( x )
				, makeExpr( y )
				, makeExpr( msb )
				, makeExpr( lsb ) ) };
	}

	inline Void imulExtended( IVec2 const & x
		, IVec2 const & y
		, IVec2 const & msb
		, IVec2 const & lsb )
	{
		return Void{ findShader( x, y, msb, lsb )
			, expr::makeImulExtended2( makeExpr( x )
				, makeExpr( y )
				, makeExpr( msb )
				, makeExpr( lsb ) ) };
	}

	inline Void imulExtended( IVec3 const & x
		, IVec3 const & y
		, IVec3 const & msb
		, IVec3 const & lsb )
	{
		return Void{ findShader( x, y, msb, lsb )
			, expr::makeImulExtended3( makeExpr( x )
				, makeExpr( y )
				, makeExpr( msb )
				, makeExpr( lsb ) ) };
	}

	inline Void imulExtended( IVec4 const & x
		, IVec4 const & y
		, IVec4 const & msb
		, IVec4 const & lsb )
	{
		return Void{ findShader( x, y, msb, lsb )
			, expr::makeImulExtended4( makeExpr( x )
				, makeExpr( y )
				, makeExpr( msb )
				, makeExpr( lsb ) ) };
	}

	inline Int bitfieldExtract( Int const & value
		, Int const & offset
		, Int const & bits )
	{
		return Int{ findShader( value, offset, bits )
			, expr::makeBitfieldExtract1I( makeExpr( value )
				, makeExpr( offset )
				, makeExpr( bits ) ) };
	}

	inline IVec2 bitfieldExtract( IVec2 const & value
		, Int const & offset
		, Int const & bits )
	{
		return IVec2{ findShader( value, offset, bits )
			, expr::makeBitfieldExtract2I( makeExpr( value )
				, makeExpr( offset )
				, makeExpr( bits ) ) };
	}

	inline IVec3 bitfieldExtract( IVec3 const & value
		, Int const & offset
		, Int const & bits )
	{
		return IVec3{ findShader( value, offset, bits )
			, expr::makeBitfieldExtract3I( makeExpr( value )
				, makeExpr( offset )
				, makeExpr( bits ) ) };
	}

	inline IVec4 bitfieldExtract( IVec4 const & value
		, Int const & offset
		, Int const & bits )
	{
		return IVec4{ findShader( value, offset, bits )
			, expr::makeBitfieldExtract4I( makeExpr( value )
				, makeExpr( offset )
				, makeExpr( bits ) ) };
	}

	inline UInt bitfieldExtract( UInt const & value
		, Int const & offset
		, Int const & bits )
	{
		return UInt{ findShader( value, offset, bits )
			, expr::makeBitfieldExtract1U( makeExpr( value )
				, makeExpr( offset )
				, makeExpr( bits ) ) };
	}

	inline UVec2 bitfieldExtract( UVec2 const & value
		, Int const & offset
		, Int const & bits )
	{
		return UVec2{ findShader( value, offset, bits )
			, expr::makeBitfieldExtract2U( makeExpr( value )
				, makeExpr( offset )
				, makeExpr( bits ) ) };
	}

	inline UVec3 bitfieldExtract( UVec3 const & value
		, Int const & offset
		, Int const & bits )
	{
		return UVec3{ findShader( value, offset, bits )
			, expr::makeBitfieldExtract3U( makeExpr( value )
				, makeExpr( offset )
				, makeExpr( bits ) ) };
	}

	inline UVec4 bitfieldExtract( UVec4 const & value
		, Int const & offset
		, Int const & bits )
	{
		return UVec4{ findShader( value, offset, bits )
			, expr::makeBitfieldExtract4U( makeExpr( value )
				, makeExpr( offset )
				, makeExpr( bits ) ) };
	}

	inline Int bitfieldInsert( Int const & base
		, Int const & insert
		, Int const & offset
		, Int const & bits )
	{
		return Int{ findShader( base, insert, offset, bits )
			, expr::makeBitfieldInsert1I( makeExpr( base )
				, makeExpr( insert )
				, makeExpr( offset )
				, makeExpr( bits ) ) };
	}

	inline IVec2 bitfieldInsert( IVec2 const & base
		, IVec2 const & insert
		, Int const & offset
		, Int const & bits )
	{
		return IVec2{ findShader( base, insert, offset, bits )
			, expr::makeBitfieldInsert2I( makeExpr( base )
				, makeExpr( insert )
				, makeExpr( offset )
				, makeExpr( bits ) ) };
	}

	inline IVec3 bitfieldInsert( IVec3 const & base
		, IVec3 const & insert
		, Int const & offset
		, Int const & bits )
	{
		return IVec3{ findShader( base, insert, offset, bits )
			, expr::makeBitfieldInsert3I( makeExpr( base )
				, makeExpr( insert )
				, makeExpr( offset )
				, makeExpr( bits ) ) };
	}

	inline IVec4 bitfieldInsert( IVec4 const & base
		, IVec4 const & insert
		, Int const & offset
		, Int const & bits )
	{
		return IVec4{ findShader( base, insert, offset, bits )
			, expr::makeBitfieldInsert4I( makeExpr( base )
				, makeExpr( insert )
				, makeExpr( offset )
				, makeExpr( bits ) ) };
	}

	inline UInt bitfieldInsert( UInt const & base
		, UInt const & insert
		, Int const & offset
		, Int const & bits )
	{
		return UInt{ findShader( base, insert, offset, bits )
			, expr::makeBitfieldInsert1U( makeExpr( base )
				, makeExpr( insert )
				, makeExpr( offset )
				, makeExpr( bits ) ) };
	}

	inline UVec2 bitfieldInsert( UVec2 const & base
		, UVec2 const & insert
		, Int const & offset
		, Int const & bits )
	{
		return UVec2{ findShader( base, insert, offset, bits )
			, expr::makeBitfieldInsert2U( makeExpr( base )
				, makeExpr( insert )
				, makeExpr( offset )
				, makeExpr( bits ) ) };
	}

	inline UVec3 bitfieldInsert( UVec3 const & base
		, UVec3 const & insert
		, Int const & offset
		, Int const & bits )
	{
		return UVec3{ findShader( base, insert, offset, bits )
			, expr::makeBitfieldInsert3U( makeExpr( base )
				, makeExpr( insert )
				, makeExpr( offset )
				, makeExpr( bits ) ) };
	}

	inline UVec4 bitfieldInsert( UVec4 const & base
		, UVec4 const & insert
		, Int const & offset
		, Int const & bits )
	{
		return UVec4{ findShader( base, insert, offset, bits )
			, expr::makeBitfieldInsert4U( makeExpr( base )
				, makeExpr( insert )
				, makeExpr( offset )
				, makeExpr( bits ) ) };
	}

	inline Int bitfieldReverse( Int const & value )
	{
		return Int{ findShader( value )
			, expr::makeBitfieldReverse1I( makeExpr( value ) ) };
	}

	inline IVec2 bitfieldReverse( IVec2 const & value )
	{
		return IVec2{ findShader( value )
			, expr::makeBitfieldReverse2I( makeExpr( value ) ) };
	}

	inline IVec3 bitfieldReverse( IVec3 const & value )
	{
		return IVec3{ findShader( value )
			, expr::makeBitfieldReverse3I( makeExpr( value ) ) };
	}

	inline IVec4 bitfieldReverse( IVec4 const & value )
	{
		return IVec4{ findShader( value )
			, expr::makeBitfieldReverse4I( makeExpr( value ) ) };
	}

	inline UInt bitfieldReverse( UInt const & value )
	{
		return UInt{ findShader( value )
			, expr::makeBitfieldReverse1U( makeExpr( value ) ) };
	}

	inline UVec2 bitfieldReverse( UVec2 const & value )
	{
		return UVec2{ findShader( value )
			, expr::makeBitfieldReverse2U( makeExpr( value ) ) };
	}

	inline UVec3 bitfieldReverse( UVec3 const & value )
	{
		return UVec3{ findShader( value )
			, expr::makeBitfieldReverse3U( makeExpr( value ) ) };
	}

	inline UVec4 bitfieldReverse( UVec4 const & value )
	{
		return UVec4{ findShader( value )
			, expr::makeBitfieldReverse4U( makeExpr( value ) ) };
	}

	inline Int bitCount( Int const & value )
	{
		return Int{ findShader( value )
			, expr::makeBitCount1I( makeExpr( value ) ) };
	}

	inline IVec2 bitCount( IVec2 const & value )
	{
		return IVec2{ findShader( value )
			, expr::makeBitCount2I( makeExpr( value ) ) };
	}

	inline IVec3 bitCount( IVec3 const & value )
	{
		return IVec3{ findShader( value )
			, expr::makeBitCount3I( makeExpr( value ) ) };
	}

	inline IVec4 bitCount( IVec4 const & value )
	{
		return IVec4{ findShader( value )
			, expr::makeBitCount4I( makeExpr( value ) ) };
	}

	inline UInt bitCount( UInt const & value )
	{
		return UInt{ findShader( value )
			, expr::makeBitCount1U( makeExpr( value ) ) };
	}

	inline UVec2 bitCount( UVec2 const & value )
	{
		return UVec2{ findShader( value )
			, expr::makeBitCount2U( makeExpr( value ) ) };
	}

	inline UVec3 bitCount( UVec3 const & value )
	{
		return UVec3{ findShader( value )
			, expr::makeBitCount3U( makeExpr( value ) ) };
	}

	inline UVec4 bitCount( UVec4 const & value )
	{
		return UVec4{ findShader( value )
			, expr::makeBitCount4U( makeExpr( value ) ) };
	}

	inline Int findLSB( Int const & value )
	{
		return Int{ findShader( value )
			, expr::makeFindLSB1I( makeExpr( value ) ) };
	}

	inline IVec2 findLSB( IVec2 const & value )
	{
		return IVec2{ findShader( value )
			, expr::makeFindLSB2I( makeExpr( value ) ) };
	}

	inline IVec3 findLSB( IVec3 const & value )
	{
		return IVec3{ findShader( value )
			, expr::makeFindLSB3I( makeExpr( value ) ) };
	}

	inline IVec4 findLSB( IVec4 const & value )
	{
		return IVec4{ findShader( value )
			, expr::makeFindLSB4I( makeExpr( value ) ) };
	}

	inline Int findLSB( UInt const & value )
	{
		return Int{ findShader( value )
			, expr::makeFindLSB1U( makeExpr( value ) ) };
	}

	inline IVec2 findLSB( UVec2 const & value )
	{
		return IVec2{ findShader( value )
			, expr::makeFindLSB2U( makeExpr( value ) ) };
	}

	inline IVec3 findLSB( UVec3 const & value )
	{
		return IVec3{ findShader( value )
			, expr::makeFindLSB3U( makeExpr( value ) ) };
	}

	inline IVec4 findLSB( UVec4 const & value )
	{
		return IVec4{ findShader( value )
			, expr::makeFindLSB4U( makeExpr( value ) ) };
	}

	inline Int findMSB( Int const & value )
	{
		return Int{ findShader( value )
			, expr::makeFindMSB1I( makeExpr( value ) ) };
	}

	inline IVec2 findMSB( IVec2 const & value )
	{
		return IVec2{ findShader( value )
			, expr::makeFindMSB2I( makeExpr( value ) ) };
	}

	inline IVec3 findMSB( IVec3 const & value )
	{
		return IVec3{ findShader( value )
			, expr::makeFindMSB3I( makeExpr( value ) ) };
	}

	inline IVec4 findMSB( IVec4 const & value )
	{
		return IVec4{ findShader( value )
			, expr::makeFindMSB4I( makeExpr( value ) ) };
	}

	inline Int findMSB( UInt const & value )
	{
		return Int{ findShader( value )
			, expr::makeFindMSB1U( makeExpr( value ) ) };
	}

	inline IVec2 findMSB( UVec2 const & value )
	{
		return IVec2{ findShader( value )
			, expr::makeFindMSB2U( makeExpr( value ) ) };
	}

	inline IVec3 findMSB( UVec3 const & value )
	{
		return IVec3{ findShader( value )
			, expr::makeFindMSB3U( makeExpr( value ) ) };
	}

	inline IVec4 findMSB( UVec4 const & value )
	{
		return IVec4{ findShader( value )
			, expr::makeFindMSB4U( makeExpr( value ) ) };
	}

	// Atomic Memory Functions

	inline Int atomicAdd( Int const & mem
		, Int const & data )
	{
		return Int{ findShader( mem, data )
			, expr::makeAtomicAddI( makeExpr( mem )
				, makeExpr( data ) ) };
	}

	inline UInt atomicAdd( UInt const & mem
		, UInt const & data )
	{
		return UInt{ findShader( mem, data )
			, expr::makeAtomicAddU( makeExpr( mem )
				, makeExpr( data ) ) };
	}

	inline Int atomicMin( Int const & mem
		, Int const & data )
	{
		return Int{ findShader( mem, data )
			, expr::makeAtomicMinI( makeExpr( mem )
				, makeExpr( data ) ) };
	}

	inline UInt atomicMin( UInt const & mem
		, UInt const & data )
	{
		return UInt{ findShader( mem, data )
			, expr::makeAtomicMinU( makeExpr( mem )
				, makeExpr( data ) ) };
	}

	inline Int atomicMax( Int const & mem
		, Int const & data )
	{
		return Int{ findShader( mem, data )
			, expr::makeAtomicMaxI( makeExpr( mem )
				, makeExpr( data ) ) };
	}

	inline UInt atomicMax( UInt const & mem
		, UInt const & data )
	{
		return UInt{ findShader( mem, data )
			, expr::makeAtomicMaxU( makeExpr( mem )
				, makeExpr( data ) ) };
	}

	inline Int atomicAnd( Int const & mem
		, Int const & data )
	{
		return Int{ findShader( mem, data )
			, expr::makeAtomicAndI( makeExpr( mem )
				, makeExpr( data ) ) };
	}

	inline UInt atomicAnd( UInt const & mem
		, UInt const & data )
	{
		return UInt{ findShader( mem, data )
			, expr::makeAtomicAndU( makeExpr( mem )
				, makeExpr( data ) ) };
	}

	inline Int atomicOr( Int const & mem
		, Int const & data )
	{
		return Int{ findShader( mem, data )
			, expr::makeAtomicOrI( makeExpr( mem )
				, makeExpr( data ) ) };
	}

	inline UInt atomicOr( UInt const & mem
		, UInt const & data )
	{
		return UInt{ findShader( mem, data )
			, expr::makeAtomicOrU( makeExpr( mem )
				, makeExpr( data ) ) };
	}

	inline Int atomicXor( Int const & mem
		, Int const & data )
	{
		return Int{ findShader( mem, data )
			, expr::makeAtomicXorI( makeExpr( mem )
				, makeExpr( data ) ) };
	}

	inline UInt atomicXor( UInt const & mem
		, UInt const & data )
	{
		return UInt{ findShader( mem, data )
			, expr::makeAtomicXorU( makeExpr( mem )
				, makeExpr( data ) ) };
	}

	inline Int atomicExchange( Int const & mem
		, Int const & data )
	{
		return Int{ findShader( mem, data )
			, expr::makeAtomicExchangeI( makeExpr( mem )
				, makeExpr( data ) ) };
	}

	inline UInt atomicExchange( UInt const & mem
		, UInt const & data )
	{
		return UInt{ findShader( mem, data )
			, expr::makeAtomicExchangeU( makeExpr( mem )
				, makeExpr( data ) ) };
	}

	inline Int atomicCompSwap( Int const & mem
		, UInt const & compare )
	{
		return Int{ findShader( mem, compare )
			, expr::makeAtomicCompSwapI( makeExpr( mem )
				, makeExpr( compare ) ) };
	}

	inline UInt atomicCompSwap( UInt const & mem
		, UInt const & compare )
	{
		return UInt{ findShader( mem, compare )
			, expr::makeAtomicCompSwapU( makeExpr( mem )
				, makeExpr( compare ) ) };
	}

	// Derivative Functions

	inline Float dFdx( Float const & p )
	{
		return Float{ findShader( p )
			, expr::makeDFdx1( makeExpr( p ) ) };
	}

	inline Vec2 dFdx( Vec2 const & p )
	{
		return Vec2{ findShader( p )
			, expr::makeDFdx2( makeExpr( p ) ) };
	}

	inline Vec3 dFdx( Vec3 const & p )
	{
		return Vec3{ findShader( p )
			, expr::makeDFdx3( makeExpr( p ) ) };
	}

	inline Vec4 dFdx( Vec4 const & p )
	{
		return Vec4{ findShader( p )
			, expr::makeDFdx4( makeExpr( p ) ) };
	}

	inline Float dFdxCoarse( Float const & p )
	{
		return Float{ findShader( p )
			, expr::makeDFdxCoarse1( makeExpr( p ) ) };
	}

	inline Vec2 dFdxCoarse( Vec2 const & p )
	{
		return Vec2{ findShader( p )
			, expr::makeDFdxCoarse2( makeExpr( p ) ) };
	}

	inline Vec3 dFdxCoarse( Vec3 const & p )
	{
		return Vec3{ findShader( p )
			, expr::makeDFdxCoarse3( makeExpr( p ) ) };
	}

	inline Vec4 dFdxCoarse( Vec4 const & p )
	{
		return Vec4{ findShader( p )
			, expr::makeDFdxCoarse4( makeExpr( p ) ) };
	}

	inline Float dFdxFine( Float const & p )
	{
		return Float{ findShader( p )
			, expr::makeDFdxFine1( makeExpr( p ) ) };
	}

	inline Vec2 dFdxFine( Vec2 const & p )
	{
		return Vec2{ findShader( p )
			, expr::makeDFdxFine2( makeExpr( p ) ) };
	}

	inline Vec3 dFdxFine( Vec3 const & p )
	{
		return Vec3{ findShader( p )
			, expr::makeDFdxFine3( makeExpr( p ) ) };
	}

	inline Vec4 dFdxFine( Vec4 const & p )
	{
		return Vec4{ findShader( p )
			, expr::makeDFdxFine4( makeExpr( p ) ) };
	}

	inline Float dFdy( Float const & p )
	{
		return Float{ findShader( p )
			, expr::makeDFdy1( makeExpr( p ) ) };
	}

	inline Vec2 dFdy( Vec2 const & p )
	{
		return Vec2{ findShader( p )
			, expr::makeDFdy2( makeExpr( p ) ) };
	}

	inline Vec3 dFdy( Vec3 const & p )
	{
		return Vec3{ findShader( p )
			, expr::makeDFdy3( makeExpr( p ) ) };
	}

	inline Vec4 dFdy( Vec4 const & p )
	{
		return Vec4{ findShader( p )
			, expr::makeDFdy4( makeExpr( p ) ) };
	}

	inline Float dFdyCoarse( Float const & p )
	{
		return Float{ findShader( p )
			, expr::makeDFdyCoarse1( makeExpr( p ) ) };
	}

	inline Vec2 dFdyCoarse( Vec2 const & p )
	{
		return Vec2{ findShader( p )
			, expr::makeDFdyCoarse2( makeExpr( p ) ) };
	}

	inline Vec3 dFdyCoarse( Vec3 const & p )
	{
		return Vec3{ findShader( p )
			, expr::makeDFdyCoarse3( makeExpr( p ) ) };
	}

	inline Vec4 dFdyCoarse( Vec4 const & p )
	{
		return Vec4{ findShader( p )
			, expr::makeDFdyCoarse4( makeExpr( p ) ) };
	}

	inline Float dFdyFine( Float const & p )
	{
		return Float{ findShader( p )
			, expr::makeDFdyFine1( makeExpr( p ) ) };
	}

	inline Vec2 dFdyFine( Vec2 const & p )
	{
		return Vec2{ findShader( p )
			, expr::makeDFdyFine2( makeExpr( p ) ) };
	}

	inline Vec3 dFdyFine( Vec3 const & p )
	{
		return Vec3{ findShader( p )
			, expr::makeDFdyFine3( makeExpr( p ) ) };
	}

	inline Vec4 dFdyFine( Vec4 const & p )
	{
		return Vec4{ findShader( p )
			, expr::makeDFdyFine4( makeExpr( p ) ) };
	}

	inline Float fwidth( Float const & p )
	{
		return Float{ findShader( p )
			, expr::makeFwidth1( makeExpr( p ) ) };
	}

	inline Vec2 fwidth( Vec2 const & p )
	{
		return Vec2{ findShader( p )
			, expr::makeFwidth2( makeExpr( p ) ) };
	}

	inline Vec3 fwidth( Vec3 const & p )
	{
		return Vec3{ findShader( p )
			, expr::makeFwidth3( makeExpr( p ) ) };
	}

	inline Vec4 fwidth( Vec4 const & p )
	{
		return Vec4{ findShader( p )
			, expr::makeFwidth4( makeExpr( p ) ) };
	}

	// Interpolation Functions

	inline Float interpolateAtCentroid( Float const & x )
	{
		return Float{ findShader( x )
			, expr::makeInterpolateAtCentroid1( makeExpr( x ) ) };
	}

	inline Vec2 interpolateAtCentroid( Vec2 const & x )
	{
		return Vec2{ findShader( x )
			, expr::makeInterpolateAtCentroid2( makeExpr( x ) ) };
	}

	inline Vec3 interpolateAtCentroid( Vec3 const & x )
	{
		return Vec3{ findShader( x )
			, expr::makeInterpolateAtCentroid3( makeExpr( x ) ) };
	}

	inline Vec4 interpolateAtCentroid( Vec4 const & x )
	{
		return Vec4{ findShader( x )
			, expr::makeInterpolateAtCentroid4( makeExpr( x ) ) };
	}

	inline Float interpolateAtSample( Float const & interpolant
		, Int const & sample )
	{
		return Float{ findShader( interpolant, sample )
			, expr::makeInterpolateAtSample1( makeExpr( interpolant )
				, makeExpr( sample ) ) };
	}

	inline Vec2 interpolateAtSample( Vec2 const & interpolant
		, Int const & sample )
	{
		return Vec2{ findShader( interpolant, sample )
			, expr::makeInterpolateAtSample2( makeExpr( interpolant )
				, makeExpr( sample ) ) };
	}

	inline Vec3 interpolateAtSample( Vec3 const & interpolant
		, Int const & sample )
	{
		return Vec3{ findShader( interpolant, sample )
			, expr::makeInterpolateAtSample3( makeExpr( interpolant )
				, makeExpr( sample ) ) };
	}

	inline Vec4 interpolateAtSample( Vec4 const & interpolant
		, Int const & sample )
	{
		return Vec4{ findShader( interpolant, sample )
			, expr::makeInterpolateAtSample4( makeExpr( interpolant )
				, makeExpr( sample ) ) };
	}

	inline Float interpolateAtOffset( Float const & interpolant
		, Vec2 const & offset )
	{
		return Float{ findShader( interpolant, offset )
			, expr::makeInterpolateAtOffset1( makeExpr( interpolant )
				, makeExpr( offset ) ) };
	}

	inline Vec2 interpolateAtOffset( Vec2 const & interpolant
		, Vec2 const & offset )
	{
		return Vec2{ findShader( interpolant, offset )
			, expr::makeInterpolateAtOffset2( makeExpr( interpolant )
				, makeExpr( offset ) ) };
	}

	inline Vec3 interpolateAtOffset( Vec3 const & interpolant
		, Vec2 const & offset )
	{
		return Vec3{ findShader( interpolant, offset )
			, expr::makeInterpolateAtOffset3( makeExpr( interpolant )
				, makeExpr( offset ) ) };
	}

	inline Vec4 interpolateAtOffset( Vec4 const & interpolant
		, Vec2 const & offset )
	{
		return Vec4{ findShader( interpolant, offset )
			, expr::makeInterpolateAtOffset4( makeExpr( interpolant )
				, makeExpr( offset ) ) };
	}

	// Geometry Shader Functions

	inline Void EmitStreamVertex( Int const & stream )
	{
		return Void{ findShader( stream )
			, expr::makeEmitStreamVertex( makeExpr( stream ) ) };
	}

	inline Void EndStreamPrimitive( Int const & stream )
	{
		return Void{ findShader( stream )
			, expr::makeEndStreamPrimitive( makeExpr( stream ) ) };
	}

	inline Void EmitVertex( )
	{
		return Void{ findShader( )
			, expr::makeEmitVertex( ) };
	}

	inline Void EndPrimitive( )
	{
		return Void{ findShader( )
			, expr::makeEndPrimitive( ) };
	}

	// Shader Invocation Control Functions

	inline Void barrier( )
	{
		return Void{ findShader( )
			, expr::makeBarrier( ) };
	}

	// Shader Memory Control Functions

	inline UInt memoryBarrier( )
	{
		return UInt{ findShader( )
			, expr::makeMemoryBarrier( ) };
	}

	inline Void memoryBarrierBuffer( )
	{
		return Void{ findShader( )
			, expr::makeMemoryBarrierBuffer( ) };
	}

	inline Void memoryBarrierShared( )
	{
		return Void{ findShader( )
			, expr::makeMemoryBarrierShared( ) };
	}

	inline Void memoryBarrierImage( )
	{
		return Void{ findShader( )
			, expr::makeMemoryBarrierImage( ) };
	}

	inline Void groupMemoryBarrier( )
	{
		return Void{ findShader( )
			, expr::makeGroupMemoryBarrier( ) };
	}
}

#endif
