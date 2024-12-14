#include <jo/jo.h>
#include "vars.h"
#include "display.h"
#include "levels.h"
#include "collision.h"
#include "hero.h"
#include "cd/MESHES/Sonic.h"
#include "cd/ANIMS/anim_sample.h"
int count = 0;

void drawHeroAnimation()
{
    jo_3d_translate_matrix_fixed(hero.x, hero.y, hero.z);

    animation_percent = jo_fixed_div(hero.counter - anim_sample.frames[hero.currentKeyframe].startframe, anim_sample_frames[hero.currentKeyframe].length);

    jo_3d_push_matrix();
    {
        // display_Cube_mesh();
        jo_3d_rotate_matrix(jo_lerp(anim_sample.frames[hero.currentKeyframe].baseRotation[0], anim_sample.frames[hero.currentKeyframe].rotation[0], animation_percent),
                            jo_lerp(anim_sample.frames[hero.currentKeyframe].baseRotation[1], anim_sample.frames[hero.currentKeyframe].rotation[1], animation_percent),
                            jo_lerp(anim_sample.frames[hero.currentKeyframe].baseRotation[2], anim_sample.frames[hero.currentKeyframe].rotation[2], animation_percent));

        jo_3d_translate_matrix_fixed(jo_lerp(anim_sample.frames[hero.currentKeyframe].baseTranslation[0], anim_sample.frames[hero.currentKeyframe].translation[0], animation_percent),
                                     jo_lerp(anim_sample.frames[hero.currentKeyframe].baseTranslation[1], anim_sample.frames[hero.currentKeyframe].translation[1], animation_percent),
                                     jo_lerp(anim_sample.frames[hero.currentKeyframe].baseTranslation[2], anim_sample.frames[hero.currentKeyframe].translation[2], animation_percent));

        display_HEADD_mesh();
    }
    jo_3d_pop_matrix();

    if (anim_sample.play)
    {
        hero.counter += JO_FIXED_1;
    }

    // Increase counter and check if we reached the last frame of the current keyframe
    if (hero.counter == (anim_sample.frames[hero.currentKeyframe].startframe + anim_sample.frames[hero.currentKeyframe].length))
    {
        // Increase the current keyframe
        hero.currentKeyframe++;
        count++;
    }

    /* Check if we reached the last frame for the animation. If so, loop if animation is looped */
    if (hero.counter == anim_sample.length)
    {
        if (anim_sample.loop)
        {
            hero.counter = JO_FIXED_0;
            hero.currentKeyframe = JO_FIXED_0;
        }

        return;
    }
}

void drawGameplay()
{
    jo_3d_camera_look_at(&camera.cam);

    jo_3d_push_matrix();
    {
        jo_3d_translate_matrix_fixed(-camera.x, -camera.y, -camera.z);

        // drawHeroAnimation();

        currentLevel->display_geometry[currentLevel->currentChunk]();

        // Draw sonic

        jo_3d_translate_matrix_fixed(hero.x, hero.y, hero.z);
        jo_3d_rotate_matrix(0, hero.rotationY, hero.rotationZ);

        display_ARM_mesh();
        display_BELLY_mesh();
        display_HEADD_mesh();
        display_L_FOO_mesh();
        display_L_LEG_mesh();
        display_L_THI_mesh();
        display_L_UAR_mesh();
        display_R_ARM_mesh();
        display_R_FOO_mesh();
        display_R_LEG_mesh();
        display_R_THI_mesh();
        display_R_UAR_mesh();
    }
    jo_3d_pop_matrix();

    jo_printf(0, 3, "Position :  %d ; %d ; %d ", jo_fixed2int(hero.x), jo_fixed2int(hero.y), jo_fixed2int(hero.z));
    jo_printf(0, 4, "camera :  %d ; %d ; %d ", jo_fixed2int(camera.x), jo_fixed2int(camera.y), jo_fixed2int(camera.z));
    jo_printf(0, 5, "isGrounded :  %d  ", hero.isGrounded);
    jo_printf(0, 8, "hitbox :  %d ; %d ; %d ", jo_fixed2int(hero.hitbox.x), jo_fixed2int(hero.hitbox.y), jo_fixed2int(hero.hitbox.z));
    jo_printf(0, 9, "speedX :  %d ", jo_fixed2int(hero.speedX));

    jo_printf(0, 11, "current Chunk :  %d ", currentLevel->currentChunk);
    jo_printf(0, 12, "chunks :  %d ", currentLevel->chunks);
    jo_printf(0, 13, "tempSolid :  %d ", tempSolid ? 1 : 0);

    // jo_printf(0, 3, "Position :  %d ; %d ; %d ", jo_fixed2int(hero.x), jo_fixed2int(hero.y), jo_fixed2int(hero.z));
    // jo_printf(0, 4, "Current keyframe :  %d     ", hero.currentKeyframe);
    // jo_printf(0, 5, "Counter :  %d    ", jo_fixed2int(hero.counter));
    // jo_printf(0, 6, "Animation length :  %d", jo_fixed2int(anim_sample.length));
    // jo_printf(0, 8, "Keyframe length :  %d    ", jo_fixed2int(anim_sample.frames[hero.currentKeyframe].length));
    // jo_printf(0, 9, "Keyframe start frame :  %d     ", jo_fixed2int(anim_sample.frames[hero.currentKeyframe].startframe));
    // jo_printf(0, 10, "Keyframe end frame :  %d     ", jo_fixed2int(anim_sample.frames[hero.currentKeyframe].startframe + anim_sample.frames[hero.currentKeyframe].length));
    // jo_printf(0, 11, "pc :  %d    ", count);
    // jo_printf(0, 12, "Animation percent :  %d     ", jo_fixed2int(jo_fixed_mult(animation_percent, toFIXED(100))));
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
    camera.z = toFIXED(-40);

    jo_3d_camera_init(&camera.cam);
    jo_3d_camera_set_viewpoint(&camera.cam, 0, -8, -33);
    jo_3d_camera_set_target(&camera.cam, 0, 0, 0);

    // init level geometry
    level1.display_geometry = level1Geometry;
}

void initBackgroundGfx(short levelId)
{
    backgroundImage.data = JO_NULL;
    // Load image into memory
    jo_tga_loader(&backgroundImage, "BG", "BGL1.TGA", JO_COLOR_Transparent);

    // Set image as background
    jo_set_background_sprite(&backgroundImage, 0, 0);

    // Free memory
    jo_free_img(&backgroundImage);
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