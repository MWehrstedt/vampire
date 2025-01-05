#include <jo/jo.h>
#include "vars.h"
#include "globalfunctions.h"
#include "display.h"
#include "levels.h"
#include "collision.h"
#include "hero.h"
#include "cd/MESHES/mesh_hero.h"
#include "cd/MESHES/mesh_sword.h"
#include "cd/MESHES/mesh_death.h"
#include "cd/ANIMS/anim_hero.h"
#include "cd/ANIMS/anim_death.h"
int count = 0;

void heroSetAnimation(hero_t *target, herostate_e id)
{

	target->counter = 0;
	target->currentKeyframe = 0;

	switch (id)
	{
	case JUMP:
		if (target->isFacingLeft)
			target->currentAnimation = &animationHeroJumpLeft;
		else
			target->currentAnimation = &animationHeroJump;
		break;
	case IDLE:
		if (target->isFacingLeft)
			target->currentAnimation = &animationHeroIdleLeft;
		else
			target->currentAnimation = &animationHeroIdle;
		break;
	case WALKING:
		if (target->isFacingLeft)
			target->currentAnimation = &animationHeroWalkLeft;
		else
			target->currentAnimation = &animationHeroWalk;
		break;
	case CROUCHING:
		if (target->isFacingLeft)
			target->currentAnimation = &animationHeroCrouchLeft;
		else
			target->currentAnimation = &animationHeroCrouch;
		break;
	default:
		break;
	}
}

