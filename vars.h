#ifndef __VARS_H_
#define __VARS_H_

#include "types.h"

#define CAMERA_DEFAULT_OFFSET_Y toFIXED(10)
#define HERO_DEFAULT_WALKSPEED toFIXED(0.85f)
#define HERO_DEFAULT_VERTICALJUMPSPEED toFIXED(5.7f)
#define HERO_DEFAULT_HORIZONTALJUMPSPEED toFIXED(0.95f)

#define HITBOX_TYPE_SOLID   1
#define HITBOX_TYPE_SEMISOLID   2

#define DYNAMIC_HITBOX_TYPE_TEMP_SOLID 1

extern camera_t camera;
extern gamestate_e gamestate;
extern herostate_e herostate;
extern gravity_t gravity;
extern collision_t collision;

extern int iterator;
extern bool tempSolid;
extern FIXED animation_percent;

extern level_t level1;
extern level_t* currentLevel;
extern const hitbox_t* currentLevelHitboxes;
extern dynamic_hitbox_t* currentLevelDynamicHitboxes;

extern jo_img backgroundImage;
#endif