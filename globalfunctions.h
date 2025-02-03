#ifndef __GLOBALFUNCTIONS_H__
#define __GLOBALFUNCTIONS_H__v
#include "types.h"

/// @brief Set playable hero animation
/// @param target Hero instance
/// @param id New animation Id
void global_SetHeroAnimation(hero_t *target, herostate_e id);

/// @brief Initialize dynamic hitboxes
/// @param source Dynamic hitbox list
void global_initDynamicHitboxes(const dynamic_hitbox_t *source);

/// @brief Initialize hero
void global_initHero();

/// @brief Initialize main menu. Also creates font palette
void global_initMainMenu();

/// @brief Transfer enemy from enemy list to an active enemy slot if an empty slot is found.
/// @param idx Index in current level enemies list
/// @return *true* if enemy could be spawned, false if no empty slot was available
bool global_spawnEnemy(short idx);

/// @brief Deactivates an enemy and frees up the enemy slot
/// @param idx Index in enemy slots
void global_destroyEnemy(short idx);

/// @brief Calls every active enemy update routine
void global_updateEnemies();

/// @brief Print text with the custom font
/// @param message Text to print
/// @param x X position
/// @param y Y position
/// @param z Z position
void global_printText(const char *message, const int x, const int y, const int z);
#endif