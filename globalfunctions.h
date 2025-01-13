#ifndef __GLOBALFUNCTIONS_H__
#define __GLOBALFUNCTIONS_H__v
#include "types.h"

void heroSetAnimation(hero_t *target, herostate_e id);
void initDynamicHitboxes(const dynamic_hitbox_t *source);
void initHero();
bool spawnEnemy(short idx);
void destroyEnemy(short idx);
void updateEnemies();
#endif