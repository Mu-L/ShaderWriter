/*
See LICENSE file in root folder
*/
#ifndef ___AST_Prerequisites_H___
#define ___AST_Prerequisites_H___
#pragma once

#include <cassert>
#include <cstdint>
#include <functional>
#include <memory>
#include <string>
#include <vector>

namespace ast
{
	namespace expr
	{
		class Expr;
		class Visitor;
		using ExprPtr = std::unique_ptr< Expr >;
		using VisitorPtr = Visitor * ;

		enum class SwizzleKind
		{
			e0,
			e1,
			e2,
			e3,
			e00,
			e01,
			e02,
			e03,
			e10,
			e11,
			e12,
			e13,
			e20,
			e21,
			e22,
			e23,
			e30,
			e31,
			e32,
			e33,
			e000,
			e001,
			e002,
			e003,
			e010,
			e011,
			e012,
			e013,
			e020,
			e021,
			e022,
			e023,
			e030,
			e031,
			e032,
			e033,
			e100,
			e101,
			e102,
			e103,
			e110,
			e111,
			e112,
			e113,
			e120,
			e121,
			e122,
			e123,
			e130,
			e131,
			e132,
			e133,
			e200,
			e201,
			e202,
			e203,
			e210,
			e211,
			e212,
			e213,
			e220,
			e221,
			e222,
			e223,
			e230,
			e231,
			e232,
			e233,
			e300,
			e301,
			e302,
			e303,
			e310,
			e311,
			e312,
			e313,
			e320,
			e321,
			e322,
			e323,
			e330,
			e331,
			e332,
			e333,
			e0000,
			e0001,
			e0002,
			e0003,
			e0010,
			e0011,
			e0012,
			e0013,
			e0020,
			e0021,
			e0022,
			e0023,
			e0030,
			e0031,
			e0032,
			e0033,
			e0100,
			e0101,
			e0102,
			e0103,
			e0110,
			e0111,
			e0112,
			e0113,
			e0120,
			e0121,
			e0122,
			e0123,
			e0130,
			e0131,
			e0132,
			e0133,
			e0200,
			e0201,
			e0202,
			e0203,
			e0210,
			e0211,
			e0212,
			e0213,
			e0220,
			e0221,
			e0222,
			e0223,
			e0230,
			e0231,
			e0232,
			e0233,
			e0300,
			e0301,
			e0302,
			e0303,
			e0310,
			e0311,
			e0312,
			e0313,
			e0320,
			e0321,
			e0322,
			e0323,
			e0330,
			e0331,
			e0332,
			e0333,
			e1000,
			e1001,
			e1002,
			e1003,
			e1010,
			e1011,
			e1012,
			e1013,
			e1020,
			e1021,
			e1022,
			e1023,
			e1030,
			e1031,
			e1032,
			e1033,
			e1100,
			e1101,
			e1102,
			e1103,
			e1110,
			e1111,
			e1112,
			e1113,
			e1120,
			e1121,
			e1122,
			e1123,
			e1130,
			e1131,
			e1132,
			e1133,
			e1200,
			e1201,
			e1202,
			e1203,
			e1210,
			e1211,
			e1212,
			e1213,
			e1220,
			e1221,
			e1222,
			e1223,
			e1230,
			e1231,
			e1232,
			e1233,
			e1300,
			e1301,
			e1302,
			e1303,
			e1310,
			e1311,
			e1312,
			e1313,
			e1320,
			e1321,
			e1322,
			e1323,
			e1330,
			e1331,
			e1332,
			e1333,
			e2000,
			e2001,
			e2002,
			e2003,
			e2010,
			e2011,
			e2012,
			e2013,
			e2020,
			e2021,
			e2022,
			e2023,
			e2030,
			e2031,
			e2032,
			e2033,
			e2100,
			e2101,
			e2102,
			e2103,
			e2110,
			e2111,
			e2112,
			e2113,
			e2120,
			e2121,
			e2122,
			e2123,
			e2130,
			e2131,
			e2132,
			e2133,
			e2200,
			e2201,
			e2202,
			e2203,
			e2210,
			e2211,
			e2212,
			e2213,
			e2220,
			e2221,
			e2222,
			e2223,
			e2230,
			e2231,
			e2232,
			e2233,
			e2300,
			e2301,
			e2302,
			e2303,
			e2310,
			e2311,
			e2312,
			e2313,
			e2320,
			e2321,
			e2322,
			e2323,
			e2330,
			e2331,
			e2332,
			e2333,
			e3000,
			e3001,
			e3002,
			e3003,
			e3010,
			e3011,
			e3012,
			e3013,
			e3020,
			e3021,
			e3022,
			e3023,
			e3030,
			e3031,
			e3032,
			e3033,
			e3100,
			e3101,
			e3102,
			e3103,
			e3110,
			e3111,
			e3112,
			e3113,
			e3120,
			e3121,
			e3122,
			e3123,
			e3130,
			e3131,
			e3132,
			e3133,
			e3200,
			e3201,
			e3202,
			e3203,
			e3210,
			e3211,
			e3212,
			e3213,
			e3220,
			e3221,
			e3222,
			e3223,
			e3230,
			e3231,
			e3232,
			e3233,
			e3300,
			e3301,
			e3302,
			e3303,
			e3310,
			e3311,
			e3312,
			e3313,
			e3320,
			e3321,
			e3322,
			e3323,
			e3330,
			e3331,
			e3332,
			e3333,
			ex = e0,
			ey = e1,
			ez = e2,
			ew = e3,
			exx = e00,
			exy = e01,
			exz = e02,
			exw = e03,
			eyx = e10,
			eyy = e11,
			eyz = e12,
			eyw = e13,
			ezx = e20,
			ezy = e21,
			ezz = e22,
			ezw = e23,
			ewx = e30,
			ewy = e31,
			ewz = e32,
			eww = e33,
			exxx = e000,
			exxy = e001,
			exxz = e002,
			exxw = e003,
			exyx = e010,
			exyy = e011,
			exyz = e012,
			exyw = e013,
			exzx = e020,
			exzy = e021,
			exzz = e022,
			exzw = e023,
			exwx = e030,
			exwy = e031,
			exwz = e032,
			exww = e033,
			eyxx = e100,
			eyxy = e101,
			eyxz = e102,
			eyxw = e103,
			eyyx = e110,
			eyyy = e111,
			eyyz = e112,
			eyyw = e113,
			eyzx = e120,
			eyzy = e121,
			eyzz = e122,
			eyzw = e123,
			eywx = e130,
			eywy = e131,
			eywz = e132,
			eyww = e133,
			ezxx = e200,
			ezxy = e201,
			ezxz = e202,
			ezxw = e203,
			ezyx = e210,
			ezyy = e211,
			ezyz = e212,
			ezyw = e213,
			ezzx = e220,
			ezzy = e221,
			ezzz = e222,
			ezzw = e223,
			ezwx = e230,
			ezwy = e231,
			ezwz = e232,
			ezww = e233,
			ewxx = e300,
			ewxy = e301,
			ewxz = e302,
			ewxw = e303,
			ewyx = e310,
			ewyy = e311,
			ewyz = e312,
			ewyw = e313,
			ewzx = e320,
			ewzy = e321,
			ewzz = e322,
			ewzw = e323,
			ewwx = e330,
			ewwy = e331,
			ewwz = e332,
			ewww = e333,
			exxxx = e0000,
			exxxy = e0001,
			exxxz = e0002,
			exxxw = e0003,
			exxyx = e0010,
			exxyy = e0011,
			exxyz = e0012,
			exxyw = e0013,
			exxzx = e0020,
			exxzy = e0021,
			exxzz = e0022,
			exxzw = e0023,
			exxwx = e0030,
			exxwy = e0031,
			exxwz = e0032,
			exxww = e0033,
			exyxx = e0100,
			exyxy = e0101,
			exyxz = e0102,
			exyxw = e0103,
			exyyx = e0110,
			exyyy = e0111,
			exyyz = e0112,
			exyyw = e0113,
			exyzx = e0120,
			exyzy = e0121,
			exyzz = e0122,
			exyzw = e0123,
			exywx = e0130,
			exywy = e0131,
			exywz = e0132,
			exyww = e0133,
			exzxx = e0200,
			exzxy = e0201,
			exzxz = e0202,
			exzxw = e0203,
			exzyx = e0210,
			exzyy = e0211,
			exzyz = e0212,
			exzyw = e0213,
			exzzx = e0220,
			exzzy = e0221,
			exzzz = e0222,
			exzzw = e0223,
			exzwx = e0230,
			exzwy = e0231,
			exzwz = e0232,
			exzww = e0233,
			exwxx = e0300,
			exwxy = e0301,
			exwxz = e0302,
			exwxw = e0303,
			exwyx = e0310,
			exwyy = e0311,
			exwyz = e0312,
			exwyw = e0313,
			exwzx = e0320,
			exwzy = e0321,
			exwzz = e0322,
			exwzw = e0323,
			exwwx = e0330,
			exwwy = e0331,
			exwwz = e0332,
			exwww = e0333,
			eyxxx = e1000,
			eyxxy = e1001,
			eyxxz = e1002,
			eyxxw = e1003,
			eyxyx = e1010,
			eyxyy = e1011,
			eyxyz = e1012,
			eyxyw = e1013,
			eyxzx = e1020,
			eyxzy = e1021,
			eyxzz = e1022,
			eyxzw = e1023,
			eyxwx = e1030,
			eyxwy = e1031,
			eyxwz = e1032,
			eyxww = e1033,
			eyyxx = e1100,
			eyyxy = e1101,
			eyyxz = e1102,
			eyyxw = e1103,
			eyyyx = e1110,
			eyyyy = e1111,
			eyyyz = e1112,
			eyyyw = e1113,
			eyyzx = e1120,
			eyyzy = e1121,
			eyyzz = e1122,
			eyyzw = e1123,
			eyywx = e1130,
			eyywy = e1131,
			eyywz = e1132,
			eyyww = e1133,
			eyzxx = e1200,
			eyzxy = e1201,
			eyzxz = e1202,
			eyzxw = e1203,
			eyzyx = e1210,
			eyzyy = e1211,
			eyzyz = e1212,
			eyzyw = e1213,
			eyzzx = e1220,
			eyzzy = e1221,
			eyzzz = e1222,
			eyzzw = e1223,
			eyzwx = e1230,
			eyzwy = e1231,
			eyzwz = e1232,
			eyzww = e1233,
			eywxx = e1300,
			eywxy = e1301,
			eywxz = e1302,
			eywxw = e1303,
			eywyx = e1310,
			eywyy = e1311,
			eywyz = e1312,
			eywyw = e1313,
			eywzx = e1320,
			eywzy = e1321,
			eywzz = e1322,
			eywzw = e1323,
			eywwx = e1330,
			eywwy = e1331,
			eywwz = e1332,
			eywww = e1333,
			ezxxx = e2000,
			ezxxy = e2001,
			ezxxz = e2002,
			ezxxw = e2003,
			ezxyx = e2010,
			ezxyy = e2011,
			ezxyz = e2012,
			ezxyw = e2013,
			ezxzx = e2020,
			ezxzy = e2021,
			ezxzz = e2022,
			ezxzw = e2023,
			ezxwx = e2030,
			ezxwy = e2031,
			ezxwz = e2032,
			ezxww = e2033,
			ezyxx = e2100,
			ezyxy = e2101,
			ezyxz = e2102,
			ezyxw = e2103,
			ezyyx = e2110,
			ezyyy = e2111,
			ezyyz = e2112,
			ezyyw = e2113,
			ezyzx = e2120,
			ezyzy = e2121,
			ezyzz = e2122,
			ezyzw = e2123,
			ezywx = e2130,
			ezywy = e2131,
			ezywz = e2132,
			ezyww = e2133,
			ezzxx = e2200,
			ezzxy = e2201,
			ezzxz = e2202,
			ezzxw = e2203,
			ezzyx = e2210,
			ezzyy = e2211,
			ezzyz = e2212,
			ezzyw = e2213,
			ezzzx = e2220,
			ezzzy = e2221,
			ezzzz = e2222,
			ezzzw = e2223,
			ezzwx = e2230,
			ezzwy = e2231,
			ezzwz = e2232,
			ezzww = e2233,
			ezwxx = e2300,
			ezwxy = e2301,
			ezwxz = e2302,
			ezwxw = e2303,
			ezwyx = e2310,
			ezwyy = e2311,
			ezwyz = e2312,
			ezwyw = e2313,
			ezwzx = e2320,
			ezwzy = e2321,
			ezwzz = e2322,
			ezwzw = e2323,
			ezwwx = e2330,
			ezwwy = e2331,
			ezwwz = e2332,
			ezwww = e2333,
			ewxxx = e3000,
			ewxxy = e3001,
			ewxxz = e3002,
			ewxxw = e3003,
			ewxyx = e3010,
			ewxyy = e3011,
			ewxyz = e3012,
			ewxyw = e3013,
			ewxzx = e3020,
			ewxzy = e3021,
			ewxzz = e3022,
			ewxzw = e3023,
			ewxwx = e3030,
			ewxwy = e3031,
			ewxwz = e3032,
			ewxww = e3033,
			ewyxx = e3100,
			ewyxy = e3101,
			ewyxz = e3102,
			ewyxw = e3103,
			ewyyx = e3110,
			ewyyy = e3111,
			ewyyz = e3112,
			ewyyw = e3113,
			ewyzx = e3120,
			ewyzy = e3121,
			ewyzz = e3122,
			ewyzw = e3123,
			ewywx = e3130,
			ewywy = e3131,
			ewywz = e3132,
			ewyww = e3133,
			ewzxx = e3200,
			ewzxy = e3201,
			ewzxz = e3202,
			ewzxw = e3203,
			ewzyx = e3210,
			ewzyy = e3211,
			ewzyz = e3212,
			ewzyw = e3213,
			ewzzx = e3220,
			ewzzy = e3221,
			ewzzz = e3222,
			ewzzw = e3223,
			ewzwx = e3230,
			ewzwy = e3231,
			ewzwz = e3232,
			ewzww = e3233,
			ewwxx = e3300,
			ewwxy = e3301,
			ewwxz = e3302,
			ewwxw = e3303,
			ewwyx = e3310,
			ewwyy = e3311,
			ewwyz = e3312,
			ewwyw = e3313,
			ewwzx = e3320,
			ewwzy = e3321,
			ewwzz = e3322,
			ewwzw = e3323,
			ewwwx = e3330,
			ewwwy = e3331,
			ewwwz = e3332,
			ewwww = e3333,
			er = e0,
			eg = e1,
			eb = e2,
			ea = e3,
			err = e00,
			erg = e01,
			erb = e02,
			era = e03,
			egr = e10,
			egg = e11,
			egb = e12,
			ega = e13,
			ebr = e20,
			ebg = e21,
			ebb = e22,
			eba = e23,
			ear = e30,
			eag = e31,
			eab = e32,
			eaa = e33,
			errr = e000,
			errg = e001,
			errb = e002,
			erra = e003,
			ergr = e010,
			ergg = e011,
			ergb = e012,
			erga = e013,
			erbr = e020,
			erbg = e021,
			erbb = e022,
			erba = e023,
			erar = e030,
			erag = e031,
			erab = e032,
			eraa = e033,
			egrr = e100,
			egrg = e101,
			egrb = e102,
			egra = e103,
			eggr = e110,
			eggg = e111,
			eggb = e112,
			egga = e113,
			egbr = e120,
			egbg = e121,
			egbb = e122,
			egba = e123,
			egar = e130,
			egag = e131,
			egab = e132,
			egaa = e133,
			ebrr = e200,
			ebrg = e201,
			ebrb = e202,
			ebra = e203,
			ebgr = e210,
			ebgg = e211,
			ebgb = e212,
			ebga = e213,
			ebbr = e220,
			ebbg = e221,
			ebbb = e222,
			ebba = e223,
			ebar = e230,
			ebag = e231,
			ebab = e232,
			ebaa = e233,
			earr = e300,
			earg = e301,
			earb = e302,
			eara = e303,
			eagr = e310,
			eagg = e311,
			eagb = e312,
			eaga = e313,
			eabr = e320,
			eabg = e321,
			eabb = e322,
			eaba = e323,
			eaar = e330,
			eaag = e331,
			eaab = e332,
			eaaa = e333,
			errrr = e0000,
			errrg = e0001,
			errrb = e0002,
			errra = e0003,
			errgr = e0010,
			errgg = e0011,
			errgb = e0012,
			errga = e0013,
			errbr = e0020,
			errbg = e0021,
			errbb = e0022,
			errba = e0023,
			errar = e0030,
			errag = e0031,
			errab = e0032,
			erraa = e0033,
			ergrr = e0100,
			ergrg = e0101,
			ergrb = e0102,
			ergra = e0103,
			erggr = e0110,
			erggg = e0111,
			erggb = e0112,
			ergga = e0113,
			ergbr = e0120,
			ergbg = e0121,
			ergbb = e0122,
			ergba = e0123,
			ergar = e0130,
			ergag = e0131,
			ergab = e0132,
			ergaa = e0133,
			erbrr = e0200,
			erbrg = e0201,
			erbrb = e0202,
			erbra = e0203,
			erbgr = e0210,
			erbgg = e0211,
			erbgb = e0212,
			erbga = e0213,
			erbbr = e0220,
			erbbg = e0221,
			erbbb = e0222,
			erbba = e0223,
			erbar = e0230,
			erbag = e0231,
			erbab = e0232,
			erbaa = e0233,
			erarr = e0300,
			erarg = e0301,
			erarb = e0302,
			erara = e0303,
			eragr = e0310,
			eragg = e0311,
			eragb = e0312,
			eraga = e0313,
			erabr = e0320,
			erabg = e0321,
			erabb = e0322,
			eraba = e0323,
			eraar = e0330,
			eraag = e0331,
			eraab = e0332,
			eraaa = e0333,
			egrrr = e1000,
			egrrg = e1001,
			egrrb = e1002,
			egrra = e1003,
			egrgr = e1010,
			egrgg = e1011,
			egrgb = e1012,
			egrga = e1013,
			egrbr = e1020,
			egrbg = e1021,
			egrbb = e1022,
			egrba = e1023,
			egrar = e1030,
			egrag = e1031,
			egrab = e1032,
			egraa = e1033,
			eggrr = e1100,
			eggrg = e1101,
			eggrb = e1102,
			eggra = e1103,
			egggr = e1110,
			egggg = e1111,
			egggb = e1112,
			eggga = e1113,
			eggbr = e1120,
			eggbg = e1121,
			eggbb = e1122,
			eggba = e1123,
			eggar = e1130,
			eggag = e1131,
			eggab = e1132,
			eggaa = e1133,
			egbrr = e1200,
			egbrg = e1201,
			egbrb = e1202,
			egbra = e1203,
			egbgr = e1210,
			egbgg = e1211,
			egbgb = e1212,
			egbga = e1213,
			egbbr = e1220,
			egbbg = e1221,
			egbbb = e1222,
			egbba = e1223,
			egbar = e1230,
			egbag = e1231,
			egbab = e1232,
			egbaa = e1233,
			egarr = e1300,
			egarg = e1301,
			egarb = e1302,
			egara = e1303,
			egagr = e1310,
			egagg = e1311,
			egagb = e1312,
			egaga = e1313,
			egabr = e1320,
			egabg = e1321,
			egabb = e1322,
			egaba = e1323,
			egaar = e1330,
			egaag = e1331,
			egaab = e1332,
			egaaa = e1333,
			ebrrr = e2000,
			ebrrg = e2001,
			ebrrb = e2002,
			ebrra = e2003,
			ebrgr = e2010,
			ebrgg = e2011,
			ebrgb = e2012,
			ebrga = e2013,
			ebrbr = e2020,
			ebrbg = e2021,
			ebrbb = e2022,
			ebrba = e2023,
			ebrar = e2030,
			ebrag = e2031,
			ebrab = e2032,
			ebraa = e2033,
			ebgrr = e2100,
			ebgrg = e2101,
			ebgrb = e2102,
			ebgra = e2103,
			ebggr = e2110,
			ebggg = e2111,
			ebggb = e2112,
			ebgga = e2113,
			ebgbr = e2120,
			ebgbg = e2121,
			ebgbb = e2122,
			ebgba = e2123,
			ebgar = e2130,
			ebgag = e2131,
			ebgab = e2132,
			ebgaa = e2133,
			ebbrr = e2200,
			ebbrg = e2201,
			ebbrb = e2202,
			ebbra = e2203,
			ebbgr = e2210,
			ebbgg = e2211,
			ebbgb = e2212,
			ebbga = e2213,
			ebbbr = e2220,
			ebbbg = e2221,
			ebbbb = e2222,
			ebbba = e2223,
			ebbar = e2230,
			ebbag = e2231,
			ebbab = e2232,
			ebbaa = e2233,
			ebarr = e2300,
			ebarg = e2301,
			ebarb = e2302,
			ebara = e2303,
			ebagr = e2310,
			ebagg = e2311,
			ebagb = e2312,
			ebaga = e2313,
			ebabr = e2320,
			ebabg = e2321,
			ebabb = e2322,
			ebaba = e2323,
			ebaar = e2330,
			ebaag = e2331,
			ebaab = e2332,
			ebaaa = e2333,
			earrr = e3000,
			earrg = e3001,
			earrb = e3002,
			earra = e3003,
			eargr = e3010,
			eargg = e3011,
			eargb = e3012,
			earga = e3013,
			earbr = e3020,
			earbg = e3021,
			earbb = e3022,
			earba = e3023,
			earar = e3030,
			earag = e3031,
			earab = e3032,
			earaa = e3033,
			eagrr = e3100,
			eagrg = e3101,
			eagrb = e3102,
			eagra = e3103,
			eaggr = e3110,
			eaggg = e3111,
			eaggb = e3112,
			eagga = e3113,
			eagbr = e3120,
			eagbg = e3121,
			eagbb = e3122,
			eagba = e3123,
			eagar = e3130,
			eagag = e3131,
			eagab = e3132,
			eagaa = e3133,
			eabrr = e3200,
			eabrg = e3201,
			eabrb = e3202,
			eabra = e3203,
			eabgr = e3210,
			eabgg = e3211,
			eabgb = e3212,
			eabga = e3213,
			eabbr = e3220,
			eabbg = e3221,
			eabbb = e3222,
			eabba = e3223,
			eabar = e3230,
			eabag = e3231,
			eabab = e3232,
			eabaa = e3233,
			eaarr = e3300,
			eaarg = e3301,
			eaarb = e3302,
			eaara = e3303,
			eaagr = e3310,
			eaagg = e3311,
			eaagb = e3312,
			eaaga = e3313,
			eaabr = e3320,
			eaabg = e3321,
			eaabb = e3322,
			eaaba = e3323,
			eaaar = e3330,
			eaaag = e3331,
			eaaab = e3332,
			eaaaa = e3333,
			es = e0,
			et = e1,
			eu = e2,
			ev = e3,
			ess = e00,
			est = e01,
			esu = e02,
			esv = e03,
			ets = e10,
			ett = e11,
			etu = e12,
			etv = e13,
			eus = e20,
			eut = e21,
			euu = e22,
			euv = e23,
			evs = e30,
			evt = e31,
			evu = e32,
			evv = e33,
			esss = e000,
			esst = e001,
			essu = e002,
			essv = e003,
			ests = e010,
			estt = e011,
			estu = e012,
			estv = e013,
			esus = e020,
			esut = e021,
			esuu = e022,
			esuv = e023,
			esvs = e030,
			esvt = e031,
			esvu = e032,
			esvv = e033,
			etss = e100,
			etst = e101,
			etsu = e102,
			etsv = e103,
			etts = e110,
			ettt = e111,
			ettu = e112,
			ettv = e113,
			etus = e120,
			etut = e121,
			etuu = e122,
			etuv = e123,
			etvs = e130,
			etvt = e131,
			etvu = e132,
			etvv = e133,
			euss = e200,
			eust = e201,
			eusu = e202,
			eusv = e203,
			euts = e210,
			eutt = e211,
			eutu = e212,
			eutv = e213,
			euus = e220,
			euut = e221,
			euuu = e222,
			euuv = e223,
			euvs = e230,
			euvt = e231,
			euvu = e232,
			euvv = e233,
			evss = e300,
			evst = e301,
			evsu = e302,
			evsv = e303,
			evts = e310,
			evtt = e311,
			evtu = e312,
			evtv = e313,
			evus = e320,
			evut = e321,
			evuu = e322,
			evuv = e323,
			evvs = e330,
			evvt = e331,
			evvu = e332,
			evvv = e333,
			essss = e0000,
			essst = e0001,
			esssu = e0002,
			esssv = e0003,
			essts = e0010,
			esstt = e0011,
			esstu = e0012,
			esstv = e0013,
			essus = e0020,
			essut = e0021,
			essuu = e0022,
			essuv = e0023,
			essvs = e0030,
			essvt = e0031,
			essvu = e0032,
			essvv = e0033,
			estss = e0100,
			estst = e0101,
			estsu = e0102,
			estsv = e0103,
			estts = e0110,
			esttt = e0111,
			esttu = e0112,
			esttv = e0113,
			estus = e0120,
			estut = e0121,
			estuu = e0122,
			estuv = e0123,
			estvs = e0130,
			estvt = e0131,
			estvu = e0132,
			estvv = e0133,
			esuss = e0200,
			esust = e0201,
			esusu = e0202,
			esusv = e0203,
			esuts = e0210,
			esutt = e0211,
			esutu = e0212,
			esutv = e0213,
			esuus = e0220,
			esuut = e0221,
			esuuu = e0222,
			esuuv = e0223,
			esuvs = e0230,
			esuvt = e0231,
			esuvu = e0232,
			esuvv = e0233,
			esvss = e0300,
			esvst = e0301,
			esvsu = e0302,
			esvsv = e0303,
			esvts = e0310,
			esvtt = e0311,
			esvtu = e0312,
			esvtv = e0313,
			esvus = e0320,
			esvut = e0321,
			esvuu = e0322,
			esvuv = e0323,
			esvvs = e0330,
			esvvt = e0331,
			esvvu = e0332,
			esvvv = e0333,
			etsss = e1000,
			etsst = e1001,
			etssu = e1002,
			etssv = e1003,
			etsts = e1010,
			etstt = e1011,
			etstu = e1012,
			etstv = e1013,
			etsus = e1020,
			etsut = e1021,
			etsuu = e1022,
			etsuv = e1023,
			etsvs = e1030,
			etsvt = e1031,
			etsvu = e1032,
			etsvv = e1033,
			ettss = e1100,
			ettst = e1101,
			ettsu = e1102,
			ettsv = e1103,
			ettts = e1110,
			etttt = e1111,
			etttu = e1112,
			etttv = e1113,
			ettus = e1120,
			ettut = e1121,
			ettuu = e1122,
			ettuv = e1123,
			ettvs = e1130,
			ettvt = e1131,
			ettvu = e1132,
			ettvv = e1133,
			etuss = e1200,
			etust = e1201,
			etusu = e1202,
			etusv = e1203,
			etuts = e1210,
			etutt = e1211,
			etutu = e1212,
			etutv = e1213,
			etuus = e1220,
			etuut = e1221,
			etuuu = e1222,
			etuuv = e1223,
			etuvs = e1230,
			etuvt = e1231,
			etuvu = e1232,
			etuvv = e1233,
			etvss = e1300,
			etvst = e1301,
			etvsu = e1302,
			etvsv = e1303,
			etvts = e1310,
			etvtt = e1311,
			etvtu = e1312,
			etvtv = e1313,
			etvus = e1320,
			etvut = e1321,
			etvuu = e1322,
			etvuv = e1323,
			etvvs = e1330,
			etvvt = e1331,
			etvvu = e1332,
			etvvv = e1333,
			eusss = e2000,
			eusst = e2001,
			eussu = e2002,
			eussv = e2003,
			eusts = e2010,
			eustt = e2011,
			eustu = e2012,
			eustv = e2013,
			eusus = e2020,
			eusut = e2021,
			eusuu = e2022,
			eusuv = e2023,
			eusvs = e2030,
			eusvt = e2031,
			eusvu = e2032,
			eusvv = e2033,
			eutss = e2100,
			eutst = e2101,
			eutsu = e2102,
			eutsv = e2103,
			eutts = e2110,
			euttt = e2111,
			euttu = e2112,
			euttv = e2113,
			eutus = e2120,
			eutut = e2121,
			eutuu = e2122,
			eutuv = e2123,
			eutvs = e2130,
			eutvt = e2131,
			eutvu = e2132,
			eutvv = e2133,
			euuss = e2200,
			euust = e2201,
			euusu = e2202,
			euusv = e2203,
			euuts = e2210,
			euutt = e2211,
			euutu = e2212,
			euutv = e2213,
			euuus = e2220,
			euuut = e2221,
			euuuu = e2222,
			euuuv = e2223,
			euuvs = e2230,
			euuvt = e2231,
			euuvu = e2232,
			euuvv = e2233,
			euvss = e2300,
			euvst = e2301,
			euvsu = e2302,
			euvsv = e2303,
			euvts = e2310,
			euvtt = e2311,
			euvtu = e2312,
			euvtv = e2313,
			euvus = e2320,
			euvut = e2321,
			euvuu = e2322,
			euvuv = e2323,
			euvvs = e2330,
			euvvt = e2331,
			euvvu = e2332,
			euvvv = e2333,
			evsss = e3000,
			evsst = e3001,
			evssu = e3002,
			evssv = e3003,
			evsts = e3010,
			evstt = e3011,
			evstu = e3012,
			evstv = e3013,
			evsus = e3020,
			evsut = e3021,
			evsuu = e3022,
			evsuv = e3023,
			evsvs = e3030,
			evsvt = e3031,
			evsvu = e3032,
			evsvv = e3033,
			evtss = e3100,
			evtst = e3101,
			evtsu = e3102,
			evtsv = e3103,
			evtts = e3110,
			evttt = e3111,
			evttu = e3112,
			evttv = e3113,
			evtus = e3120,
			evtut = e3121,
			evtuu = e3122,
			evtuv = e3123,
			evtvs = e3130,
			evtvt = e3131,
			evtvu = e3132,
			evtvv = e3133,
			evuss = e3200,
			evust = e3201,
			evusu = e3202,
			evusv = e3203,
			evuts = e3210,
			evutt = e3211,
			evutu = e3212,
			evutv = e3213,
			evuus = e3220,
			evuut = e3221,
			evuuu = e3222,
			evuuv = e3223,
			evuvs = e3230,
			evuvt = e3231,
			evuvu = e3232,
			evuvv = e3233,
			evvss = e3300,
			evvst = e3301,
			evvsu = e3302,
			evvsv = e3303,
			evvts = e3310,
			evvtt = e3311,
			evvtu = e3312,
			evvtv = e3313,
			evvus = e3320,
			evvut = e3321,
			evvuu = e3322,
			evvuv = e3323,
			evvvs = e3330,
			evvvt = e3331,
			evvvu = e3332,
			evvvv = e3333,
		};
		std::string getName( SwizzleKind kind );
	}
	namespace stmt
	{
		class Stmt;
		class Visitor;
		using StmtPtr = std::unique_ptr< Stmt >;
		using VisitorPtr = Visitor * ;
	}
	namespace var
	{
		class Variable;
		using VariablePtr = std::shared_ptr< Variable >;
	}
	namespace type
	{
		class Type;
		using TypePtr = std::shared_ptr< Type >;

		template< typename TypeT = Type
			, typename CreatorT = std::function< TypePtr( uint32_t ) > >
		class TypeCache;
		class Struct;
		using StructPtr = std::shared_ptr< Struct >;
		struct ImageConfiguration;
		class Image;
		using ImagePtr = std::shared_ptr< Image >;
		class SampledImage;
		using SampledImagePtr = std::shared_ptr< SampledImage >;
	}
}

#endif
