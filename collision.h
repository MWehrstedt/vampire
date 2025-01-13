#ifndef __COLLISION_H__
#define __COLLISION_H__
#include "vars.h"
#include "types.h"

// static level hitboxes
static const hitbox_t level01Hitboxes[13] = {
    // Chk 1
    (hitbox_t){.x = toFIXED(-400.36f), .y = toFIXED(-1.0f), .width = toFIXED(373.43f), .height = toFIXED(37.57f), .type = HITBOX_TYPE_SOLID},
    (hitbox_t){.x = toFIXED(-155.07f), .y = toFIXED(-27.4f), .width = toFIXED(70.7f), .height = toFIXED(26.4f), .type = HITBOX_TYPE_SOLID},
    (hitbox_t){.x = toFIXED(-27.38f), .y = toFIXED(21.7f), .width = toFIXED(112.83f), .height = toFIXED(26.3f), .type = HITBOX_TYPE_SOLID},
    // Chk 2
    (hitbox_t){.x = toFIXED(80.0f), .y = toFIXED(-1.0f), .width = toFIXED(590.43f), .height = toFIXED(38.64f), .type = HITBOX_TYPE_SOLID},
    (hitbox_t){.x = toFIXED(178.65f), .y = toFIXED(-30.18f), .width = toFIXED(31.64f), .height = toFIXED(8.5f), .type = HITBOX_TYPE_SEMISOLID},
    (hitbox_t){.x = toFIXED(231.9f), .y = toFIXED(-54.12f), .width = toFIXED(68.66f), .height = toFIXED(21.3f), .type = HITBOX_TYPE_SOLID},
    (hitbox_t){.x = toFIXED(330.6f), .y = toFIXED(-54.12f), .width = toFIXED(68.66f), .height = toFIXED(21.3f), .type = HITBOX_TYPE_SOLID},

    // Chk 3
    (hitbox_t){.x = toFIXED(430.34f), .y = toFIXED(-179.0f), .width = toFIXED(50.0f), .height = toFIXED(139.73f), .type = HITBOX_TYPE_SOLID},
    (hitbox_t){.x = toFIXED(602.93f), .y = toFIXED(-118.55f), .width = toFIXED(68.02f), .height = toFIXED(118.55f), .type = HITBOX_TYPE_SOLID},

    (hitbox_t){.x = toFIXED(570.85f), .y = toFIXED(-30.18f), .width = toFIXED(31.64f), .height = toFIXED(8.512f), .type = HITBOX_TYPE_SEMISOLID},
    (hitbox_t){.x = toFIXED(570.85f), .y = toFIXED(-59.84f), .width = toFIXED(31.64f), .height = toFIXED(8.512f), .type = HITBOX_TYPE_SEMISOLID},
    (hitbox_t){.x = toFIXED(570.85f), .y = toFIXED(-87.24f), .width = toFIXED(31.64f), .height = toFIXED(8.512f), .type = HITBOX_TYPE_SEMISOLID},
    (hitbox_t){.x = toFIXED(570.85f), .y = toFIXED(-118.55f), .width = toFIXED(31.64f), .height = toFIXED(8.512f), .type = HITBOX_TYPE_SEMISOLID},

};

// dynamic level hitboxes
static const dynamic_hitbox_t level01DynamicHitboxes[5] = {
    (dynamic_hitbox_t){.x = toFIXED(-26.92f), .y = toFIXED(-1.0f), .width = toFIXED(112.83f), .height = toFIXED(26.3f), .type = DYNAMIC_HITBOX_TYPE_TEMP_SOLID, .active = true},
    (dynamic_hitbox_t){.x = toFIXED(430.34f), .y = toFIXED(-39.27f), .width = toFIXED(50.0f), .height = toFIXED(45.0f), .type = DYNAMIC_HITBOX_TYPE_TEMP_SOLID, .active = true},
    (dynamic_hitbox_t){.x = toFIXED(10.0f), .y = toFIXED(-250.0f), .width = toFIXED(10.0f), .height = toFIXED(500.0f), .type = DYNAMIC_HITBOX_TYPE_TEMP_CHUNK, .attribute = 1, .active = true},
    (dynamic_hitbox_t){.x = toFIXED(453.0f), .y = toFIXED(-250.0f), .width = toFIXED(10.0f), .height = toFIXED(500.0f), .type = DYNAMIC_HITBOX_TYPE_TEMP_CHUNK, .attribute = 2, .active = true},
    (dynamic_hitbox_t){.x = toFIXED(278.53), .y = toFIXED(-83.56f), .width = toFIXED(106.69f), .height = toFIXED(85.0f), .type = DYNAMIC_HITBOX_TYPE_ENEMYSPAWNER, .attribute = 0, .active = true},
};

FIXED detectCollisionX(const FIXED x1, const FIXED y1, const FIXED width1, const FIXED height1, const FIXED x2, const FIXED y2, const FIXED width2, const FIXED height2);
FIXED detectCollisionY(const FIXED x1, const FIXED y1, const FIXED width1, const FIXED height1, const FIXED x2, const FIXED y2, const FIXED width2, const FIXED height2);
#endif