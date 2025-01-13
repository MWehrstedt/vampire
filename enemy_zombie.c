#include <jo/jo.h>
#include "enemy_zombie.h"
#include "types.h"
#include "vars.h"
#include "cd/MESHES/Sonic.h"

void drawZombie(short idx)
{
    //jo_printf(5, 7 + idx, "%d ; %d ; %d ", jo_fixed2int(currentActiveEnemies[idx].x), jo_fixed2int(currentActiveEnemies[idx].y), 5);

    jo_3d_push_matrix();
    {
        jo_3d_translate_matrix_fixed(currentActiveEnemies[idx].x, currentActiveEnemies[idx].y, 5);
        display_HEADD_mesh();
    }
    jo_3d_pop_matrix();
}

void updateZombie(short idx)
{
    currentActiveEnemies[idx].hitbox.x = currentActiveEnemies[idx].x - toFIXED(7.5f);
    currentActiveEnemies[idx].hitbox.y = currentActiveEnemies[idx].y - toFIXED(15.0f);
}