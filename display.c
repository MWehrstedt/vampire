#include <jo/jo.h>
#include "vars.h"
#include "display.h"
#include "levels.h"
#include "collision.h"
#include "hero.h"
// #include "cd/MESHES/Sonic.h"
#include "cd/MESHES/mesh_hero.h"
#include "cd/ANIMS/anim_hero.h"
int count = 0;

void drawHeroAnimation()
{
    // jo_3d_translate_matrix_fixed(hero.x, hero.y, hero.z);

    animation_percent = jo_fixed_div(hero.counter - anim_hero.frames[hero.currentKeyframe].startframe, anim_hero_frames[hero.currentKeyframe].length);

    // right calf animation;
    jo_3d_push_matrix();
    {
        jo_3d_translate_matrix_fixed(jo_lerp(anim_hero.frames[hero.currentKeyframe].R_CALF_baseTranslation[0], anim_hero.frames[hero.currentKeyframe].R_CALF_translation[0], animation_percent),
                                     jo_lerp(anim_hero.frames[hero.currentKeyframe].R_CALF_baseTranslation[1], anim_hero.frames[hero.currentKeyframe].R_CALF_translation[1], animation_percent),
                                     jo_lerp(anim_hero.frames[hero.currentKeyframe].R_CALF_baseTranslation[2], anim_hero.frames[hero.currentKeyframe].R_CALF_translation[2], animation_percent));

        jo_3d_rotate_matrix(jo_lerp(anim_hero.frames[hero.currentKeyframe].R_CALF_baseRotation[0], anim_hero.frames[hero.currentKeyframe].R_CALF_rotation[0], animation_percent),
                            jo_lerp(anim_hero.frames[hero.currentKeyframe].R_CALF_baseRotation[1], anim_hero.frames[hero.currentKeyframe].R_CALF_rotation[1], animation_percent),
                            jo_lerp(anim_hero.frames[hero.currentKeyframe].R_CALF_baseRotation[2], anim_hero.frames[hero.currentKeyframe].R_CALF_rotation[2], animation_percent));

        display_R_CALF_mesh();
    }
    jo_3d_pop_matrix();

    // right thigh animation;
    jo_3d_push_matrix();
    {

        jo_3d_translate_matrix_fixed(jo_lerp(anim_hero.frames[hero.currentKeyframe].R_THIGH_baseTranslation[0], anim_hero.frames[hero.currentKeyframe].R_THIGH_translation[0], animation_percent),
                                     jo_lerp(anim_hero.frames[hero.currentKeyframe].R_THIGH_baseTranslation[1], anim_hero.frames[hero.currentKeyframe].R_THIGH_translation[1], animation_percent),
                                     jo_lerp(anim_hero.frames[hero.currentKeyframe].R_THIGH_baseTranslation[2], anim_hero.frames[hero.currentKeyframe].R_THIGH_translation[2], animation_percent));

        jo_3d_rotate_matrix(jo_lerp(anim_hero.frames[hero.currentKeyframe].R_THIGH_baseRotation[0], anim_hero.frames[hero.currentKeyframe].R_THIGH_rotation[0], animation_percent),
                            jo_lerp(anim_hero.frames[hero.currentKeyframe].R_THIGH_baseRotation[1], anim_hero.frames[hero.currentKeyframe].R_THIGH_rotation[1], animation_percent),
                            jo_lerp(anim_hero.frames[hero.currentKeyframe].R_THIGH_baseRotation[2], anim_hero.frames[hero.currentKeyframe].R_THIGH_rotation[2], animation_percent));

        display_R_THIGH_mesh();
    }
    jo_3d_pop_matrix();

    // left calf animation;
    jo_3d_push_matrix();
    {
        jo_3d_translate_matrix_fixed(jo_lerp(anim_hero.frames[hero.currentKeyframe].L_CALF_baseTranslation[0], anim_hero.frames[hero.currentKeyframe].L_CALF_translation[0], animation_percent),
                                     jo_lerp(anim_hero.frames[hero.currentKeyframe].L_CALF_baseTranslation[1], anim_hero.frames[hero.currentKeyframe].L_CALF_translation[1], animation_percent),
                                     jo_lerp(anim_hero.frames[hero.currentKeyframe].L_CALF_baseTranslation[2], anim_hero.frames[hero.currentKeyframe].L_CALF_translation[2], animation_percent));

        jo_3d_rotate_matrix(jo_lerp(anim_hero.frames[hero.currentKeyframe].L_CALF_baseRotation[0], anim_hero.frames[hero.currentKeyframe].L_CALF_rotation[0], animation_percent),
                            jo_lerp(anim_hero.frames[hero.currentKeyframe].L_CALF_baseRotation[1], anim_hero.frames[hero.currentKeyframe].L_CALF_rotation[1], animation_percent),
                            jo_lerp(anim_hero.frames[hero.currentKeyframe].L_CALF_baseRotation[2], anim_hero.frames[hero.currentKeyframe].L_CALF_rotation[2], animation_percent));

        display_L_CALF_mesh();
    }
    jo_3d_pop_matrix();

    // left thigh animation;
    jo_3d_push_matrix();
    {
        jo_3d_translate_matrix_fixed(jo_lerp(anim_hero.frames[hero.currentKeyframe].L_THIGH_baseTranslation[0], anim_hero.frames[hero.currentKeyframe].L_THIGH_translation[0], animation_percent),
                                     jo_lerp(anim_hero.frames[hero.currentKeyframe].L_THIGH_baseTranslation[1], anim_hero.frames[hero.currentKeyframe].L_THIGH_translation[1], animation_percent),
                                     jo_lerp(anim_hero.frames[hero.currentKeyframe].L_THIGH_baseTranslation[2], anim_hero.frames[hero.currentKeyframe].L_THIGH_translation[2], animation_percent));

        jo_3d_rotate_matrix(jo_lerp(anim_hero.frames[hero.currentKeyframe].L_THIGH_baseRotation[0], anim_hero.frames[hero.currentKeyframe].L_THIGH_rotation[0], animation_percent),
                            jo_lerp(anim_hero.frames[hero.currentKeyframe].L_THIGH_baseRotation[1], anim_hero.frames[hero.currentKeyframe].L_THIGH_rotation[1], animation_percent),
                            jo_lerp(anim_hero.frames[hero.currentKeyframe].L_THIGH_baseRotation[2], anim_hero.frames[hero.currentKeyframe].L_THIGH_rotation[2], animation_percent));

        display_L_THIGH_mesh();
    }
    jo_3d_pop_matrix();

    // right farm animation;
    jo_3d_push_matrix();
    {
        jo_3d_translate_matrix_fixed(jo_lerp(anim_hero.frames[hero.currentKeyframe].R_FARM_baseTranslation[0], anim_hero.frames[hero.currentKeyframe].R_FARM_translation[0], animation_percent),
                                     jo_lerp(anim_hero.frames[hero.currentKeyframe].R_FARM_baseTranslation[1], anim_hero.frames[hero.currentKeyframe].R_FARM_translation[1], animation_percent),
                                     jo_lerp(anim_hero.frames[hero.currentKeyframe].R_FARM_baseTranslation[2], anim_hero.frames[hero.currentKeyframe].R_FARM_translation[2], animation_percent));

        jo_3d_rotate_matrix(jo_lerp(anim_hero.frames[hero.currentKeyframe].R_FARM_baseRotation[0], anim_hero.frames[hero.currentKeyframe].R_FARM_rotation[0], animation_percent),
                            jo_lerp(anim_hero.frames[hero.currentKeyframe].R_FARM_baseRotation[1], anim_hero.frames[hero.currentKeyframe].R_FARM_rotation[1], animation_percent),
                            jo_lerp(anim_hero.frames[hero.currentKeyframe].R_FARM_baseRotation[2], anim_hero.frames[hero.currentKeyframe].R_FARM_rotation[2], animation_percent));

        display_R_FARM_mesh();
    }
    jo_3d_pop_matrix();

    // right uarm animation;
    jo_3d_push_matrix();
    {
        jo_3d_translate_matrix_fixed(jo_lerp(anim_hero.frames[hero.currentKeyframe].R_UARM_baseTranslation[0], anim_hero.frames[hero.currentKeyframe].R_UARM_translation[0], animation_percent),
                                     jo_lerp(anim_hero.frames[hero.currentKeyframe].R_UARM_baseTranslation[1], anim_hero.frames[hero.currentKeyframe].R_UARM_translation[1], animation_percent),
                                     jo_lerp(anim_hero.frames[hero.currentKeyframe].R_UARM_baseTranslation[2], anim_hero.frames[hero.currentKeyframe].R_UARM_translation[2], animation_percent));

        jo_3d_rotate_matrix(jo_lerp(anim_hero.frames[hero.currentKeyframe].R_UARM_baseRotation[0], anim_hero.frames[hero.currentKeyframe].R_UARM_rotation[0], animation_percent),
                            jo_lerp(anim_hero.frames[hero.currentKeyframe].R_UARM_baseRotation[1], anim_hero.frames[hero.currentKeyframe].R_UARM_rotation[1], animation_percent),
                            jo_lerp(anim_hero.frames[hero.currentKeyframe].R_UARM_baseRotation[2], anim_hero.frames[hero.currentKeyframe].R_UARM_rotation[2], animation_percent));

        display_R_UARM_mesh();
    }
    jo_3d_pop_matrix();

    // left farm animation;
    jo_3d_push_matrix();
    {
        jo_3d_translate_matrix_fixed(jo_lerp(anim_hero.frames[hero.currentKeyframe].L_FARM_baseTranslation[0], anim_hero.frames[hero.currentKeyframe].L_FARM_translation[0], animation_percent),
                                     jo_lerp(anim_hero.frames[hero.currentKeyframe].L_FARM_baseTranslation[1], anim_hero.frames[hero.currentKeyframe].L_FARM_translation[1], animation_percent),
                                     jo_lerp(anim_hero.frames[hero.currentKeyframe].L_FARM_baseTranslation[2], anim_hero.frames[hero.currentKeyframe].L_FARM_translation[2], animation_percent));

        jo_3d_rotate_matrix(jo_lerp(anim_hero.frames[hero.currentKeyframe].L_FARM_baseRotation[0], anim_hero.frames[hero.currentKeyframe].L_FARM_rotation[0], animation_percent),
                            jo_lerp(anim_hero.frames[hero.currentKeyframe].L_FARM_baseRotation[1], anim_hero.frames[hero.currentKeyframe].L_FARM_rotation[1], animation_percent),
                            jo_lerp(anim_hero.frames[hero.currentKeyframe].L_FARM_baseRotation[2], anim_hero.frames[hero.currentKeyframe].L_FARM_rotation[2], animation_percent));

        display_L_FARM_mesh();
    }
    jo_3d_pop_matrix();

    // left uarm animation;
    jo_3d_push_matrix();
    {

        jo_3d_translate_matrix_fixed(jo_lerp(anim_hero.frames[hero.currentKeyframe].L_UARM_baseTranslation[0], anim_hero.frames[hero.currentKeyframe].L_UARM_translation[0], animation_percent),
                                     jo_lerp(anim_hero.frames[hero.currentKeyframe].L_UARM_baseTranslation[1], anim_hero.frames[hero.currentKeyframe].L_UARM_translation[1], animation_percent),
                                     jo_lerp(anim_hero.frames[hero.currentKeyframe].L_UARM_baseTranslation[2], anim_hero.frames[hero.currentKeyframe].L_UARM_translation[2], animation_percent));

        jo_3d_rotate_matrix(jo_lerp(anim_hero.frames[hero.currentKeyframe].L_UARM_baseRotation[0], anim_hero.frames[hero.currentKeyframe].L_UARM_rotation[0], animation_percent),
                            jo_lerp(anim_hero.frames[hero.currentKeyframe].L_UARM_baseRotation[1], anim_hero.frames[hero.currentKeyframe].L_UARM_rotation[1], animation_percent),
                            jo_lerp(anim_hero.frames[hero.currentKeyframe].L_UARM_baseRotation[2], anim_hero.frames[hero.currentKeyframe].L_UARM_rotation[2], animation_percent));

        display_L_UARM_mesh();
    }
    jo_3d_pop_matrix();

    // lower animation;
    jo_3d_push_matrix();
    {
        jo_3d_translate_matrix_fixed(jo_lerp(anim_hero.frames[hero.currentKeyframe].LOWER_baseTranslation[0], anim_hero.frames[hero.currentKeyframe].LOWER_translation[0], animation_percent),
                                     jo_lerp(anim_hero.frames[hero.currentKeyframe].LOWER_baseTranslation[1], anim_hero.frames[hero.currentKeyframe].LOWER_translation[1], animation_percent),
                                     jo_lerp(anim_hero.frames[hero.currentKeyframe].LOWER_baseTranslation[2], anim_hero.frames[hero.currentKeyframe].LOWER_translation[2], animation_percent));

        jo_3d_rotate_matrix(jo_lerp(anim_hero.frames[hero.currentKeyframe].LOWER_baseRotation[0], anim_hero.frames[hero.currentKeyframe].LOWER_rotation[0], animation_percent),
                            jo_lerp(anim_hero.frames[hero.currentKeyframe].LOWER_baseRotation[1], anim_hero.frames[hero.currentKeyframe].LOWER_rotation[1], animation_percent),
                            jo_lerp(anim_hero.frames[hero.currentKeyframe].LOWER_baseRotation[2], anim_hero.frames[hero.currentKeyframe].LOWER_rotation[2], animation_percent));

        display_LOWER_mesh();
    }
    jo_3d_pop_matrix();

    // torso animation;
    jo_3d_push_matrix();
    {
        jo_3d_translate_matrix_fixed(jo_lerp(anim_hero.frames[hero.currentKeyframe].TORSO_baseTranslation[0], anim_hero.frames[hero.currentKeyframe].TORSO_translation[0], animation_percent),
                                     jo_lerp(anim_hero.frames[hero.currentKeyframe].TORSO_baseTranslation[1], anim_hero.frames[hero.currentKeyframe].TORSO_translation[1], animation_percent),
                                     jo_lerp(anim_hero.frames[hero.currentKeyframe].TORSO_baseTranslation[2], anim_hero.frames[hero.currentKeyframe].TORSO_translation[2], animation_percent));

        jo_3d_rotate_matrix(jo_lerp(anim_hero.frames[hero.currentKeyframe].TORSO_baseRotation[0], anim_hero.frames[hero.currentKeyframe].TORSO_rotation[0], animation_percent),
                            jo_lerp(anim_hero.frames[hero.currentKeyframe].TORSO_baseRotation[1], anim_hero.frames[hero.currentKeyframe].TORSO_rotation[1], animation_percent),
                            jo_lerp(anim_hero.frames[hero.currentKeyframe].TORSO_baseRotation[2], anim_hero.frames[hero.currentKeyframe].TORSO_rotation[2], animation_percent));

        display_TORSO_mesh();
    }
    jo_3d_pop_matrix();

    // shoulder animation;
    jo_3d_push_matrix();
    {

        jo_3d_translate_matrix_fixed(jo_lerp(anim_hero.frames[hero.currentKeyframe].SHOULDER_baseTranslation[0], anim_hero.frames[hero.currentKeyframe].SHOULDER_translation[0], animation_percent),
                                     jo_lerp(anim_hero.frames[hero.currentKeyframe].SHOULDER_baseTranslation[1], anim_hero.frames[hero.currentKeyframe].SHOULDER_translation[1], animation_percent),
                                     jo_lerp(anim_hero.frames[hero.currentKeyframe].SHOULDER_baseTranslation[2], anim_hero.frames[hero.currentKeyframe].SHOULDER_translation[2], animation_percent));

        jo_3d_rotate_matrix(jo_lerp(anim_hero.frames[hero.currentKeyframe].SHOULDER_baseRotation[0], anim_hero.frames[hero.currentKeyframe].SHOULDER_rotation[0], animation_percent),
                            jo_lerp(anim_hero.frames[hero.currentKeyframe].SHOULDER_baseRotation[1], anim_hero.frames[hero.currentKeyframe].SHOULDER_rotation[1], animation_percent),
                            jo_lerp(anim_hero.frames[hero.currentKeyframe].SHOULDER_baseRotation[2], anim_hero.frames[hero.currentKeyframe].SHOULDER_rotation[2], animation_percent));

        display_SHOULDER_mesh();
    }
    jo_3d_pop_matrix();

    // head animation;
    jo_3d_push_matrix();
    {
        jo_3d_translate_matrix_fixed(jo_lerp(anim_hero.frames[hero.currentKeyframe].HEAD_baseTranslation[0], anim_hero.frames[hero.currentKeyframe].HEAD_translation[0], animation_percent),
                                     jo_lerp(anim_hero.frames[hero.currentKeyframe].HEAD_baseTranslation[1], anim_hero.frames[hero.currentKeyframe].HEAD_translation[1], animation_percent),
                                     jo_lerp(anim_hero.frames[hero.currentKeyframe].HEAD_baseTranslation[2], anim_hero.frames[hero.currentKeyframe].HEAD_translation[2], animation_percent));

        jo_3d_rotate_matrix(jo_lerp(anim_hero.frames[hero.currentKeyframe].HEAD_baseRotation[0], anim_hero.frames[hero.currentKeyframe].HEAD_rotation[0], animation_percent),
                            jo_lerp(anim_hero.frames[hero.currentKeyframe].HEAD_baseRotation[1], anim_hero.frames[hero.currentKeyframe].HEAD_rotation[1], animation_percent),
                            jo_lerp(anim_hero.frames[hero.currentKeyframe].HEAD_baseRotation[2], anim_hero.frames[hero.currentKeyframe].HEAD_rotation[2], animation_percent));

        display_HEAD_mesh();
    }

    jo_3d_pop_matrix();

    if (anim_hero.play)
    {
        hero.counter += JO_FIXED_1;
    }

    // Increase counter and check if we reached the last frame of the current keyframe
    if (hero.counter == (anim_hero.frames[hero.currentKeyframe].startframe + anim_hero.frames[hero.currentKeyframe].length))
    {
        // Increase the current keyframe
        hero.currentKeyframe++;
        count++;
    }

    /* Check if we reached the last frame for the animation. If so, loop if animation is looped */
    if (hero.counter == anim_hero.length)
    {
        if (anim_hero.loop)
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

        drawHeroAnimation();
    }
    jo_3d_pop_matrix();

    // draw HUD
    jo_sprite_draw3D2(imageHUDBackgroundId, 12, 14, 40);

    jo_map_draw(1, 0, 0);

    for (iterator = 0; iterator < hero.health; iterator++)
    {
        jo_sprite_draw3D2(imageHUDFillId, HUD_HEALTH_OFFSET_X + (iterator * 9), HUD_HEALTH_OFFSET_Y, 30);
    }

    // jo_sprite_draw3D2(imageHUDSWeaponOne, HUD_SWEAPON_ONE_X, HUD_HEALTH_OFFSET_Y, 30);
    // jo_sprite_draw3D2(imageHUDSWeaponTwo, HUD_SWEAPON_ONE_Y, HUD_HEALTH_OFFSET_Y, 30);
    // jo_sprite_draw3D2(imageHUDSWeaponThree, HUD_SWEAPON_ONE_Z, HUD_HEALTH_OFFSET_Y, 30);

    if (printDebug)
    {
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
        // jo_printf(0, 6, "Animation length :  %d", jo_fixed2int(anim_hero.length));
        // jo_printf(0, 8, "Keyframe length :  %d    ", jo_fixed2int(anim_hero.frames[hero.currentKeyframe].length));
        // jo_printf(0, 9, "Keyframe start frame :  %d     ", jo_fixed2int(anim_hero.frames[hero.currentKeyframe].startframe));
        // jo_printf(0, 10, "Keyframe end frame :  %d     ", jo_fixed2int(anim_hero.frames[hero.currentKeyframe].startframe + anim_hero.frames[hero.currentKeyframe].length));
        // jo_printf(0, 11, "pc :  %d    ", count);
        // jo_printf(0, 12, "Animation percent :  %d     ", jo_fixed2int(jo_fixed_mult(animation_percent, toFIXED(100))));
    }
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

void drawMainMenu()
{
    jo_printf(0, 3, "                         ");
    jo_printf(0, 4, "    PROJECT BFS          ");
    jo_printf(0, 5, "                         ");

    if (currentSelection == 0)
    {
        jo_printf(0, 6, "   > GAMEPLAY        ");
    }
    else
    {
        jo_printf(0, 6, "     GAMEPLAY        ");
    }

    if (currentSelection == 1)
    {
        jo_printf(0, 7, "   > ANIMATION TEST      ");
    }
    else
    {
        jo_printf(0, 7, "     ANIMATION TEST  ");
    }
    jo_printf(0, 8, "                         ");
    jo_printf(0, 9, "                         ");
}

void drawAnimtest()
{
    jo_3d_camera_look_at(&camera.cam);

    jo_3d_push_matrix();
    {
        jo_3d_translate_matrix_fixed(-camera.x, -camera.y, -camera.z);

        // Draw hero model

        jo_3d_translate_matrix_fixed(hero.x, hero.y, hero.z);
        jo_3d_rotate_matrix(0, hero.rotationY, hero.rotationZ);

        if (tempSolid)
        {
            drawHeroAnimation();
        }
        else
        {
            display_HEAD_mesh();
            display_R_UARM_mesh();
            display_R_FARM_mesh();
            display_L_UARM_mesh();
            display_L_FARM_mesh();
            display_L_THIGH_mesh();
            display_L_CALF_mesh();
            display_R_THIGH_mesh();
            display_R_CALF_mesh();
            display_TORSO_mesh();
            display_SHOULDER_mesh();
            display_LOWER_mesh();
        }
    }
    jo_3d_pop_matrix();

    jo_printf(0, 3, "Position :  %d ; %d ; %d ", jo_fixed2int(hero.x), jo_fixed2int(hero.y), jo_fixed2int(hero.z));
    jo_printf(0, 4, "Rotation :  %d ; %d ; %d ", hero.rotationX, hero.rotationY, hero.rotationZ);
    jo_printf(0, 5, "Camera :  %d ; %d : %d    ", jo_fixed2int(camera.x), jo_fixed2int(camera.y), jo_fixed2int(camera.z));
    jo_printf(0, 6, "TempSolid :  %d", tempSolid);
    // jo_printf(0, 8, "Keyframe length :  %d    ", jo_fixed2int(anim_hero.frames[hero.currentKeyframe].length));
    // jo_printf(0, 9, "Keyframe start frame :  %d     ", jo_fixed2int(anim_hero.frames[hero.currentKeyframe].startframe));
    // jo_printf(0, 10, "Keyframe end frame :  %d     ", jo_fixed2int(anim_hero.frames[hero.currentKeyframe].startframe + anim_hero.frames[hero.currentKeyframe].length));
    // jo_printf(0, 11, "pc :  %d    ", count);
    // jo_printf(0, 12, "Animation percent :  %d     ", jo_fixed2int(jo_fixed_mult(animation_percent, toFIXED(100))));
}

void initGameplayCamera()
{
    camera.x = JO_FIXED_0;
    camera.y = toFIXED(-5);
    camera.z = toFIXED(-35);

    jo_3d_camera_init(&camera.cam);
    jo_3d_camera_set_viewpoint(&camera.cam, 0, -5, -35);
    jo_3d_camera_set_target(&camera.cam, 0, 0, 0);

    // init level geometry
    level1.display_geometry = level1Geometry;
}

void initBackgroundGfx(short levelId)
{
    // Old, slow, whole background image for level
    // backgroundImage.data = JO_NULL;
    // Load images into memory
    // jo_tga_loader(&backgroundImage, "BG", "BGL1.TGA", JO_COLOR_Transparent);
    // Set image as background
    // jo_set_background_sprite(&backgroundImage, 0, 0);
    // Free memory
    // jo_free_img(&backgroundImage);

    jo_sprite_add_tga("TEX", "HERFNET.TGA", JO_COLOR_Transparent);
    jo_sprite_add_tga("TEX", "HERCOR.TGA", JO_COLOR_Transparent);
    jo_sprite_add_image_pack("TEX", "TILES1.TEX", JO_COLOR_Red);

    // jo_sprite_add_tga("TEX", "EGGFACE.TGA", JO_COLOR_Transparent);
    // jo_sprite_add_tga("TEX", "EGGSMILE.TGA", JO_COLOR_Transparent);
    // jo_sprite_add_tga("TEX", "EGGSHIP.TGA", JO_COLOR_Purple);

    // imageHUDSWeaponOne = jo_sprite_add_tga("TEX", "SWEAPH.TGA", JO_COLOR_Transparent);
    // imageHUDSWeaponTwo = jo_sprite_add_tga("TEX", "SWEAPA.TGA", JO_COLOR_Transparent);
    // imageHUDSWeaponThree = jo_sprite_add_tga("TEX", "SWEAPK.TGA", JO_COLOR_Transparent);

    imageHUDBackgroundId = jo_sprite_add_tga("TEX", "HUDBG.TGA", JO_COLOR_Transparent);
    imageHUDFillId = jo_sprite_add_tga("TEX", "HUDFIL.TGA", JO_COLOR_Transparent);

    jo_map_load_from_file(0, 0, "MAP", "LVL1.MAP");

    if (gamestate != ANIMTEST)
    {
        // Draw map to NBG1 on VPD2
        jo_map_draw_background(0, 0, 0);
    }
}

void draw(void)
{
    switch (gamestate)
    {
    case MAINMENU:
        drawMainMenu();
        break;
    case GAMEPLAY:
        drawGameplay();
        break;
    case PAUSED:
        drawPaused();
        break;
    case ANIMTEST:
        drawAnimtest();
        break;

    default:
        break;
    }
}