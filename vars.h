#ifndef __VARS_H_
#define __VARS_H_

#include "types.h"

/**
 * Defines
 */
#define CAMERA_DEFAULT_OFFSET_Y toFIXED(4)
#define HUD_HEALTH_OFFSET_X 16
#define HUD_HEALTH_OFFSET_Y 28
#define HUD_SWEAPON_ONE_X 258
#define HUD_SWEAPON_ONE_Y 272
#define HUD_SWEAPON_ONE_Z 286

#define HERO_DEFAULT_WALKSPEED toFIXED(0.75f)
#define HERO_DEFAULT_VERTICALJUMPSPEED toFIXED(3.2f)
#define HERO_DEFAULT_HORIZONTALJUMPSPEED toFIXED(0.85f)

#define HERO_ANIMATION_IDLE_ID 0 
#define HERO_ANIMATION_WALK_ID 1

#define HITBOX_TYPE_SOLID 1
#define HITBOX_TYPE_SEMISOLID 2
#define HITBOX_TYPE_DAMAGE 3
#define HITBOX_TYPE_LADDER 4

#define DYNAMIC_HITBOX_TYPE_TEMP_SOLID 1
#define DYNAMIC_HITBOX_TYPE_TEMP_CHUNK 2
#define DYNAMIC_HITBOX_TYPE_GRAVITY 3
#define DYNAMIC_HITBOX_TYPE_SWITCH 5
#define DYNAMIC_HITBOX_TYPE_ENEMYSPAWNER 6
#define DYNAMIC_HITBOX_TYPE_YOKU 7

/**
 * Helpers
 */
extern collision_t collision;

extern int iterator;
extern short temp;
extern bool tempSolid;
extern bool printDebug;
extern herostate_e oldHerostate;
extern bool oldDirection;

/**
 * Graphics and visuals
 */
extern camera_t camera;
extern FIXED animation_percent;
extern jo_img backgroundImage;

extern int imageHUDBackgroundId;
extern int imageHUDFillId;
extern int imageHUDSWeaponOne;
extern int imageHUDSWeaponTwo;
extern int imageHUDSWeaponThree;

/**
 * Gameplay and character management
 */
extern gamestate_e gamestate;
extern herostate_e herostate;
extern gravity_t gravity;

extern const hitbox_t *currentLevelHitboxes;
extern dynamic_hitbox_t *currentLevelDynamicHitboxes;

/**
 * Levels
 */

extern level_t *currentLevel;
extern level_t level1;

/**
 * Menus and options
 */

extern short currentSelection;

#endif