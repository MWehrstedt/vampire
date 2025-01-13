#ifndef __LEVELS_H__
#define __LEVELS_H__

#include "types.h"
#include "vars.h"
#include "enemy_zombie.h"

static const enemy_t enemiesListLevel1[] = {
    {
        .type = ENEMY_TYPE_ZOMBIE,
        .x = toFIXED(339.9f),
        .y = toFIXED(-20.10f),
        .draw = &drawZombie,
        .update = &updateZombie,
        .hitbox = (hitbox_t){
            .x = toFIXED(322.37f),
            .y = toFIXED(-27.57f),
            .width = toFIXED(14.97f),
            .height = toFIXED(29.04f),
        },
    },
};

void initActiveEnemies();
void initLevel(short levelId);

#endif