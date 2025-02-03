#include <jo/jo.h>
#include "enemy_zombie.h"
#include "globalFunctions.h"
#include "types.h"
#include "vars.h"
#include "collision.h"
#include "cd/MESHES/Sonic.h"

void drawZombie(short idx)
{
    if (currentActiveEnemies[idx].state == E_DYING)
    {
        return;
    }

    jo_3d_push_matrix();
    {
        jo_3d_translate_matrix_fixed(currentActiveEnemies[idx].x, currentActiveEnemies[idx].y, 5);
        display_HEADD_mesh();
    }
    jo_3d_pop_matrix();
}

void updateZombie(short idx)
{
    switch (currentActiveEnemies[idx].state)
    {
    case E_NORMAL:
        if (hero.sword.active)
        {
            collision = (collision_t){
                .x = collisions_detectCollisionX(hero.sword.x, hero.sword.y, hero.sword.width, hero.sword.height, currentActiveEnemies[idx].hitbox.x, currentActiveEnemies[iterator].hitbox.y, currentActiveEnemies[iterator].hitbox.width, currentActiveEnemies[idx].hitbox.height),
                .y = collisions_detectCollisionY(hero.sword.x, hero.sword.y, hero.sword.width, hero.sword.height, currentActiveEnemies[idx].hitbox.x, currentActiveEnemies[iterator].hitbox.y, currentActiveEnemies[iterator].hitbox.width, currentActiveEnemies[idx].hitbox.height)};

            if (collision.x != JO_FIXED_0 || collision.y != JO_FIXED_0)
            {
                currentActiveEnemies[idx].state = E_DYING;
                currentActiveEnemies[idx].respawnCounter = 100;
                return;
            }
        }

        currentActiveEnemies[idx].hitbox.x = currentActiveEnemies[idx].x - toFIXED(7.5f);
        currentActiveEnemies[idx].hitbox.y = currentActiveEnemies[idx].y - toFIXED(15.0f);
        break;
    case E_DYING:
        if (!--(currentActiveEnemies[idx].respawnCounter))
        {
            global_destroyEnemy(idx);
        }
        break;
    }
}