void drawHeroAnimation2()
{

	animation_percent = jo_fixed_div(hero.counter - hero.currentAnimation->frames[hero.currentKeyframe].startframe, hero.currentAnimation->frames[hero.currentKeyframe].length);

	// sword animation;
	jo_3d_push_matrix();
	{
		jo_3d_translate_matrix_fixed(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].SWORD_translation[0],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].SWORD_translation[0],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].SWORD_translation[1],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].SWORD_translation[1],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].SWORD_translation[2],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].SWORD_translation[2],
											 animation_percent));

		jo_3d_rotate_matrix(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].SWORD_rotation[0],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].SWORD_rotation[0],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].SWORD_rotation[1],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].SWORD_rotation[1],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].SWORD_rotation[2],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].SWORD_rotation[2],
									animation_percent));

		display_SWORD_mesh();
	}
	jo_3d_pop_matrix();

	// right thigh animation;
	jo_3d_push_matrix();
	{
		jo_3d_translate_matrix_fixed(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_THIGH_translation[0],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_THIGH_translation[0],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_THIGH_translation[1],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_THIGH_translation[1],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_THIGH_translation[2],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_THIGH_translation[2],
											 animation_percent));

		jo_3d_rotate_matrix(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_THIGH_rotation[0],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_THIGH_rotation[0],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_THIGH_rotation[1],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_THIGH_rotation[1],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_THIGH_rotation[2],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_THIGH_rotation[2],
									animation_percent));

		display_R_THIGH_mesh();
	}
	jo_3d_pop_matrix();

	// right calf animation;
	jo_3d_push_matrix();
	{
		jo_3d_translate_matrix_fixed(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_CALF_translation[0],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_CALF_translation[0],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_CALF_translation[1],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_CALF_translation[1],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_CALF_translation[2],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_CALF_translation[2],
											 animation_percent));

		jo_3d_rotate_matrix(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_CALF_rotation[0],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_CALF_rotation[0],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_CALF_rotation[1],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_CALF_rotation[1],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_CALF_rotation[2],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_CALF_rotation[2],
									animation_percent));

		display_R_CALF_mesh();
	}
	jo_3d_pop_matrix();

	// left thigh animation;
	jo_3d_push_matrix();
	{
		jo_3d_translate_matrix_fixed(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_THIGH_translation[0],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_THIGH_translation[0],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_THIGH_translation[1],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_THIGH_translation[1],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_THIGH_translation[2],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_THIGH_translation[2],
											 animation_percent));

		jo_3d_rotate_matrix(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_THIGH_rotation[0],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_THIGH_rotation[0],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_THIGH_rotation[1],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_THIGH_rotation[1],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_THIGH_rotation[2],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_THIGH_rotation[2],
									animation_percent));

		display_L_THIGH_mesh();
	}
	jo_3d_pop_matrix();

	// left calf animation;
	jo_3d_push_matrix();
	{
		jo_3d_translate_matrix_fixed(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_CALF_translation[0],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_CALF_translation[0],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_CALF_translation[1],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_CALF_translation[1],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_CALF_translation[2],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_CALF_translation[2],
											 animation_percent));

		jo_3d_rotate_matrix(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_CALF_rotation[0],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_CALF_rotation[0],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_CALF_rotation[1],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_CALF_rotation[1],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_CALF_rotation[2],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_CALF_rotation[2],
									animation_percent));

		display_L_CALF_mesh();
	}
	jo_3d_pop_matrix();

	// right uarm animation;
	jo_3d_push_matrix();
	{
		jo_3d_translate_matrix_fixed(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_UARM_translation[0],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_UARM_translation[0],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_UARM_translation[1],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_UARM_translation[1],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_UARM_translation[2],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_UARM_translation[2],
											 animation_percent));

		jo_3d_rotate_matrix(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_UARM_rotation[0],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_UARM_rotation[0],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_UARM_rotation[1],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_UARM_rotation[1],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_UARM_rotation[2],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_UARM_rotation[2],
									animation_percent));

		display_R_UARM_mesh();
	}
	jo_3d_pop_matrix();

	// right farm animation;
	jo_3d_push_matrix();
	{
		jo_3d_translate_matrix_fixed(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_FARM_translation[0],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_FARM_translation[0],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_FARM_translation[1],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_FARM_translation[1],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_FARM_translation[2],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_FARM_translation[2],
											 animation_percent));

		jo_3d_rotate_matrix(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_FARM_rotation[0],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_FARM_rotation[0],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_FARM_rotation[1],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_FARM_rotation[1],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_FARM_rotation[2],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_FARM_rotation[2],
									animation_percent));

		display_R_FARM_mesh();
	}
	jo_3d_pop_matrix();

	// left UARM animation;
	jo_3d_push_matrix();
	{
		jo_3d_translate_matrix_fixed(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_UARM_translation[0],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_UARM_translation[0],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_UARM_translation[1],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_UARM_translation[1],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_UARM_translation[2],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_UARM_translation[2],
											 animation_percent));

		jo_3d_rotate_matrix(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_UARM_rotation[0],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_UARM_rotation[0],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_UARM_rotation[1],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_UARM_rotation[1],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_UARM_rotation[2],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_UARM_rotation[2],
									animation_percent));

		display_L_UARM_mesh();
	}
	jo_3d_pop_matrix();

	// left FARM animation;
	jo_3d_push_matrix();
	{
		jo_3d_translate_matrix_fixed(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_FARM_translation[0],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_FARM_translation[0],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_FARM_translation[1],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_FARM_translation[1],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_FARM_translation[2],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_FARM_translation[2],
											 animation_percent));

		jo_3d_rotate_matrix(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_FARM_rotation[0],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_FARM_rotation[0],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_FARM_rotation[1],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_FARM_rotation[1],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_FARM_rotation[2],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_FARM_rotation[2],
									animation_percent));

		display_L_FARM_mesh();
	}
	jo_3d_pop_matrix();

	// lower animation;
	jo_3d_push_matrix();
	{
		jo_3d_translate_matrix_fixed(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].LOWER_translation[0],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].LOWER_translation[0],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].LOWER_translation[1],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].LOWER_translation[1],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].LOWER_translation[2],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].LOWER_translation[2],
											 animation_percent));

		jo_3d_rotate_matrix(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].LOWER_rotation[0],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].LOWER_rotation[0],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].LOWER_rotation[1],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].LOWER_rotation[1],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].LOWER_rotation[2],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].LOWER_rotation[2],
									animation_percent));

		display_LOWER_mesh();
	}
	jo_3d_pop_matrix();

	// torso animation;
	jo_3d_push_matrix();
	{
		jo_3d_translate_matrix_fixed(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].TORSO_translation[0],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].TORSO_translation[0],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].TORSO_translation[1],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].TORSO_translation[1],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].TORSO_translation[2],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].TORSO_translation[2],
											 animation_percent));

		jo_3d_rotate_matrix(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].TORSO_rotation[0],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].TORSO_rotation[0],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].TORSO_rotation[1],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].TORSO_rotation[1],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].TORSO_rotation[2],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].TORSO_rotation[2],
									animation_percent));

		display_TORSO_mesh();
	}
	jo_3d_pop_matrix();

	// shoulder animation;
	jo_3d_push_matrix();
	{
		jo_3d_translate_matrix_fixed(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].SHOULDER_translation[0],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].SHOULDER_translation[0],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].SHOULDER_translation[1],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].SHOULDER_translation[1],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].SHOULDER_translation[2],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].SHOULDER_translation[2],
											 animation_percent));

		jo_3d_rotate_matrix(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].SHOULDER_rotation[0],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].SHOULDER_rotation[0],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].SHOULDER_rotation[1],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].SHOULDER_rotation[1],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].SHOULDER_rotation[2],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].SHOULDER_rotation[2],
									animation_percent));

		display_SHOULDER_mesh();
	}
	jo_3d_pop_matrix();

	// head animation;
	jo_3d_push_matrix();
	{
		jo_3d_translate_matrix_fixed(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].HEAD_translation[0],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].HEAD_translation[0],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].HEAD_translation[1],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].HEAD_translation[1],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].HEAD_translation[2],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].HEAD_translation[2],
											 animation_percent));

		jo_3d_rotate_matrix(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].HEAD_rotation[0],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].HEAD_rotation[0],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].HEAD_rotation[1],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].HEAD_rotation[1],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].HEAD_rotation[2],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].HEAD_rotation[2],
									animation_percent));

		display_HEAD_mesh();
	}
	jo_3d_pop_matrix();

	if (hero.currentAnimation->play)
	{
		hero.counter += JO_FIXED_1;
	}

	// Increase counter and check if we reached the last frame of the current keyframe
	if (hero.counter == (hero.currentAnimation->frames[hero.currentKeyframe].startframe + hero.currentAnimation->frames[hero.currentKeyframe].length))
	{
		// Increase the current keyframe
		hero.currentKeyframe++;
		// count++;
	}

	/* Check if we reached the last frame for the animation. If so, loop if animation is looped */
	if (hero.counter == hero.currentAnimation->length)
	{
		if (hero.currentAnimation->loop)
		{
			hero.counter = 0;
			hero.currentKeyframe = 0;
		}

		return;
	}
}

