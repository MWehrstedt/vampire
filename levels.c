#include <jo/jo.h>
#include "globalFunctions.h"
#include "collision.h"
#include "vars.h"
#include "levels.h"

void initLevel(short levelId)
{
    initActiveEnemies();

    switch (levelId)
    {
    case 0:
        currentLevel = &level1;
        currentLevelHitboxes = level01Hitboxes;
        initDynamicHitboxes(level01DynamicHitboxes);
        currentLevelEnemies = enemiesListLevel1;
        break;
    }
}

void initActiveEnemies()
{
    for (iterator = 0; iterator < 6; ++iterator)
    {
        currentActiveEnemies[iterator].active = false;
        currentActiveEnemies[iterator].health = 0;
        currentActiveEnemies[iterator].draw = JO_NULL;
        currentActiveEnemies[iterator].update = JO_NULL;
        currentActiveEnemies[iterator].x = JO_FIXED_0;
        currentActiveEnemies[iterator].y = JO_FIXED_0;
    }
}

bool spawnEnemy(short idx)
{
    // find empty slot
    for (iterator2 = 0; iterator2 < 6; ++iterator2)
    {
        if (!currentActiveEnemies[iterator2].active)
        {
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
            return true;
        }
    }

    return false;
}

void destroyEnemy(short idx)
{
    currentActiveEnemies[idx].active = false;
}

void updateEnemies()
{
    for (iterator = 0; iterator < 6; ++iterator)
    {
        if (currentActiveEnemies[iterator].active)
        {
            currentActiveEnemies[iterator].update(iterator);
        }
    }
}