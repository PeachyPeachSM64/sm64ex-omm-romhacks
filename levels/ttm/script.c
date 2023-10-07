#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"
#include "game/level_update.h"
#include "levels/scripts.h"
#include "actors/common1.h"
#include "make_const_nonconst.h"
#include "levels/ttm/header.h"

static const LevelScript level_ttm_POSTLOAD[] = {
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(local_area_ttm_1_),
    JUMP_LINK(local_area_ttm_2_),
    FREE_LEVEL_POOL(),
    MARIO_POS(1,135,-6558,0,6464),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};

//AREA 2 LOADS
static const LevelScript level_ttm_area2load[] = {
    ALLOC_LEVEL_POOL(),
    JUMP_LINK(script_func_global_2),
    JUMP_LINK(script_func_global_18),
    JUMP(level_ttm_POSTLOAD)
};

const LevelScript level_ttm_entry[] = {
    INIT_LEVEL(),
    JUMP_AREA(0,2,level_ttm_area2load),
    ALLOC_LEVEL_POOL(),
    JUMP_LINK(script_func_global_10),
    JUMP_LINK(script_func_global_15),
    JUMP(level_ttm_POSTLOAD)
};

const LevelScript local_area_ttm_1_[] = {
    AREA(1,Geo_ttm_1_0x19001700),
    TERRAIN(col_ttm_1_0xe02ff50),
    SET_BACKGROUND_MUSIC(0,3),
    TERRAIN_TYPE(0),
    JUMP_LINK(local_objects_ttm_1_),
    JUMP_LINK(local_warps_ttm_1_),
    END_AREA(),
    RETURN()
};

