// koopa_shell_underwater.inc.c

struct ObjectHitbox sKoopaShellUnderwaterHitbox = {
    /* interactType:      */ INTERACT_GRABBABLE,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 1,
    /* numLootCoins:      */ 0,
    /* radius:            */ 80,
    /* height:            */ 50,
    /* hurtboxRadius:     */ 0,
    /* hurtboxHeight:     */ 0,
};

void set_koopa_shell_underwater_hitbox(void) {
    obj_set_hitbox(o, &sKoopaShellUnderwaterHitbox);
}

void bhv_koopa_shell_underwater_loop(void) {
    switch (o->oHeldState) {
        case HELD_FREE:
            set_koopa_shell_underwater_hitbox();
            break;
        case HELD_HELD:
            cur_obj_unrender_set_action_and_anim(-1, 0);
            break;
        case HELD_THROWN:
        case HELD_DROPPED:
#if QOL_FIX_DROPPED_UNDERWATER_SHELL
            spawn_mist_particles();
            obj_mark_for_deletion(o);
#else
            obj_mark_for_deletion(o);
            spawn_mist_particles();
#endif
            break;
    }

    if (o->oInteractStatus & INT_STATUS_STOP_RIDING) {
#if QOL_FIX_DROPPED_UNDERWATER_SHELL
        spawn_mist_particles();
        obj_mark_for_deletion(o);
#else
        obj_mark_for_deletion(o);
        spawn_mist_particles();
#endif
    }

    o->oInteractStatus = 0;
}