void drawDeathAnimation()
{

	animation_percent = jo_fixed_div(hero.counter - hero.currentAnimation->frames[hero.currentKeyframe].startframe, hero.currentAnimation->frames[hero.currentKeyframe].length);

	// right thigh animation;
	jo_3d_push_matrix();
	{
		jo_3d_translate_matrix_fixed(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_THIGH_translation[0],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_THIGH_translation[0],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_THIGH_translation[1],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_THIGH_translation[1],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_THIGH_translation[2],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_THIGH_translation[2],
											 animation_percent));

		jo_3d_rotate_matrix(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_THIGH_rotation[0],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_THIGH_rotation[0],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_THIGH_rotation[1],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_THIGH_rotation[1],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_THIGH_rotation[2],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_THIGH_rotation[2],
									animation_percent));

		display_DEATH_R_THIGH_mesh();
	}
	jo_3d_pop_matrix();

	// right calf animation;
	jo_3d_push_matrix();
	{
		jo_3d_translate_matrix_fixed(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_CALF_translation[0],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_CALF_translation[0],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_CALF_translation[1],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_CALF_translation[1],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_CALF_translation[2],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_CALF_translation[2],
											 animation_percent));

		jo_3d_rotate_matrix(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_CALF_rotation[0],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_CALF_rotation[0],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_CALF_rotation[1],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_CALF_rotation[1],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_CALF_rotation[2],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_CALF_rotation[2],
									animation_percent));

		display_DEATH_R_CALF_mesh();
	}
	jo_3d_pop_matrix();

	// left thigh animation;
	jo_3d_push_matrix();
	{
		jo_3d_translate_matrix_fixed(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_THIGH_translation[0],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_THIGH_translation[0],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_THIGH_translation[1],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_THIGH_translation[1],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_THIGH_translation[2],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_THIGH_translation[2],
											 animation_percent));

		jo_3d_rotate_matrix(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_THIGH_rotation[0],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_THIGH_rotation[0],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_THIGH_rotation[1],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_THIGH_rotation[1],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_THIGH_rotation[2],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_THIGH_rotation[2],
									animation_percent));

		display_DEATH_L_THIGH_mesh();
	}
	jo_3d_pop_matrix();

	// left calf animation;
	jo_3d_push_matrix();
	{
		jo_3d_translate_matrix_fixed(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_CALF_translation[0],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_CALF_translation[0],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_CALF_translation[1],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_CALF_translation[1],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_CALF_translation[2],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_CALF_translation[2],
											 animation_percent));

		jo_3d_rotate_matrix(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_CALF_rotation[0],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_CALF_rotation[0],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_CALF_rotation[1],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_CALF_rotation[1],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_CALF_rotation[2],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_CALF_rotation[2],
									animation_percent));

		display_DEATH_L_CALF_mesh();
	}
	jo_3d_pop_matrix();

	// right uarm animation;
	jo_3d_push_matrix();
	{
		jo_3d_translate_matrix_fixed(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_UARM_translation[0],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_UARM_translation[0],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_UARM_translation[1],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_UARM_translation[1],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_UARM_translation[2],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_UARM_translation[2],
											 animation_percent));

		jo_3d_rotate_matrix(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_UARM_rotation[0],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_UARM_rotation[0],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_UARM_rotation[1],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_UARM_rotation[1],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_UARM_rotation[2],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_UARM_rotation[2],
									animation_percent));

		display_DEATH_R_UARM_mesh();
	}
	jo_3d_pop_matrix();

	// right farm animation;
	jo_3d_push_matrix();
	{
		jo_3d_translate_matrix_fixed(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_FARM_translation[0],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_FARM_translation[0],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_FARM_translation[1],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_FARM_translation[1],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_FARM_translation[2],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_FARM_translation[2],
											 animation_percent));

		jo_3d_rotate_matrix(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_FARM_rotation[0],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_FARM_rotation[0],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_FARM_rotation[1],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_FARM_rotation[1],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].R_FARM_rotation[2],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].R_FARM_rotation[2],
									animation_percent));

		display_DEATH_R_FARM_mesh();
	}
	jo_3d_pop_matrix();

	// left UARM animation;
	jo_3d_push_matrix();
	{
		jo_3d_translate_matrix_fixed(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_UARM_translation[0],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_UARM_translation[0],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_UARM_translation[1],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_UARM_translation[1],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_UARM_translation[2],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_UARM_translation[2],
											 animation_percent));

		jo_3d_rotate_matrix(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_UARM_rotation[0],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_UARM_rotation[0],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_UARM_rotation[1],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_UARM_rotation[1],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_UARM_rotation[2],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_UARM_rotation[2],
									animation_percent));

		display_DEATH_L_UARM_mesh();
	}
	jo_3d_pop_matrix();

	// left FARM animation;
	jo_3d_push_matrix();
	{
		jo_3d_translate_matrix_fixed(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_FARM_translation[0],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_FARM_translation[0],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_FARM_translation[1],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_FARM_translation[1],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_FARM_translation[2],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_FARM_translation[2],
											 animation_percent));

		jo_3d_rotate_matrix(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_FARM_rotation[0],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_FARM_rotation[0],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_FARM_rotation[1],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_FARM_rotation[1],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].L_FARM_rotation[2],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].L_FARM_rotation[2],
									animation_percent));

		display_DEATH_L_FARM_mesh();
	}
	jo_3d_pop_matrix();

	// lower animation;
	jo_3d_push_matrix();
	{
		jo_3d_translate_matrix_fixed(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].LOWER_translation[0],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].LOWER_translation[0],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].LOWER_translation[1],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].LOWER_translation[1],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].LOWER_translation[2],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].LOWER_translation[2],
											 animation_percent));

		jo_3d_rotate_matrix(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].LOWER_rotation[0],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].LOWER_rotation[0],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].LOWER_rotation[1],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].LOWER_rotation[1],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].LOWER_rotation[2],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].LOWER_rotation[2],
									animation_percent));

		display_DEATH_LOWER_mesh();
	}
	jo_3d_pop_matrix();

	// torso animation;
	jo_3d_push_matrix();
	{
		jo_3d_translate_matrix_fixed(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].TORSO_translation[0],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].TORSO_translation[0],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].TORSO_translation[1],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].TORSO_translation[1],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].TORSO_translation[2],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].TORSO_translation[2],
											 animation_percent));

		jo_3d_rotate_matrix(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].TORSO_rotation[0],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].TORSO_rotation[0],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].TORSO_rotation[1],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].TORSO_rotation[1],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].TORSO_rotation[2],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].TORSO_rotation[2],
									animation_percent));

		display_DEATH_TORSO_mesh();
	}
	jo_3d_pop_matrix();

	// shoulder animation;
	jo_3d_push_matrix();
	{
		jo_3d_translate_matrix_fixed(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].SHOULDER_translation[0],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].SHOULDER_translation[0],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].SHOULDER_translation[1],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].SHOULDER_translation[1],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].SHOULDER_translation[2],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].SHOULDER_translation[2],
											 animation_percent));

		jo_3d_rotate_matrix(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].SHOULDER_rotation[0],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].SHOULDER_rotation[0],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].SHOULDER_rotation[1],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].SHOULDER_rotation[1],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].SHOULDER_rotation[2],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].SHOULDER_rotation[2],
									animation_percent));

		display_DEATH_SHOULDER_mesh();
	}
	jo_3d_pop_matrix();

	// head animation;
	jo_3d_push_matrix();
	{
		jo_3d_translate_matrix_fixed(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].HEAD_translation[0],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].HEAD_translation[0],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].HEAD_translation[1],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].HEAD_translation[1],
											 animation_percent),
									 jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].HEAD_translation[2],
											 hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].HEAD_translation[2],
											 animation_percent));

		jo_3d_rotate_matrix(jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].HEAD_rotation[0],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].HEAD_rotation[0],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].HEAD_rotation[1],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].HEAD_rotation[1],
									animation_percent),
							jo_lerp(hero.currentAnimation->frames[hero.currentKeyframe].HEAD_rotation[2],
									hero.currentAnimation->frames[hero.currentKeyframe == hero.currentAnimation->numberKeyframes ? hero.currentKeyframe : hero.currentKeyframe + 1].HEAD_rotation[2],
									animation_percent));

		display_DEATH_HEAD_mesh();
	}
	jo_3d_pop_matrix();

	if (hero.currentAnimation->play)
	{
		hero.counter += JO_FIXED_1;
	}

	// Increase counter and check if we reached the last frame of the current keyframe
	if (hero.counter == (hero.currentAnimation->frames[hero.currentKeyframe].startframe + hero.currentAnimation->frames[hero.currentKeyframe].length))
	{
		// Increase the current keyframe
		hero.currentKeyframe++;
		count++;
	}

	/* Check if we reached the last frame for the animation. If so, loop if animation is looped */
	if (hero.counter == hero.currentAnimation->length)
	{
		if (hero.currentAnimation->loop)
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

		drawHeroAnimation2();
		// display_Sword_mesh();
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
		// jo_printf(0, 8, "Keyframe length :  %d    ", jo_fixed2int(hero.currentAnimation->frames[hero.currentKeyframe].length));
		// jo_printf(0, 9, "Keyframe start frame :  %d     ", jo_fixed2int(hero.currentAnimation->frames[hero.currentKeyframe].startframe));
		// jo_printf(0, 10, "Keyframe end frame :  %d     ", jo_fixed2int(hero.currentAnimation->frames[hero.currentKeyframe].startframe + hero.currentAnimation->frames[hero.currentKeyframe].length));
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

		// if (tempSolid)
		// {
		//     drawDeathAnimation();
		// }
		// else
		{
			drawHeroAnimation2();
			//     display_Sword_mesh();
		}
	}
	jo_3d_pop_matrix();

	jo_printf(0, 3, "Animation :  %d - %d - %d", hero.currentAnimation->id, hero.currentAnimation->loop, hero.currentAnimation->play);
	jo_printf(0, 4, "Counter :  %d / %d - %d - %d", hero.counter, hero.currentAnimation->length, jo_fixed2int(jo_fixed_mult(animation_percent, toFIXED(100))));
	jo_printf(0, 5, "Keyframe:  %d - %d - %d   ",
			  hero.currentKeyframe,
			  jo_fixed2int(hero.currentAnimation->frames[hero.currentKeyframe].startframe),
			  jo_fixed2int(hero.currentAnimation->frames[hero.currentKeyframe].startframe + hero.currentAnimation->frames[hero.currentKeyframe].length));
}

