#ifndef __VARS_H_
#define __VARS_H_

#include "types.h"

/**
 * Defines
 */

#define ENEMY_MAX_NUMBER 6
#define ENEMY_TYPE_ZOMBIE 0

#define CAMERA_DEFAULT_OFFSET_Y toFIXED(4)
#define HUD_HEALTH_OFFSET_X 15
#define HUD_HEALTH_OFFSET_Y 29

#define HUD_SWEAPON_ONE_X 244
#define HUD_SWEAPON_ONE_Y 266
#define HUD_SWEAPON_ONE_Z 287
#define HUD_SWEAPON_OFFSETY 29

#define HERO_DEFAULT_WALKSPEED toFIXED(0.82f)
#define HERO_DEFAULT_VERTICALJUMPSPEED toFIXED(3.2f)
#define HERO_DEFAULT_HORIZONTALJUMPSPEED toFIXED(0.95f)
#define HERO_DEFAULT_KNOCKBACK_HORIZONTALSPEED_RAW (0.4f)
#define HERO_DEFAULT_KNOCKBACK_VERTICALSPEED toFIXED(-2.0f)
#define HERO_DEFAULT_SWORD_HITBOX_WIDTH toFIXED(16)
#define HERO_DEFAULT_SWORD_HITBOX_HEIGHT toFIXED(21)
#define HERO_DEFAULT_SWORD_HITBOX_OFFSET_X toFIXED(7)
#define HERO_DEFAULT_SWORD_HITBOX_OFFSET_Y toFIXED(3)
#define HERO_DEFAULT_SWORD_COUNTER 64
#define HERO_DEAFULT_SWORD_STARTUP 19
#define HERO_DEAFULT_SWORD_RECOVERY 11

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
extern int iterator2;
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
extern jo_img_8bits backgroundImage;

extern int imageHUDBackgroundId;
extern int imageHUDFillId;
extern int imageHUDSWeaponOne;
extern int imageHUDSWeaponTwo;
extern int imageHUDSWeaponThree;

extern jo_palette palette;
extern jo_palette bgPalette;

/**
 * Gameplay and character management
 */
extern gamestate_e gamestate;
extern herostate_e herostate;
extern gravity_t gravity;
extern hero_t hero;

extern const hitbox_t *currentLevelHitboxes;
extern dynamic_hitbox_t currentLevelDynamicHitboxes[5];

/**
 * Levels
 */

extern level_t *currentLevel;
extern level_t level1;

extern const enemy_t *currentLevelEnemies;
extern enemy_t currentActiveEnemies[ENEMY_MAX_NUMBER];
/**
 * Menus and options
 */

extern short currentSelection;
extern short animTestCurrentCharacter;
extern short animTestCurrentAnimation;

#endif