#include <ultra64.h>
#include "sm64.h"
#include "moving_texture.h"
#include "area.h"
/*
This is an include meant to help with the addition of moving textures for water boxes. Moving textures are hardcoded in vanilla, but in hacks they're procedural. Every hack uses 0x5000 +Type (0 for water, 1 for toxic mist, 2 for mist) to locate the tables for their water boxes. I will replicate this by using a 3 dimensional array of pointers. This wastes a little bit of memory but is way easier to manage.
To use this, goto your moving_texture.c file and change the default case in void *get_quad_collection_from_id(u32 id) to return GetRomhackWaterBox(id); Then place this file in your source folder so that it can be included.
Make sure you add extern void *GetRomhackWaterBox(u32 id); to moving_texture.h so that you do not get a multiple reference error.
You could also just use the references shown here at the top and and them manually yourself to the current switch case.
*/
extern u8 bbh_2_Movtex_0[];
extern u8 ccm_1_Movtex_0[];
extern u8 hmc_1_Movtex_0[];
extern u8 ssl_1_Movtex_0[];
extern u8 ssl_2_Movtex_0[];
extern u8 bob_1_Movtex_0[];
extern u8 sl_1_Movtex_0[];
extern u8 sl_2_Movtex_0[];
extern u8 wdw_1_Movtex_0[];
extern u8 jrb_1_Movtex_0[];
extern u8 bitfs_1_Movtex_0[];
extern u8 ddd_1_Movtex_0[];
extern u8 castle_courtyard_1_Movtex_0[];
extern u8 cotmc_1_Movtex_0[];
extern u8 wmotr_2_Movtex_0[];

static void *RM2C_Water_Box_Array[37][8][3] = {
{ {NULL,NULL,NULL},{NULL,NULL,NULL},{&bbh_2_Movtex_0,NULL,NULL,},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{&ccm_1_Movtex_0,NULL,NULL,},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{&hmc_1_Movtex_0,NULL,NULL,},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{&ssl_1_Movtex_0,NULL,NULL,},{&ssl_2_Movtex_0,NULL,NULL,},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{&bob_1_Movtex_0,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{&sl_1_Movtex_0,NULL,NULL,},{&sl_2_Movtex_0,NULL,NULL,},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{&wdw_1_Movtex_0,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{&jrb_1_Movtex_0,NULL,NULL,},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{&bitfs_1_Movtex_0,NULL,NULL,},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{&ddd_1_Movtex_0,NULL,NULL,},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{&castle_courtyard_1_Movtex_0,NULL,NULL,},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{&cotmc_1_Movtex_0,NULL,NULL,},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{NULL,NULL,NULL},{&wmotr_2_Movtex_0,NULL,NULL,},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
{ {NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}, },
};
void *GetRomhackWaterBox(u32 id){
id = id&0xF;
return RM2C_Water_Box_Array[gCurrLevelNum-4][gCurrAreaIndex][id];
};