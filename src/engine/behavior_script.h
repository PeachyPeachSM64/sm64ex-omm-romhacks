#ifndef BEHAVIOR_SCRIPT_H
#define BEHAVIOR_SCRIPT_H

#include <PR/ultratypes.h>

#define BHV_PROC_CONTINUE 0
#define BHV_PROC_BREAK    1

#define cur_obj_get_int(offset) gCurrentObject->OBJECT_FIELD_S32(offset)
#define cur_obj_get_float(offset) gCurrentObject->OBJECT_FIELD_F32(offset)

#define cur_obj_add_float(offset, value) gCurrentObject->OBJECT_FIELD_F32(offset) += (f32)(value)
#define cur_obj_set_float(offset, value) gCurrentObject->OBJECT_FIELD_F32(offset) = (f32)(value)
#define cur_obj_add_int(offset, value) gCurrentObject->OBJECT_FIELD_S32(offset) += (s32)(value)
#define cur_obj_set_int(offset, value) gCurrentObject->OBJECT_FIELD_S32(offset) = (s32)(value)
#define cur_obj_or_int(offset, value)  gCurrentObject->OBJECT_FIELD_S32(offset) |= (s32)(value)
#define cur_obj_and_int(offset, value) gCurrentObject->OBJECT_FIELD_S32(offset) &= (s32)(value)
#define cur_obj_set_vptr(offset, value) gCurrentObject->OBJECT_FIELD_VPTR(offset) = (void *)(value)

#define obj_and_int(object, offset, value) object->OBJECT_FIELD_S32(offset) &= (s32)(value)

u16 random_u16(void);
float random_float(void);
s32 random_sign(void);

void stub_behavior_script_2(void);

void cur_obj_update(void);

// Extra functions
void obj_set_model(struct Object *obj, s32 modelID);
s32 obj_has_model(struct Object *obj, u16 modelID);
s32 obj_get_model(struct Object *obj);

#endif // BEHAVIOR_SCRIPT_H
