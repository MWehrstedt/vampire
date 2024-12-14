#include <jo/jo.h>
#include "vars.h"
// #include "levels.h"

camera_t camera;
gamestate_e gamestate;
herostate_e herostate;
gravity_t gravity = {
    .step = toFIXED(0.3f),
    .max = toFIXED(5)};
collision_t collision;
int iterator;
bool tempSolid = true;

FIXED animation_percent;

jo_img backgroundImage;

level_t level1 = {
    .currentChunk = 0,
    //.display_geometry = level1Geometry,
    .chunks = 2
};

const hitbox_t* currentLevelHitboxes;
dynamic_hitbox_t* currentLevelDynamicHitboxes;

level_t* currentLevel;