const LevelScript local_objects_ttm_1_[] = {
    OBJECT_WITH_ACTS(0,110,-2197,-2909,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
    OBJECT_WITH_ACTS(84,151,2941,-275,0,0,0,0x0, bhvBalconyBigBoo,31),
    OBJECT_WITH_ACTS(137,-2487,-189,-3492,0,0,0,0xa0000, bhvExclamationBox,31),
    OBJECT_WITH_ACTS(0,-977,-1832,1005,0,0,0,0x2000000, bhvHiddenRedCoinStar,31),
    OBJECT_WITH_ACTS(122,3490,-1107,3285,0,0,0,0x3000000, bhvStar,31),
    OBJECT_WITH_ACTS(122,-1210,-156,1826,0,0,0,0x4000000, bhvStar,31),
    OBJECT_WITH_ACTS(122,4896,1563,1250,0,0,0,0x5000000, bhvStar,31),
    OBJECT_WITH_ACTS(215,1190,-2154,987,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-3735,-2135,-1692,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-4740,-469,2760,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,5260,-469,1458,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-2446,2969,-618,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,2708,2969,-646,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,3490,990,-2813,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,3489,-2135,472,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(84,-3386,-365,-968,0,0,0,0x0, bhvBoo,31),
    OBJECT_WITH_ACTS(84,-4115,-365,-729,0,0,0,0x0, bhvBoo,31),
    OBJECT_WITH_ACTS(84,3108,1354,-134,0,0,0,0x0, bhvBoo,31),
    OBJECT_WITH_ACTS(84,3906,1354,-156,0,0,0,0x0, bhvBoo,31),
    OBJECT_WITH_ACTS(100,-551,-2197,-26,0,0,0,0x0, bhvPiranhaPlant,31),
    OBJECT_WITH_ACTS(100,749,-2197,-61,0,0,0,0x0, bhvPiranhaPlant,31),
    OBJECT_WITH_ACTS(100,2235,-2197,-1024,0,0,0,0x0, bhvFirePiranhaPlant,31),
    OBJECT_WITH_ACTS(100,-1959,-2197,-1086,0,0,0,0x0, bhvFirePiranhaPlant,31),
    OBJECT_WITH_ACTS(100,-31,1222,-911,0,0,0,0x10000, bhvFirePiranhaPlant,31),
    OBJECT_WITH_ACTS(192,-2368,1222,-241,0,0,0,0x0, bhvGoomba,31),
    OBJECT_WITH_ACTS(192,-2453,1222,129,0,0,0,0x0, bhvGoomba,31),
    OBJECT_WITH_ACTS(144,-839,-501,1083,0,0,0,0x0, bhvFlame,31),
    OBJECT_WITH_ACTS(129,-930,-501,1222,0,-27,0,0x0, bhvBreakableBox,31),
    OBJECT_WITH_ACTS(137,3594,1510,-625,0,0,0,0x20000, bhvExclamationBox,31),
    OBJECT_WITH_ACTS(0,104,-2197,-1458,0,0,0,0x0, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,156,2840,156,0,0,0,0x0, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,-4115,-417,1510,0,0,0,0x0, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,4375,-417,833,0,25,0,0x0, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,3490,-2135,1667,0,90,0,0x0, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,52,-2083,1412,0,0,0,0x110000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,30,1302,1410,0,0,0,0x110000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,-3815,-2031,2884,0,0,0,0x110000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(124,-408,-2197,1064,0,164,0,0x310000, bhvMessagePanel,31),
    OBJECT_WITH_ACTS(212,-3750,-417,-2708,0,0,0,0x0, bhv1Up,31),
    OBJECT_WITH_ACTS(140,636,2840,950,0,18,0,0x0, bhvBlueCoinSwitch,31),
    OBJECT_WITH_ACTS(118,118,2917,779,0,0,0,0x0, bhvHiddenBlueCoin,31),
    OBJECT_WITH_ACTS(118,142,2892,-836,0,0,0,0x0, bhvHiddenBlueCoin,31),
    OBJECT_WITH_ACTS(118,110,493,-1534,0,0,0,0x0, bhvHiddenBlueCoin,31),
    OBJECT_WITH_ACTS(118,106,1274,-1551,0,0,0,0x0, bhvHiddenBlueCoin,31),
    OBJECT_WITH_ACTS(118,132,1642,-1146,0,0,0,0x0, bhvHiddenBlueCoin,31),
    OBJECT_WITH_ACTS(118,133,2756,-1130,0,0,0,0x0, bhvHiddenBlueCoin,31),
    OBJECT_WITH_ACTS(118,156,-2197,-365,0,0,0,0x0, bhvHiddenBlueCoin,31),
    OBJECT_WITH_ACTS(118,156,-2197,0,0,0,0,0x0, bhvHiddenBlueCoin,31),
    OBJECT_WITH_ACTS(144,-782,-501,990,0,0,0,0x0, bhvFlame,31),
    RETURN()
};

const LevelScript local_warps_ttm_1_[] = {
    WARP_NODE(10,9,1,10,0),
    WARP_NODE(11,9,1,12,0),
    WARP_NODE(12,9,1,11,0),
    WARP_NODE(13,9,1,14,0),
    WARP_NODE(14,9,1,13,0),
    WARP_NODE(240,6,1,64,0),
    WARP_NODE(241,6,1,65,0),
    WARP_NODE(0,9,1,10,0),
    WARP_NODE(1,9,1,10,0),
    WARP_NODE(2,9,1,10,0),
    WARP_NODE(3,9,1,10,0),
    WARP_NODE(4,9,1,10,0),
    WARP_NODE(5,9,1,10,0),
    WARP_NODE(6,9,1,10,0),
    RETURN()
};

const LevelScript local_area_ttm_2_[] = {
    AREA(2,Geo_ttm_2_0x19001700),
    TERRAIN(col_ttm_2_0xe033900),
    SET_BACKGROUND_MUSIC(0,0x25),
    TERRAIN_TYPE(0),
    JUMP_LINK(local_objects_ttm_2_),
    JUMP_LINK(local_warps_ttm_2_),
    END_AREA(),
    RETURN()
};

const LevelScript local_objects_ttm_2_[] = {
    OBJECT_WITH_ACTS(0,-91,-4185,1879,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
    OBJECT_WITH_ACTS(122,-104,4193,-3513,0,0,0,0x0, bhvStar,31),
    OBJECT_WITH_ACTS(122,-4306,4512,2494,0,0,0,0x3000000, bhvStar,31),
    OBJECT_WITH_ACTS(122,1537,191,2478,0,0,0,0x2000000, bhvStar,31),
    OBJECT_WITH_ACTS(122,3178,4987,-4320,0,0,0,0x1000000, bhvStar,31),
    OBJECT_WITH_ACTS(0,-156,3315,515,0,-4,0,0x4000000, bhvHiddenRedCoinStar,31),
    OBJECT_WITH_ACTS(122,6031,3021,2938,0,0,0,0x5000000, bhvStar,31),
    OBJECT_WITH_ACTS(215,-4323,3491,-3385,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,3080,-4375,-674,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-78,-1198,-1825,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-3,-1823,-7,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-33,-1979,1875,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-74,2188,1824,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-142,3021,-4528,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,4799,1875,-3121,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(207,-116,2794,-1716,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
    OBJECT_WITH_ACTS(129,874,-29,1044,0,24,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,1171,1290,1161,0,27,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,-1380,1134,1202,0,-18,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,4513,3228,-3413,0,64,0,0x0, bhvBreakableBox,31),
    OBJECT_WITH_ACTS(129,-3136,1134,-1036,0,31,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,4709,2676,-3532,0,8,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,4902,2181,-3357,0,13,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,4715,3839,-3512,0,-9,0,0x0, bhvBreakableBox,31),
    OBJECT_WITH_ACTS(129,7252,380,4635,0,8,0,0x0, bhvBreakableBox,31),
    OBJECT_WITH_ACTS(129,7283,1028,4997,0,-2,0,0x0, bhvBreakableBox,31),
    OBJECT_WITH_ACTS(129,7259,1779,4658,0,10,0,0x0, bhvBreakableBox,31),
    OBJECT_WITH_ACTS(129,7254,2512,4765,0,11,0,0x0, bhvBreakableBox,31),
    OBJECT_WITH_ACTS(129,1161,209,1600,0,25,0,0x0, bhvBreakableBox,31),
    OBJECT_WITH_ACTS(144,1162,236,1459,0,0,0,0x0, bhvFlame,31),
    OBJECT_WITH_ACTS(144,1008,235,1437,0,0,0,0x0, bhvFlame,31),
    OBJECT_WITH_ACTS(137,-4662,3445,-4089,0,23,0,0x20000, bhvExclamationBox,31),
    OBJECT_WITH_ACTS(89,-4604,1455,1490,0,0,0,0x0, bhvHeaveHo,31),
    OBJECT_WITH_ACTS(89,-3981,1455,817,0,0,0,0x0, bhvHeaveHo,31),
    OBJECT_WITH_ACTS(89,-4710,1455,95,0,0,0,0x0, bhvHeaveHo,31),
    OBJECT_WITH_ACTS(89,-4234,1455,-349,0,0,0,0x0, bhvHeaveHo,31),
    OBJECT_WITH_ACTS(89,-4025,1455,1993,0,0,0,0x0, bhvHeaveHo,31),
    OBJECT_WITH_ACTS(89,-4301,783,3601,0,0,0,0x0, bhvHeaveHo,31),
    OBJECT_WITH_ACTS(124,-46,-4547,2400,0,180,0,0x2b0000, bhvMessagePanel,31),
    OBJECT_WITH_ACTS(0,1654,-1473,-769,0,77,0,0x0, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(223,3517,-2427,2122,0,0,0,0x0, bhvChuckya,31),
    OBJECT_WITH_ACTS(223,3159,-2425,598,0,0,0,0x0, bhvChuckya,31),
    OBJECT_WITH_ACTS(223,-5427,-262,769,0,0,0,0x0, bhvChuckya,31),
    OBJECT_WITH_ACTS(223,4989,-256,-714,0,0,0,0x0, bhvChuckya,31),
    OBJECT_WITH_ACTS(223,5396,-262,900,0,0,0,0x0, bhvChuckya,31),
    OBJECT_WITH_ACTS(130,-3393,-4477,-622,0,30,0,0x0, bhvBreakableBoxSmall,31),
    OBJECT_WITH_ACTS(130,5931,-302,3541,0,49,0,0x0, bhvBreakableBoxSmall,31),
    OBJECT_WITH_ACTS(0,-1464,2020,1447,0,0,0,0x110000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,1315,2050,1402,0,0,0,0x110000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,-1959,-1525,-735,0,96,0,0x0, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,3576,1897,-918,0,94,0,0x0, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(140,-6582,-290,1888,0,27,0,0x0, bhvBlueCoinSwitch,31),
    OBJECT_WITH_ACTS(118,-6149,-2530,1568,0,0,0,0x0, bhvHiddenBlueCoin,31),
    OBJECT_WITH_ACTS(118,-3844,-2152,-1673,0,0,0,0x0, bhvHiddenBlueCoin,31),
    OBJECT_WITH_ACTS(118,-4150,-1512,-1928,0,0,0,0x0, bhvHiddenBlueCoin,31),
    OBJECT_WITH_ACTS(0,-17,-1496,1309,0,0,0,0x0, bhvMrI,31),
    OBJECT_WITH_ACTS(0,-116,-3345,-738,0,0,0,0x0, bhvMrI,31),
    OBJECT_WITH_ACTS(206,-138,727,1077,0,0,0,0x0, bhvSnufit,31),
    OBJECT_WITH_ACTS(206,857,3083,539,0,0,0,0x0, bhvSnufit,31),
    OBJECT_WITH_ACTS(206,-1166,3083,524,0,0,0,0x0, bhvSnufit,31),
    OBJECT_WITH_ACTS(129,-2427,603,-216,0,20,0,0x0, bhvJumpingBox,31),
    OBJECT_WITH_ACTS(180,6249,2771,3189,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,7256,2031,4667,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,7278,1302,4979,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,7244,2760,4772,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(144,1122,208,1382,0,0,0,0x0, bhvFlame,31),
    RETURN()
};

const LevelScript local_warps_ttm_2_[] = {
    WARP_NODE(10,9,2,10,0),
    WARP_NODE(11,9,2,12,0),
    WARP_NODE(12,9,2,11,0),
    WARP_NODE(13,9,2,14,0),
    WARP_NODE(14,9,2,13,0),
    WARP_NODE(240,6,2,6,0),
    WARP_NODE(241,6,2,7,0),
    WARP_NODE(0,9,2,10,0),
    WARP_NODE(1,9,2,10,0),
    WARP_NODE(2,9,2,10,0),
    WARP_NODE(3,9,2,10,0),
    WARP_NODE(4,9,2,10,0),
    WARP_NODE(5,9,2,10,0),
    WARP_NODE(6,9,2,10,0),
    RETURN()
};
