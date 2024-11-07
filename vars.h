#ifndef __VARS_H_
#define __VARS_H_

#include "types.h"

typedef enum
{
    MAINMENU = 0,
    GAMEPLAY = 1,
    FINANCES = 2,
    PAUSED = 3,
    MENU = 4
} gamestate_e;

typedef enum
{
    IDLE,
    WALKING,
    ATTACK,
    JUMP,
    HIT,
    DYING
} herostate_e;

extern camera_t camera;
extern gamestate_e gamestate;
extern herostate_e herostate;
extern gravity_t gravity;
extern collision_t collision;
extern FIXED friction;
extern int iterator;
extern int pc;
extern int rc;

#endif