#ifndef __COLLISION_H__
#define __COLLISION_H__
#include "vars.h"
#include "types.h"

// static level hitboxes
static const hitbox_t level01Hitboxes[5] = {
    (hitbox_t){ .x = toFIXED(29.73f), .y = toFIXED(-1.0f), .width = toFIXED(373.43f), .height = toFIXED(37.57f), .type = HITBOX_TYPE_SOLID},
    (hitbox_t){ .x = toFIXED(275.0f), .y = toFIXED(-27.4f), .width = toFIXED(70.7f), .height = toFIXED(26.4f), .type = HITBOX_TYPE_SOLID},
    (hitbox_t){ .x = toFIXED(400.0f), .y = toFIXED(21.7f), .width = toFIXED(112.83f), .height = toFIXED(26.3f), .type = HITBOX_TYPE_SOLID},
    (hitbox_t){ .x = toFIXED(510.15f), .y = toFIXED(-1.0f), .width = toFIXED(373.43f), .height = toFIXED(38.64f), .type = HITBOX_TYPE_SOLID},
    (hitbox_t){ .x = toFIXED(608.73f), .y = toFIXED(-30.18f), .width = toFIXED(62.56f), .height = toFIXED(8.5f), .type = HITBOX_TYPE_SEMISOLID}
};

// dynamic level hitboxes
static dynamic_hitbox_t level01DynamicHitboxes[2] = {
    (dynamic_hitbox_t){ .x = toFIXED(400.0f), .y = toFIXED(-1.0f), .width = toFIXED(112.83f), .height = toFIXED(26.3f), .type = DYNAMIC_HITBOX_TYPE_TEMP_SOLID},
    (dynamic_hitbox_t){ .x = toFIXED(880.0f), .y = toFIXED(-50.4f), .width = toFIXED(10.0f), .height = toFIXED(100.0f), .type = DYNAMIC_HITBOX_TYPE_TEMP_SOLID}
};

FIXED detectCollisionX(const FIXED x1, const FIXED y1, const FIXED width1, const FIXED height1, const FIXED x2, const FIXED y2, const FIXED width2, const FIXED height2);
FIXED detectCollisionY(const FIXED x1, const FIXED y1, const FIXED width1, const FIXED height1, const FIXED x2, const FIXED y2, const FIXED width2, const FIXED height2);
FIXED detectCollision(const FIXED speedX, const FIXED speedY, const FIXED x1, const FIXED y1, const FIXED width1, const FIXED height1, const FIXED x2, const FIXED y2, const FIXED width2, const FIXED height2);
#endif