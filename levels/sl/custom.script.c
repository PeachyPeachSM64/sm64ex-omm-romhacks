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

#include "areas/1/custom.model.inc.h"
#include "levels/sl/header.h"
extern u8 _sl_segment_ESegmentRomStart[]; 
extern u8 _sl_segment_ESegmentRomEnd[];
#include "levels/lll/header.h"
const LevelScript level_sl_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _lll_segment_7SegmentRomStart, _lll_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _lllSegmentRomStart, _lllSegmentRomEnd),
LOAD_RAW(0x0E, _sl_segment_ESegmentRomStart, _sl_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_bitfs_skybox_mio0SegmentRomStart,_bitfs_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group2_mio0SegmentRomStart,_group2_mio0SegmentRomEnd),
LOAD_RAW(12,_group2_geoSegmentRomStart,_group2_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,                  lll_geo_0009E0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,                  lll_geo_0009F8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,                  lll_geo_000A10),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,                  lll_geo_000A28),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,                  lll_geo_000A40),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,                  lll_geo_000A60),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,                  lll_geo_000A90),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,                  lll_geo_000AA8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,                  lll_geo_000AC0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,                  lll_geo_000AD8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,                  lll_geo_000AF0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_DRAWBRIDGE_PART,                lll_geo_000B20),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_BLOCK_FIRE_BARS,       lll_geo_000B38),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_HEXAGONAL_RING,        lll_geo_000BB0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_RECTANGULAR_PLATFORM,   lll_geo_000BC8),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_SQUARE_PLATFORMS,       lll_geo_000BE0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_TILTING_SQUARE_PLATFORM,        lll_geo_000BF8),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_1,                 lll_geo_000C10),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_2,                 lll_geo_000C30),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_3,                 lll_geo_000C50),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_4,                 lll_geo_000C70),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_5,                 lll_geo_000C90),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_6,                 lll_geo_000CB0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_7,                 lll_geo_000CD0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_8,                 lll_geo_000CF0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_9,                 lll_geo_000D10),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_10,                lll_geo_000D30),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_11,                lll_geo_000D50),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_12,                lll_geo_000D70),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_13,                lll_geo_000D90),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_14,                lll_geo_000DB0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_MOVING_OCTAGONAL_MESH_PLATFORM, lll_geo_000B08),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_ROCK_BLOCK,             lll_geo_000DD0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROLLING_LOG,                    lll_geo_000DE8),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_HEXAGONAL_PLATFORM,    lll_geo_000A78),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_WOOD_BRIDGE,                    lll_geo_000B50),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_LARGE_WOOD_BRIDGE,              lll_geo_000B68),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_FALLING_PLATFORM,               lll_geo_000B80),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_LARGE_FALLING_PLATFORM,         lll_geo_000B98),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_VOLCANO_FALLING_TRAP,           lll_geo_000EA8),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_3),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_sl_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_sl_1_[] = {
AREA(1,Geo_sl_1_0x19001700),
TERRAIN(col_sl_1_0xe029d80),
SET_BACKGROUND_MUSIC(0,36),
TERRAIN_TYPE(TERRAIN_STONE),
JUMP_LINK(local_objects_sl_1_),
JUMP_LINK(local_warps_sl_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_sl_1_[] = {
OBJECT(0,-2300,-1999,5301,0,180,0,0xa0000, bhvSpinAirborneWarp),
OBJECT(0,-287,469,-490,0,0,0,0xb0000, bhvFadingWarp),
OBJECT(0,1883,-2110,4946,0,-153,0,0xc0000, bhvFadingWarp),
OBJECT(22,4000,-2266,3867,0,107,0,0xd0000, bhvWarpPipe),
OBJECT(22,-4533,7530,5032,0,-151,0,0xe0000, bhvWarpPipe),
OBJECT(87,4978,271,-5145,0,0,0,0x0, bhvBigBullyWithMinions),
OBJECT(122,5802,208,5009,0,0,0,0x1000000, bhvStar),
OBJECT(0,-6907,-1947,4500,0,0,0,0x2000000, bhvHiddenRedCoinStar),
OBJECT(122,-3390,1146,-1353,0,0,0,0x4000000, bhvStar),
OBJECT(122,-713,7448,-2004,0,0,0,0x3000000, bhvStar),
OBJECT(122,-1628,-2725,850,0,0,0,0x5000000, bhvStar),
OBJECT(215,-24,-1821,3612,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-5247,-2224,79,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-6900,-1489,6101,0,0,0,0x0, bhvRedCoin),
OBJECT(215,4213,-2259,-6472,0,0,0,0x0, bhvRedCoin),
OBJECT(215,5037,-2266,2697,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-3037,-2042,-4654,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-1449,-2259,5894,0,0,0,0x0, bhvRedCoin),
OBJECT(215,3292,-1875,-1947,0,0,0,0x0, bhvRedCoin),
OBJECT(201,-6620,-1492,5850,0,135,0,0x2d0000, bhvCannonClosed),
OBJECT(212,-2416,-260,1493,0,0,0,0x0, bhv1Up),
OBJECT(195,-6106,-1760,-5331,0,0,0,0x0, bhvBobombBuddyOpensCannon),
OBJECT(63,-60,-2364,3622,0,127,0,0x0, bhvLllSinkingRectangularPlatform),
OBJECT(64,3292,-2364,-1972,0,45,0,0x0, bhvLllSinkingSquarePlatforms),
OBJECT(65,-5725,-2262,-1478,0,0,0,0x0, bhvLllTiltingInvertedPyramid),
OBJECT(140,-6755,-1769,-2899,0,0,0,0x0, bhvBlueCoinSwitch),
OBJECT(118,-6002,-1769,-3100,0,0,0,0x0, bhvHiddenBlueCoin),
OBJECT(118,-4479,-1769,-3700,0,0,0,0x0, bhvHiddenBlueCoin),
OBJECT(118,-3260,-1769,-3971,0,0,0,0x0, bhvHiddenBlueCoin),
OBJECT(0,1646,-2207,-3713,90,0,0,0x130000, bhvCoinFormation),
OBJECT(0,-5510,-2224,660,0,0,0,0x110000, bhvCoinFormation),
OBJECT(207,4990,-2266,5045,0,-10,0,0x0, bhvFloorSwitchHiddenObjects),
OBJECT(129,5376,-2266,5208,0,60,0,0x0, bhvHiddenObject),
OBJECT(129,5439,-1568,5135,0,60,0,0x0, bhvHiddenObject),
OBJECT(129,5200,-1093,5451,0,60,0,0x0, bhvHiddenObject),
OBJECT(129,5200,-1927,5459,0,60,0,0x0, bhvHiddenObject),
OBJECT(137,-4797,-1352,-5902,0,0,0,0x30000, bhvExclamationBox),
OBJECT(58,2980,-3150,-460,0,0,0,0x0, bhvLllRotatingBlockWithFireBars),
OBJECT(58,3577,-3150,198,0,0,0,0x0, bhvLllRotatingBlockWithFireBars),
OBJECT(180,4648,-719,-5424,0,0,0,0x0, bhvFireSpitter),
OBJECT(0,1331,-3021,-5477,0,180,0,0x0, bhvFlamethrower),
OBJECT(0,4142,-3021,-2988,0,270,0,0x0, bhvFlamethrower),
OBJECT(0,4408,-3021,-83,0,260,0,0x0, bhvFlamethrower),
OBJECT(0,840,-3021,1303,0,180,0,0x0, bhvFlamethrower),
OBJECT(0,-331,-3021,422,0,0,0,0x0, bhvFlamethrower),
OBJECT(0,1998,-3021,404,0,0,0,0x0, bhvFlamethrower),
OBJECT(0,-3932,-2344,4567,0,0,0,0x40000, bhvFlamethrower),
OBJECT(0,-5787,-2344,1245,0,0,0,0x40000, bhvFlamethrower),
OBJECT(0,-5247,-2344,79,0,0,0,0x40000, bhvFlamethrower),
OBJECT(0,-1157,-2364,-3708,0,0,0,0x40000, bhvFlamethrower),
OBJECT(0,2690,-3258,740,0,0,0,0x40000, bhvFlamethrower),
OBJECT(144,3639,-3050,-5826,0,0,0,0x0, bhvFlame),
OBJECT(144,258,-3050,-5934,0,0,0,0x0, bhvFlame),
OBJECT(0,3642,-3206,-1624,0,0,0,0x40000, bhvFlamethrower),
OBJECT(0,-1628,-3102,850,0,0,0,0x40000, bhvFlamethrower),
OBJECT(0,3536,-2364,-4235,0,0,0,0x40000, bhvFlamethrower),
OBJECT(118,-1767,-2259,-4560,0,0,0,0x0, bhvHiddenBlueCoin),
OBJECT(180,-7114,-1769,-2854,0,0,0,0x0, bhvFireSpitter),
OBJECT(180,5630,-2266,-423,0,0,0,0x0, bhvFireSpitter),
OBJECT(180,3941,-2266,1085,0,0,0,0x0, bhvFireSpitter),
OBJECT(0,2429,-3125,-5904,0,270,0,0x0, bhvBouncingFireball),
OBJECT(0,329,-2364,4219,0,221,0,0x0, bhvBouncingFireball),
OBJECT(0,-274,-3125,839,0,90,0,0x0, bhvBouncingFireball),
OBJECT(137,-6441,-1071,6299,0,0,0,0x0, bhvExclamationBox),
OBJECT(0,3669,-3098,-4799,0,180,0,0x0, bhvBouncingFireball),
OBJECT(0,-4127,6823,661,0,90,0,0x0, bhvBouncingFireball),
OBJECT(0,-312,6615,-2223,0,270,0,0x0, bhvBouncingFireball),
OBJECT(0,-3302,7135,4072,0,0,0,0x40000, bhvFlamethrower),
OBJECT(0,-5732,6823,4508,0,0,0,0x40000, bhvFlamethrower),
OBJECT(0,1396,6146,-3162,0,0,0,0x40000, bhvFlamethrower),
OBJECT(86,4498,-719,-5734,0,0,0,0x0, bhvSmallBully),
OBJECT(86,4925,-719,-5187,0,0,0,0x0, bhvSmallBully),
OBJECT(86,-5644,-2259,4551,0,0,0,0x0, bhvSmallBully),
OBJECT(86,-6390,-2259,3667,0,0,0,0x0, bhvSmallBully),
OBJECT(86,1108,-2259,-5736,0,0,0,0x0, bhvSmallBully),
OBJECT(86,4522,-2266,161,0,0,0,0x0, bhvSmallBully),
OBJECT(86,1046,-2259,-4624,0,0,0,0x0, bhvSmallBully),
OBJECT(0,-1127,-2259,-5040,0,117,0,0x0, bhvCoinFormation),
OBJECT(0,-6620,-1489,5850,0,0,0,0x110000, bhvCoinFormation),
OBJECT(0,-5443,-1769,-3326,0,301,0,0x0, bhvCoinFormation),
OBJECT(0,3425,-2266,1007,0,122,0,0x0, bhvCoinFormation),
OBJECT(0,-6251,-2207,4068,90,0,0,0x130000, bhvCoinFormation),
OBJECT(0,-24,-2288,3612,0,127,0,0x0, bhvCoinFormation),
OBJECT(0,4499,-2259,-5386,0,0,0,0x0, bhvGoombaTripletSpawner),
OBJECT(223,67,-2259,-5450,0,0,0,0x0, bhvChuckya),
OBJECT(223,-4912,-1769,-3718,0,0,0,0x0, bhvChuckya),
OBJECT(188,-5209,-2224,1371,0,0,0,0x0, bhvBobomb),
OBJECT(188,5182,-2266,-974,0,0,0,0x0, bhvBobomb),
OBJECT(188,-6894,-1489,5298,0,0,0,0x0, bhvBobomb),
OBJECT(188,-1994,-2259,-4452,0,0,0,0x0, bhvBobomb),
OBJECT(137,5793,-1849,-1621,0,0,0,0x60000, bhvExclamationBox),
OBJECT(137,-3047,-1790,5888,0,0,0,0x50000, bhvExclamationBox),
OBJECT(0,-4939,-2259,5719,0,15,0,0x0, bhvCoinFormation),
OBJECT(86,-5717,-2224,80,0,0,0,0x0, bhvSmallBully),
OBJECT(86,2481,-2266,1721,0,0,0,0x0, bhvSmallBully),
OBJECT(0,1828,-2266,4260,0,-15,0,0x110000, bhvCoinFormation),
OBJECT(129,5475,-626,5115,0,60,0,0x0, bhvHiddenObject),
OBJECT(137,-4787,7942,4850,0,60,0,0x10000, bhvExclamationBox),
OBJECT(0,2720,0,6780,0,0,0,0x00200000, bhvWarp),
RETURN()
};
const LevelScript local_warps_sl_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,10,1,12,0),
WARP_NODE(12,10,1,11,0),
WARP_NODE(13,10,1,14,0),
WARP_NODE(14,10,1,13,0),
WARP_NODE(32,18,1,10,0),
WARP_NODE(240,26,1,100,0),
WARP_NODE(241,26,1,116,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
