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
#include "levels/wf/header.h"

const LevelScript level_wf_entry[] = {
    INIT_LEVEL(),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_2),
    JUMP_LINK(script_func_global_15),
    JUMP_LINK(local_area_wf_1_),
    JUMP_LINK(local_area_wf_2_),
    FREE_LEVEL_POOL(),
    MARIO_POS(1,135,-6558,0,6464),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};

const LevelScript local_area_wf_1_[] = {
    AREA(1,Geo_wf_1_0x19001700),
    TERRAIN(col_wf_1_0xe011c68),
    SET_BACKGROUND_MUSIC(0,2),
    TERRAIN_TYPE(0),
    JUMP_LINK(local_objects_wf_1_),
    JUMP_LINK(local_warps_wf_1_),
    END_AREA(),
    RETURN()
};

const LevelScript local_objects_wf_1_[] = {
    OBJECT_WITH_ACTS(0,-2457,-1581,-1593,0,90,0,0xa0000, bhvSpinAirborneWarp,31),
    OBJECT_WITH_ACTS(124,-1498,-3174,-2099,0,-94,0,0x200000, bhvMessagePanel,31),
    OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp,31),
    OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp,31),
    OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp,31),
    OBJECT_WITH_ACTS(122,3876,3334,-790,0,0,0,0x0, bhvStar,31),
    OBJECT_WITH_ACTS(0,3279,0,522,0,0,0,0x1000000, bhvHiddenRedCoinStar,31),
    OBJECT_WITH_ACTS(137,-5151,3906,1266,0,0,0,0xb0000, bhvExclamationBox,31),
    OBJECT_WITH_ACTS(122,5083,-156,-5859,0,0,0,0x3000000, bhvStar,31),
    OBJECT_WITH_ACTS(137,5221,781,1786,0,0,0,0xd0000, bhvExclamationBox,31),
    OBJECT_WITH_ACTS(122,-4789,365,808,0,0,0,0x5000000, bhvStar,31),
    OBJECT_WITH_ACTS(215,-2401,-3073,48,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,4644,0,-872,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-977,2188,882,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,1889,-208,2428,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-3727,781,1481,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-4562,2188,837,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-547,-468,611,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,2313,-2083,-2763,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(207,5075,-2314,-4530,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
    OBJECT_WITH_ACTS(129,5566,-1927,-4931,0,0,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,5064,-1510,-4932,0,0,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,4600,-1146,-4943,0,0,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(140,-321,525,3024,0,0,0,0x0, bhvBlueCoinSwitch,31),
    OBJECT_WITH_ACTS(118,109,629,3792,0,0,0,0x0, bhvHiddenBlueCoin,31),
    OBJECT_WITH_ACTS(118,1689,417,3878,0,0,0,0x0, bhvHiddenBlueCoin,31),
    OBJECT_WITH_ACTS(118,3207,469,3875,0,0,0,0x0, bhvHiddenBlueCoin,31),
    OBJECT_WITH_ACTS(118,5187,468,3844,0,0,0,0x0, bhvHiddenBlueCoin,31),
    OBJECT_WITH_ACTS(118,5234,469,2992,0,0,0,0x0, bhvHiddenBlueCoin,31),
    OBJECT_WITH_ACTS(223,1581,-534,1239,0,0,0,0x0, bhvChuckya,31),
    OBJECT_WITH_ACTS(220,131,729,1184,0,0,0,0x0, bhvFlyGuy,31),
    OBJECT_WITH_ACTS(220,-4275,1667,520,0,0,0,0x0, bhvFlyGuy,31),
    OBJECT_WITH_ACTS(180,-1912,675,693,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,-3203,675,1028,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(0,166,-2950,-1955,0,0,0,0x0, bhvGoombaTripletSpawner,31),
    OBJECT_WITH_ACTS(0,3,-3074,-1854,90,0,0,0x130000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,4974,-625,-5554,90,0,0,0x130000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,-4320,1041,830,0,90,0,0x130000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(212,-3730,833,184,0,0,0,0x0, bhv1Up,31),
    OBJECT_WITH_ACTS(0,-2629,871,827,0,90,0,0x0, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,3069,0,-870,0,0,0,0x110000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,3078,989,-880,0,0,0,0x110000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,3067,1823,-898,0,0,0,0x110000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,447,-312,2178,0,0,0,0x110000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,-1003,-157,355,0,0,0,0x110000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(137,2163,0,-2365,0,0,0,0x50000, bhvExclamationBox,31),
    OBJECT_WITH_ACTS(212,391,-3125,-3444,0,0,0,0x0, bhv1Up,31),
    OBJECT_WITH_ACTS(116,-5102,2969,378,0,0,0,0x0, bhvOneCoin,31),
    OBJECT_WITH_ACTS(88,-991,1666,870,0,0,0,0x0, bhvThwomp,31),
    OBJECT_WITH_ACTS(103,3099,-534,1230,0,-90,0,0x0, bhvSmallWhomp,31),
    OBJECT_WITH_ACTS(116,4367,-157,2692,0,0,0,0x0, bhvOneCoin,31),
    RETURN()
};

const LevelScript local_warps_wf_1_[] = {
    WARP_NODE(10,9,1,10,0),
    WARP_NODE(11,9,1,12,0),
    WARP_NODE(12,9,1,11,0),
    WARP_NODE(13,9,1,14,0),
    WARP_NODE(14,9,1,13,0),
    WARP_NODE(240,26,1,42,0),
    WARP_NODE(241,26,1,43,0),
    WARP_NODE(0,9,1,10,0),
    WARP_NODE(1,9,1,10,0),
    WARP_NODE(2,9,1,10,0),
    WARP_NODE(3,9,1,10,0),
    WARP_NODE(4,9,1,10,0),
    WARP_NODE(5,9,1,10,0),
    WARP_NODE(6,9,1,10,0),
    RETURN()
};

const LevelScript local_area_wf_2_[] = {
    AREA(2,Geo_wf_2_0x19001700),
    TERRAIN(col_wf_2_0xe01eed0),
    SET_BACKGROUND_MUSIC(0,0x23),
    TERRAIN_TYPE(0),
    JUMP_LINK(local_objects_wf_2_),
    JUMP_LINK(local_warps_wf_2_),
    END_AREA(),
    RETURN()
};

const LevelScript local_objects_wf_2_[] = {
    OBJECT_WITH_ACTS(0,3802,-2848,-781,0,-90,0,0xa0000, bhvSpinAirborneWarp,31),
    OBJECT_WITH_ACTS(122,-2177,5964,-754,0,0,0,0x0, bhvStar,31),
    OBJECT_WITH_ACTS(0,-3563,-19,-5515,0,0,0,0x1000000, bhvHiddenStar,31),
    OBJECT_WITH_ACTS(122,6811,5034,920,0,0,0,0x2000000, bhvStar,31),
    OBJECT_WITH_ACTS(122,-2603,-2461,-1142,0,0,0,0x3000000, bhvStar,31),
    OBJECT_WITH_ACTS(122,-3438,-677,3698,0,0,0,0x4000000, bhvStar,31),
    OBJECT_WITH_ACTS(0,1406,-2431,-1510,0,0,0,0x5000000, bhvHiddenRedCoinStar,31),
    OBJECT_WITH_ACTS(215,-2624,2552,-185,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,6330,2552,932,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-2398,2552,-84,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,4375,365,-729,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-3229,3385,-2656,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-2604,-208,-3854,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-4167,-1458,260,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,2969,625,677,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(207,-1837,-1395,843,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
    OBJECT_WITH_ACTS(129,-3531,-1563,1802,45,0,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,-3517,-1302,2498,45,0,3,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(212,-2083,3021,-746,0,0,0,0x0, bhv1Up,31),
    OBJECT_WITH_ACTS(100,-104,-758,104,0,0,0,0x0, bhvPiranhaPlant,31),
    OBJECT_WITH_ACTS(100,-1615,-208,990,0,0,0,0x0, bhvPiranhaPlant,31),
    OBJECT_WITH_ACTS(100,625,-208,990,0,0,0,0x0, bhvPiranhaPlant,31),
    OBJECT_WITH_ACTS(88,2292,1582,781,0,270,0,0x0, bhvThwomp,31),
    OBJECT_WITH_ACTS(88,2292,1582,1094,0,270,0,0x0, bhvThwomp,31),
    OBJECT_WITH_ACTS(103,-2188,-208,1875,0,0,0,0x0, bhvSmallWhomp,31),
    OBJECT_WITH_ACTS(103,3281,-2848,-2656,0,0,0,0x0, bhvSmallWhomp,31),
    OBJECT_WITH_ACTS(223,-3759,2091,1930,0,0,0,0x0, bhvChuckya,31),
    OBJECT_WITH_ACTS(223,-3281,1391,3958,0,0,0,0x0, bhvChuckya,31),
    OBJECT_WITH_ACTS(223,365,1091,3906,0,0,0,0x0, bhvChuckya,31),
    OBJECT_WITH_ACTS(89,3906,1001,938,0,0,0,0x0, bhvHeaveHo,31),
    OBJECT_WITH_ACTS(107,6250,2897,938,0,0,0,0x0, bhvWoodenPost,31),
    OBJECT_WITH_ACTS(207,-3542,-1988,-4688,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
    OBJECT_WITH_ACTS(129,-4792,-1875,-5208,0,0,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,-4427,-1458,-5885,0,-57,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,-3594,-1146,-6198,0,0,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,-2865,-990,-5833,0,-34,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,-2656,-833,-5104,0,0,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,5208,1124,313,0,0,0,0x0, bhvJumpingBox,31),
    OBJECT_WITH_ACTS(140,5260,1101,1600,0,0,0,0x0, bhvBlueCoinSwitch,31),
    OBJECT_WITH_ACTS(118,3646,1198,1354,0,0,0,0x0, bhvHiddenBlueCoin,31),
    OBJECT_WITH_ACTS(118,3958,1198,1354,0,0,0,0x0, bhvHiddenBlueCoin,31),
    OBJECT_WITH_ACTS(118,4271,1198,1354,0,0,0,0x0, bhvHiddenBlueCoin,31),
    OBJECT_WITH_ACTS(118,3646,1198,521,0,0,0,0x0, bhvHiddenBlueCoin,31),
    OBJECT_WITH_ACTS(118,3958,1198,521,0,0,0,0x0, bhvHiddenBlueCoin,31),
    OBJECT_WITH_ACTS(118,4271,1198,521,0,0,0,0x0, bhvHiddenBlueCoin,31),
    OBJECT_WITH_ACTS(0,6667,3906,1354,0,0,0,0x110000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,-1563,0,-729,0,0,0,0x110000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,-3021,4427,-726,0,0,-29,0x110000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,2741,781,1314,90,0,0,0x0, bhvFlamethrower,31),
    OBJECT_WITH_ACTS(0,-3542,-1927,-4948,90,0,0,0x0, bhvFlamethrower,31),
    OBJECT_WITH_ACTS(180,5990,2157,2812,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,5990,2157,-938,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,-1549,-1354,851,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,-1069,-2708,-402,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(217,-1719,4010,-669,0,0,0,0x0, bhvPushableMetalBox,31),
    OBJECT_WITH_ACTS(0,-4786,-1675,-5209,0,0,0,0x0, bhvHiddenStarTrigger,31),
    OBJECT_WITH_ACTS(0,-4427,-1258,-5937,0,0,0,0x0, bhvHiddenStarTrigger,31),
    OBJECT_WITH_ACTS(0,-3594,-946,-6198,0,0,0,0x0, bhvHiddenStarTrigger,31),
    OBJECT_WITH_ACTS(0,-2865,-790,-5833,0,0,0,0x0, bhvHiddenStarTrigger,31),
    OBJECT_WITH_ACTS(0,-2656,-633,-5104,0,0,0,0x0, bhvHiddenStarTrigger,31),
    RETURN()
};

const LevelScript local_warps_wf_2_[] = {
    WARP_NODE(10,9,2,10,0),
    WARP_NODE(11,9,2,12,0),
    WARP_NODE(12,9,2,11,0),
    WARP_NODE(13,9,2,14,0),
    WARP_NODE(14,9,2,13,0),
    WARP_NODE(240,26,2,32,0),
    WARP_NODE(241,26,2,42,0),
    WARP_NODE(0,9,2,10,0),
    WARP_NODE(1,9,2,10,0),
    WARP_NODE(2,9,2,10,0),
    WARP_NODE(3,9,2,10,0),
    WARP_NODE(4,9,2,10,0),
    WARP_NODE(5,9,2,10,0),
    WARP_NODE(6,9,2,10,0),
    RETURN()
};