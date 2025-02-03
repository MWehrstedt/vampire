#include <jo/jo.h>
#include "globalFunctions.h"
#include "collision.h"
#include "vars.h"
#include "levels.h"

void levels_initLevel(short levelId)
{
    levels_initActiveEnemies();

    switch (levelId)
    {
    case 0:
        currentLevel = &level1;
        currentLevelHitboxes = level01Hitboxes;
        global_initDynamicHitboxes(level01DynamicHitboxes);
        currentLevelEnemies = enemiesListLevel1;
        break;
    }
}

void levels_initActiveEnemies()
{
    for (iterator = 0; iterator < ENEMY_MAX_NUMBER; ++iterator)
    {
        currentActiveEnemies[iterator].active = false;
        currentActiveEnemies[iterator].health = 0;
        currentActiveEnemies[iterator].draw = JO_NULL;
        currentActiveEnemies[iterator].update = JO_NULL;
        currentActiveEnemies[iterator].x = JO_FIXED_0;
        currentActiveEnemies[iterator].y = JO_FIXED_0;
    }
}

bool global_spawnEnemy(short idx)
{
    // find empty slot
    for (iterator2 = 0; iterator2 < ENEMY_MAX_NUMBER; ++iterator2)
    {
        if (!currentActiveEnemies[iterator2].active)
        {
            // TODO: Find enemy spawn point, typically right off screen
            // Make it more dynamic depending on enemy type
            currentActiveEnemies[iterator2].active = true;
            currentActiveEnemies[iterator2].x = currentLevelEnemies[idx].x;
            currentActiveEnemies[iterator2].y = currentLevelEnemies[idx].y;
            currentActiveEnemies[iterator2].hitbox = currentLevelEnemies[idx].hitbox;
            currentActiveEnemies[iterator2].isFacingLeft = currentLevelEnemies[idx].isFacingLeft;
            currentActiveEnemies[iterator2].type = currentLevelEnemies[idx].type;
            currentActiveEnemies[iterator2].health = currentLevelEnemies[idx].health;
            currentActiveEnemies[iterator2].update = currentLevelEnemies[idx].update;
            currentActiveEnemies[iterator2].draw = currentLevelEnemies[idx].draw;
            currentActiveEnemies[iterator2].state = E_NORMAL;
            currentActiveEnemies[iterator2].hitboxId = currentLevelEnemies[idx].hitboxId;
            return true;
        }
    }

    return false;
}

void global_destroyEnemy(short idx)
{
    currentLevelDynamicHitboxes[currentActiveEnemies[idx].hitboxId].active = true;
    currentActiveEnemies[idx].active = false;
}

void global_updateEnemies()
{
    for (iterator = 0; iterator < ENEMY_MAX_NUMBER; ++iterator)
    {
        if (currentActiveEnemies[iterator].active)
        {
            currentActiveEnemies[iterator].update(iterator);
        }
    }
}