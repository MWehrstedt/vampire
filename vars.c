#include <jo/jo.h>
#include "vars.h"

/**
 * Helpers
 */
collision_t collision;

int iterator;
short temp;
bool tempSolid = false;
bool printDebug = true;
herostate_e oldHerostate;
bool oldDirection;

/**
 * Graphics and visuals
 */
camera_t camera;
FIXED animation_percent;
jo_img backgroundImage;

int imageHUDBackgroundId;
int imageHUDFillId;
int imageHUDSWeaponOne;
int imageHUDSWeaponTwo;
int imageHUDSWeaponThree;

/**
 * Gameplay and character management
 */
gamestate_e gamestate;
herostate_e herostate;
gravity_t gravity = {
    .step = toFIXED(0.15f),
    .max = toFIXED(5)};

const hitbox_t *currentLevelHitboxes;
dynamic_hitbox_t *currentLevelDynamicHitboxes;

/**
 * Levels
 */

level_t *currentLevel;
level_t level1 = {
    .currentChunk = 0,
    //.display_geometry = level1Geometry,
    .chunks = 3,
    .hitboxCount = 13,
    .dynamicHitboxCount = 4,
    .boundaryLeft = toFIXED(-270),
    .boundaryBottom = toFIXED(0),
    .boundaryTop = toFIXED(-120),
    .boundaryRight = toFIXED(560)};

/**
 * Menus and options
 */

short currentSelection = 0;