void initGameplayCamera()
{
	camera.x = JO_FIXED_0;
	camera.y = toFIXED(-5);
	camera.z = toFIXED(-30);

	jo_3d_camera_init(&camera.cam);
	jo_3d_camera_set_viewpoint(&camera.cam, 0, -5, -30);
	jo_3d_camera_set_target(&camera.cam, 0, 0, 0);

	// init level geometry
	level1.display_geometry = level1Geometry;

	// init hero animation
	// hero.currentAnimation = &anim_hero_walk;
}

void initBackgroundGfx(short levelId)
{

	jo_sprite_add_tga("TEX", "HERFNET.TGA", JO_COLOR_Transparent);
	jo_sprite_add_tga("TEX", "HERTAT.TGA", JO_COLOR_Transparent);

	jo_sprite_add_image_pack("TEX", "TILES1.TEX", JO_COLOR_Red);

	// imageHUDSWeaponOne = jo_sprite_add_tga("TEX", "SWEAPH.TGA", JO_COLOR_Transparent);
	// imageHUDSWeaponTwo = jo_sprite_add_tga("TEX", "SWEAPA.TGA", JO_COLOR_Transparent);
	// imageHUDSWeaponThree = jo_sprite_add_tga("TEX", "SWEAPK.TGA", JO_COLOR_Transparent);

	imageHUDBackgroundId = jo_sprite_add_tga("TEX", "HUDBG.TGA", JO_COLOR_Transparent);
	imageHUDFillId = jo_sprite_add_tga("TEX", "HUDFIL.TGA", JO_COLOR_Transparent);

	jo_sprite_add_tga("TEX", "L1WOO.TGA", JO_COLOR_Transparent);

	jo_map_load_from_file(0, 0, "MAP", "LVL1.MAP");

	if (gamestate != ANIMTEST)
	{
		// Draw map to NBG1 on VPD2
		jo_map_draw_background(0, 0, 0);
	}
	else
	{
		hero.currentAnimation = &animationHeroWalk;
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