#ifndef __VARS_H_
#define __VARS_H_

#include "types.h"

/**
 * Defines
 */

/// Maximum number of enemies
#define ENEMY_MAX_NUMBER 6
/// Zombie enemy
#define ENEMY_TYPE_ZOMBIE 0

/// Vertical offset for camera
#define CAMERA_DEFAULT_OFFSET_Y toFIXED(4)
/// Horizontal offset for HUD
#define HUD_HEALTH_OFFSET_X 15
/// Vertical offset for HUD
#define HUD_HEALTH_OFFSET_Y 29

/// Horizontal offset for first subweapon icon
#define HUD_SWEAPON_ONE_X 244
/// Horizontal offset for second subweapon icon
#define HUD_SWEAPON_ONE_Y 266
/// Horizontal offset for third subweapon icon
#define HUD_SWEAPON_ONE_Z 287
/// Vertical offset for subweapon icons
#define HUD_SWEAPON_OFFSETY 29

/// Default hero walk speed
#define HERO_DEFAULT_WALKSPEED toFIXED(0.82f)
/// Default hero jump height
#define HERO_DEFAULT_VERTICALJUMPSPEED toFIXED(3.2f)
/// Default hero horizontal speed when jumping
/// Move slightly faster during jumps, it "feels" better 
#define HERO_DEFAULT_HORIZONTALJUMPSPEED toFIXED(0.95f)
/// Horizontal knockback speed, float value to make it easier to adjust direction
#define HERO_DEFAULT_KNOCKBACK_HORIZONTALSPEED_RAW (0.4f)
/// Vertical knockback speed
#define HERO_DEFAULT_KNOCKBACK_VERTICALSPEED toFIXED(-2.0f)
/// Default hero standing hitbox width
#define HERO_DEFAULT_HITBOX_STANDING_WIDTH toFIXED(9)
/// Default hero standing hitbox height
#define HERO_DEFAULT_HITBOX_STANDING_HEIGHT toFIXED(24)
/// Sword hitbox width
#define HERO_DEFAULT_SWORD_HITBOX_WIDTH toFIXED(16)
/// Sword hitbox height
#define HERO_DEFAULT_SWORD_HITBOX_HEIGHT toFIXED(21)
/// Sword hitbox horizontal offset relative to hero x
#define HERO_DEFAULT_SWORD_HITBOX_OFFSET_X toFIXED(7)
/// Sword hitbox vertical offset relative to hero y
#define HERO_DEFAULT_SWORD_HITBOX_OFFSET_Y toFIXED(3)
/// Sword active frame duration
#define HERO_DEFAULT_SWORD_COUNTER 64
/// Sword active frames
#define HERO_DEAFULT_SWORD_STARTUP 19
/// Sword recovery frames
#define HERO_DEAFULT_SWORD_RECOVERY 11

/// Solid hitbox
#define HITBOX_TYPE_SOLID 1
/// Semisolid hitbox
#define HITBOX_TYPE_SEMISOLID 2
/// Damaging hitbox
#define HITBOX_TYPE_DAMAGE 3
/// Ladder hitbox
#define HITBOX_TYPE_LADDER 4

/// Solid dynamic hitbox
#define DYNAMIC_HITBOX_TYPE_TEMP_SOLID 1
/// Chunk controlling hitbox
#define DYNAMIC_HITBOX_TYPE_TEMP_CHUNK 2
/// Gravity controlling hitbox
#define DYNAMIC_HITBOX_TYPE_GRAVITY 3
/// Switch dynamic hitbox
#define DYNAMIC_HITBOX_TYPE_SWITCH 5
/// Enemy spawner
#define DYNAMIC_HITBOX_TYPE_ENEMYSPAWNER 6
/// Yoku block
#define DYNAMIC_HITBOX_TYPE_YOKU 7


/**
 * Helpers
 */

/// @brief Collision object; stores result for latest collision calculation
extern collision_t collision;

/// @brief Global iterator
extern int iterator;
/// @brief Global iterator, one level nested
extern int iterator2;
/// @brief Iterator for print operations
extern int iteratorText;
/// @brief Sprite offset for print operation
extern int textSpriteOffset;
/// @brief Print debug information
extern bool printDebug;
/// @brief hero state from previous iteration
extern herostate_e oldHerostate;
/// @brief Direction from previous iteration
extern bool oldDirection;

/**
 * Graphics and visuals
 */

/// @brief Global camera
extern camera_t camera;
/// @brief Animation percent, used for interpolation
extern FIXED animation_percent;
/// @brief 8 bit image buffer
extern jo_img_8bits backgroundImageBuffer;

