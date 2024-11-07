#include <jo/jo.h>
#include "collision.h"
#include "display.h"
#include "hero.h"
#include "vars.h"
#include "cd/MESHES/level.h"
#include "cd/MESHES/robotnik.h"
int count = 0;

void drawGameplay()
{
    jo_3d_camera_look_at(&camera.cam);

    jo_3d_push_matrix();
    {
        jo_3d_translate_matrix_fixed(-camera.x, -camera.y, -camera.z);

        display_Cube_mesh();
        display_CubeSmall_mesh();
        display_CubeLeft_mesh();
        display_CubeSmallLeft_mesh();

        // Draw robotnik
        
        jo_3d_translate_matrix_fixed(hero.x, hero.y, hero.z);
        jo_3d_rotate_matrix(0, hero.rotationY, hero.rotationZ);

        display_robotnik_mesh();
    }
    jo_3d_pop_matrix();

    jo_printf(0, 1, "RCounter :  %d", rc);
    jo_printf(0, 2, "LCounter :  %d", pc);
    jo_printf(0, 3, "Position :  %d ; %d ; %d ", jo_fixed2int(hero.x), jo_fixed2int(hero.y), jo_fixed2int(hero.z));
    jo_printf(0, 4, "camera :  %d ; %d ; %d ", jo_fixed2int(camera.x), jo_fixed2int(camera.y), jo_fixed2int(camera.z));
    jo_printf(0, 5, "isGrounded :  %d  ", hero.isGrounded);
    jo_printf(0, 8, "hitbox :  %d ; %d ; %d ", jo_fixed2int(hero.hitbox.x), jo_fixed2int(hero.hitbox.y), jo_fixed2int(hero.hitbox.z));
    jo_printf(0, 9, "speedX :  %d ", jo_fixed2int(hero.speedX));
}

void drawPaused()
{
    jo_printf(0, 3, "                         ");
    jo_printf(0, 4, "                         ");
    jo_printf(0, 5, "    --- PAUSED ---       ");
    jo_printf(0, 6, "                         ");
    jo_printf(0, 7, "                         ");
    jo_printf(0, 8, "                         ");
    jo_printf(0, 9, "                         ");
}

void initGameplayCamera()
{

    camera.x = JO_FIXED_0;
    camera.y = toFIXED(-8);
    camera.z = toFIXED(-25);

    jo_3d_camera_init(&camera.cam);
    jo_3d_camera_set_viewpoint(&camera.cam, 0, -8, -33);
    jo_3d_camera_set_target(&camera.cam, 0, 0, 0);
}

void draw(void)
{
    switch (gamestate)
    {
    case GAMEPLAY:
        drawGameplay();
        break;
    case PAUSED:
        drawPaused();
        break;
    default:
        break;
    }
}