/// @brief HUD background sprite id
extern int imageHUDBackgroundId;
/// @brief HUD health fill sprite id
extern int imageHUDFillId;
/// @brief First subweapon icon sprite id
extern int imageHUDSWeaponOne;
/// @brief Second subweapon icon sprite id
extern int imageHUDSWeaponTwo;
/// @brief Third subweapon icon sprite id
extern int imageHUDSWeaponThree;
/// @brief Custom font first sprite id
extern int imageTextCharacters;

/// @brief Font tiles definition
static jo_tile fontTiles[] =
    {
        {.height = 16, .width = 8, .x = 0, .y = 0},
        {.height = 16, .width = 8, .x = 0, .y = 16},
        {.height = 16, .width = 8, .x = 0, .y = 32},
        {.height = 16, .width = 8, .x = 0, .y = 48},
        {.height = 16, .width = 8, .x = 0, .y = 64},
        {.height = 16, .width = 8, .x = 0, .y = 80},
        {.height = 16, .width = 8, .x = 0, .y = 96},
        {.height = 16, .width = 8, .x = 0, .y = 112},
        {.height = 16, .width = 8, .x = 0, .y = 128},
        {.height = 16, .width = 8, .x = 0, .y = 144},
        {.height = 16, .width = 8, .x = 0, .y = 160},
        {.height = 16, .width = 8, .x = 0, .y = 176},
        {.height = 16, .width = 8, .x = 0, .y = 192},
        {.height = 16, .width = 8, .x = 0, .y = 208},
        {.height = 16, .width = 8, .x = 0, .y = 224},
        {.height = 16, .width = 8, .x = 0, .y = 240},
        {.height = 16, .width = 8, .x = 0, .y = 256},
        {.height = 16, .width = 8, .x = 0, .y = 272},
        {.height = 16, .width = 8, .x = 0, .y = 288},
        {.height = 16, .width = 8, .x = 0, .y = 304},
        {.height = 16, .width = 8, .x = 0, .y = 320},
        {.height = 16, .width = 8, .x = 0, .y = 336},
        {.height = 16, .width = 8, .x = 0, .y = 352},
        {.height = 16, .width = 8, .x = 0, .y = 368},
        {.height = 16, .width = 8, .x = 0, .y = 384},
        {.height = 16, .width = 8, .x = 0, .y = 400},
        {.height = 16, .width = 8, .x = 0, .y = 416},
        {.height = 16, .width = 8, .x = 0, .y = 432},
        {.height = 16, .width = 8, .x = 0, .y = 448},
        {.height = 16, .width = 8, .x = 0, .y = 464},
        {.height = 16, .width = 8, .x = 0, .y = 480},
        {.height = 16, .width = 8, .x = 0, .y = 496},
        {.height = 16, .width = 8, .x = 0, .y = 512},
        {.height = 16, .width = 8, .x = 0, .y = 528},
        {.height = 16, .width = 8, .x = 0, .y = 544},
        {.height = 16, .width = 8, .x = 0, .y = 560},
        {.height = 16, .width = 8, .x = 0, .y = 576},
        {.height = 16, .width = 8, .x = 0, .y = 592},
        {.height = 16, .width = 8, .x = 0, .y = 608},
        {.height = 16, .width = 8, .x = 0, .y = 624},

        {.height = 16, .width = 8, .x = 0, .y = 640},
        {.height = 16, .width = 8, .x = 0, .y = 656},
        {.height = 16, .width = 8, .x = 0, .y = 672},
        {.height = 16, .width = 8, .x = 0, .y = 688},
        {.height = 16, .width = 8, .x = 0, .y = 704},
        {.height = 16, .width = 8, .x = 0, .y = 720},

};

/// @brief HUD palette
extern jo_palette hudPalette;
/// @brief Font palette
extern jo_palette fontPalette;
/// @brief Background image palette
extern jo_palette bgPalette;

/**
 * Gameplay and character management
 */

/// @brief Game state
extern gamestate_e gamestate;
/// @brief  Global gravity
extern gravity_t gravity;
/// @brief Playable hero instance
extern hero_t hero;

/// @brief Static hitboxes for currently loaded level
extern const hitbox_t *currentLevelHitboxes;
/// @brief Dynamic hitboxes for currently loaded level
extern dynamic_hitbox_t currentLevelDynamicHitboxes[5];

/**
 * Levels
 */

/// @brief Current level data
extern level_t *currentLevel;

/// @brief Level 1 data
extern level_t level1;

/// @brief Enemies for currently loaded level
extern const enemy_t *currentLevelEnemies;
/// @brief Enemies loaded in active enemy slots
extern enemy_t currentActiveEnemies[ENEMY_MAX_NUMBER];

/**
 * Menus and options
 */

/// @brief Current menu selection
extern short currentSelection;

/// @brief Character to render in animation test
extern short animTestCurrentCharacter;
/// @brief Animation to play in animation test
extern short animTestCurrentAnimation;

#endif