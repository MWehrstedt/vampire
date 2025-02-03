#include <jo/jo.h>
#include <jo/vdp2.h>
#include "vars.h"
#include "globalFunctions.h"
#include "display.h"
#include "levels.h"
#include "collision.h"
#include "hero.h"
#include "cd/MESHES/meshHero.h"
#include "cd/MESHES/meshSword.h"
#include "cd/MESHES/meshDeath.h"
#include "cd/ANIMS/animationsHero.h"
#include "cd/ANIMS/animationsDeath.h"

jo_palette hudPalette;
jo_palette bgPalette;
jo_palette fontPalette;

void global_SetHeroAnimation(hero_t *target, herostate_e id)
{

	target->animationCounter = 0;
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
	case HIT:
		if (target->isFacingLeft)
			target->currentAnimation = &animationHeroHitLeft;
		else
			target->currentAnimation = &animationHeroHit;
		break;
	case ATTACK:
		if (target->isFacingLeft)
			target->currentAnimation = &animationHeroAttackLeft;
		else
			target->currentAnimation = &animationHeroAttack;
		break;
	default:
		break;
	}

	target->playAnimation = target->currentAnimation->play;
}

void global_printText(const char *message, const int x, const int y, const int z)
{
	for (iteratorText = 0; iteratorText < jo_strlen(message); iteratorText++)
	{
		if (message[iteratorText] == 45)
		{
			textSpriteOffset = 0;
		}
		else if (message[iteratorText] >= 48 && message[iteratorText] <= 57)
		{
			textSpriteOffset = message[iteratorText] - 48;
		}
		else if (message[iteratorText] == 60)
		{
			textSpriteOffset = 11;
		}
		else if (message[iteratorText] == 62)
		{
			textSpriteOffset = 12;
		}
		else if (message[iteratorText] >= 65 && message[iteratorText] < 97)
		{
			textSpriteOffset = message[iteratorText] - 52;
		}
		else if (message[iteratorText] >= 97)
		{
			textSpriteOffset = message[iteratorText] - 58;
		}

		if (message[iteratorText] != 32)
		{
			jo_sprite_draw3D2(imageTextCharacters + textSpriteOffset, x + (iteratorText * 8), y, z);
		}
	}
}

void display_drawHeroAnimation()
{

	if (!hero.invulnerability || hero.invulnerability % 8 > 4)
	{
		animation_percent = jo_fixed_div(hero.animationCounter - hero.currentAnimation->frames[hero.currentKeyframe].startframe, hero.currentAnimation->frames[hero.currentKeyframe].length);

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
	}

	if (hero.playAnimation)
	{

		hero.animationCounter += JO_FIXED_1;

		/* Check if we reached the last frame for the animation. If so, loop if animation is looped */
		if (hero.animationCounter == hero.currentAnimation->length)
		{
			if (hero.currentAnimation->loop)
			{
				hero.animationCounter = 0;
				hero.currentKeyframe = 0;
				return;
			}
			else
			{
				hero.playAnimation = false;
				return;
			}
		}

		// Increase animationCounter and check if we reached the last frame of the current keyframe
		if (hero.animationCounter == (hero.currentAnimation->frames[hero.currentKeyframe].startframe + hero.currentAnimation->frames[hero.currentKeyframe].length))
		{
			// Increase the current keyframe
			hero.currentKeyframe++;
		}
	}
}

void drawDeathAnimation()
{

	animation_percent = jo_fixed_div(hero.animationCounter - hero.currentAnimation->frames[hero.currentKeyframe].startframe, hero.currentAnimation->frames[hero.currentKeyframe].length);

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

	if (hero.playAnimation)
	{
		hero.animationCounter += JO_FIXED_1;
	}

	// Increase animationCounter and check if we reached the last frame of the current keyframe
	if (hero.animationCounter == (hero.currentAnimation->frames[hero.currentKeyframe].startframe + hero.currentAnimation->frames[hero.currentKeyframe].length))
	{
		// Increase the current keyframe
		hero.currentKeyframe++;
	}

	/* Check if we reached the last frame for the animation. If so, loop if animation is looped */
	if (hero.animationCounter == hero.currentAnimation->length)
	{
		if (hero.currentAnimation->loop)
		{
			hero.animationCounter = JO_FIXED_0;
			hero.currentKeyframe = JO_FIXED_0;
		}

		return;
	}
}

void display_drawGameplay()
{
	jo_3d_camera_look_at(&camera.cam);

	jo_sprite_set_palette(hudPalette.id);

	jo_3d_push_matrix();
	{
		jo_3d_translate_matrix_fixed(-camera.x, -camera.y, -camera.z);
		currentLevel->display_geometry[currentLevel->currentChunk]();

		// Draw hero
		jo_3d_push_matrix();
		{
			jo_3d_translate_matrix_fixed(hero.x, hero.y, hero.z);
			display_drawHeroAnimation();
		}
		jo_3d_pop_matrix();

		// Draw enemies
		for (iterator = 0; iterator < ENEMY_MAX_NUMBER; ++iterator)
		{
			if (currentActiveEnemies[iterator].active)
			{
				currentActiveEnemies[iterator].draw(iterator);
			}
		}
	}
	jo_3d_pop_matrix();

	// Draw HUD on SPR0 because jo
	jo_sprite_draw3D2(imageHUDBackgroundId, 12, 14, 40);

	for (iterator = 0; iterator < hero.health; iterator++)
	{
		jo_sprite_draw3D2(imageHUDFillId, HUD_HEALTH_OFFSET_X + (iterator * 15), HUD_HEALTH_OFFSET_Y, 30);
	}

	jo_sprite_draw3D2(imageHUDSWeaponOne, HUD_SWEAPON_ONE_X, HUD_SWEAPON_OFFSETY, 30);
	// jo_sprite_draw3D2(imageHUDSWeaponTwo, HUD_SWEAPON_ONE_Y, HUD_HEALTH_OFFSET_Y, 30);
	// jo_sprite_draw3D2(imageHUDSWeaponThree, HUD_SWEAPON_ONE_Z, HUD_HEALTH_OFFSET_Y, 30);


}

void drawPaused()
{
	jo_3d_camera_look_at(&camera.cam);

	jo_3d_push_matrix();
	{
		jo_3d_translate_matrix_fixed(-camera.x, -camera.y, -camera.z);

		currentLevel->display_geometry[currentLevel->currentChunk]();

		jo_sprite_set_palette(fontPalette.id);
		global_printText("PAUSE", 120, 80, 300);
	}
	jo_3d_pop_matrix();
}

void drawMainMenu()
{
	jo_sprite_set_palette(fontPalette.id);

	global_printText("PROJECT BFS", 116, 54, 300);

	if (currentSelection == 0)
	{
		global_printText("<    GAMEPLAY    >", 91, 116, 300);
		global_printText("  ANIMATION TEST  ", 91, 140, 300);
	}
	else if (currentSelection == 1)
	{
		global_printText("     GAMEPLAY     ", 91, 116, 300);
		global_printText("< ANIMATION TEST >", 91, 140, 300);
	}

	global_printText("ab - cd - ef", 100, 200, 300);
}

void drawAnimtest()
{
	jo_3d_camera_look_at(&camera.cam);

	jo_3d_push_matrix();
	{
		jo_3d_translate_matrix_fixed(-camera.x, -camera.y, -camera.z);

		// Draw current model
		jo_3d_translate_matrix_fixed(hero.x, hero.y, hero.z);

		if (animTestCurrentCharacter == 0)
		{
			display_drawHeroAnimation();
		}
		else if (animTestCurrentCharacter == 1)
		{
			drawDeathAnimation();
		}
	}
	jo_3d_pop_matrix();

	// jo_printf(0, 3, "Animation :  %d - %d - %d     ", hero.currentAnimation->id, hero.currentAnimation->loop, hero.playAnimation);
	// //jo_printf(0, 4, "Counter :  %d / %d - %d      ",
	// 		  jo_fixed2int(hero.animationCounter),
	// 		  jo_fixed2int(hero.currentAnimation->length),
	// 		  jo_fixed2int(jo_fixed_mult(animation_percent, toFIXED(100))));
	// //jo_printf(0, 5, "Keyframe:  %d - %d - %d      ",
	// 		  hero.currentKeyframe,
	// 		  jo_fixed2int(hero.currentAnimation->frames[hero.currentKeyframe].startframe),
	// 		  jo_fixed2int(hero.currentAnimation->frames[hero.currentKeyframe].startframe + hero.currentAnimation->frames[hero.currentKeyframe].length));
	// //jo_printf(0, 6, "Palette:  %d      ", palette.id);
}

void display_initGameplayCamera()
{
	camera.x = JO_FIXED_0;
	camera.y = toFIXED(0);
	camera.z = toFIXED(-30);

	jo_3d_camera_init(&camera.cam);
	jo_3d_camera_set_viewpoint(&camera.cam, 0, 0, -30);
	jo_3d_camera_set_target(&camera.cam, 0, 0, 0);

	// init level geometry
	level1.display_geometry = level1Geometry;
}

void initGameplayPalette()
{
	jo_set_tga_palette_handling(JO_NULL);

	// Sprite palettes
	jo_create_palette(&hudPalette);
	hudPalette.data[0] = JO_COLOR_RGB(247, 105, 208);
	hudPalette.data[1] = JO_COLOR_RGB(64, 64, 64);
	hudPalette.data[2] = JO_COLOR_RGB(56, 56, 56);
	hudPalette.data[3] = JO_COLOR_RGB(211, 88, 0);
	hudPalette.data[4] = JO_COLOR_RGB(21, 11, 107);

	hudPalette.data[5] = JO_COLOR_RGB(246, 121, 0);
	hudPalette.data[6] = JO_COLOR_RGB(255, 255, 255);
	hudPalette.data[7] = JO_COLOR_RGB(181, 181, 181);
	hudPalette.data[8] = JO_COLOR_RGB(219, 219, 219);

	hudPalette.data[9] = JO_COLOR_RGB(158, 158, 158);
	hudPalette.data[10] = JO_COLOR_RGB(0, 0, 0);
	hudPalette.data[11] = JO_COLOR_RGB(255, 221, 199);
	hudPalette.data[12] = JO_COLOR_RGB(239, 81, 81);
	hudPalette.data[13] = JO_COLOR_RGB(239, 1, 1);

	hudPalette.data[14] = JO_COLOR_RGB(77, 157, 255);
	hudPalette.data[15] = JO_COLOR_RGB(210, 215, 255);
	hudPalette.data[16] = JO_COLOR_RGB(32, 215, 255);
	hudPalette.data[17] = JO_COLOR_RGB(117, 23, 11);

	hudPalette.data[18] = JO_COLOR_RGB(180, 32, 42);
	hudPalette.data[19] = JO_COLOR_RGB(250, 106, 10);
	hudPalette.data[20] = JO_COLOR_RGB(223, 62, 35);
	hudPalette.data[21] = JO_COLOR_RGB(115, 23, 45);
	hudPalette.data[22] = JO_COLOR_RGB(77, 97, 255);

	// BG palettes
	jo_create_palette(&bgPalette);
	bgPalette.data[0] = JO_COLOR_RGB(41, 64, 90);
	bgPalette.data[1] = JO_COLOR_RGB(49, 68, 74);
	bgPalette.data[2] = JO_COLOR_RGB(148, 198, 205);
	bgPalette.data[3] = JO_COLOR_RGB(8, 16, 32);
	bgPalette.data[4] = JO_COLOR_RGB(115, 165, 172);
	bgPalette.data[5] = JO_COLOR_RGB(24, 44, 74);
	bgPalette.data[6] = JO_COLOR_RGB(139, 194, 197);
	bgPalette.data[7] = JO_COLOR_RGB(49, 80, 90);
	bgPalette.data[8] = JO_COLOR_RGB(24, 60, 90);
	bgPalette.data[9] = JO_COLOR_RGB(16, 76, 106);
	bgPalette.data[10] = JO_COLOR_RGB(98, 153, 164);
	bgPalette.data[11] = JO_COLOR_RGB(24, 85, 115);
	bgPalette.data[12] = JO_COLOR_RGB(164, 214, 222);
	bgPalette.data[13] = JO_COLOR_RGB(74, 129, 148);
	bgPalette.data[14] = JO_COLOR_RGB(41, 93, 115);
	bgPalette.data[15] = JO_COLOR_RGB(106, 157, 172);
	bgPalette.data[16] = JO_COLOR_RGB(32, 89, 115);
	bgPalette.data[17] = JO_COLOR_RGB(131, 161, 180);
	bgPalette.data[18] = JO_COLOR_RGB(0, 0, 0);
	bgPalette.data[19] = JO_COLOR_RGB(123, 182, 189);
	bgPalette.data[20] = JO_COLOR_RGB(49, 89, 115);
	bgPalette.data[21] = JO_COLOR_RGB(49, 89, 106);
	bgPalette.data[22] = JO_COLOR_RGB(41, 76, 98);
	bgPalette.data[23] = JO_COLOR_RGB(41, 76, 106);
	bgPalette.data[24] = JO_COLOR_RGB(41, 72, 98);
	bgPalette.data[25] = JO_COLOR_RGB(98, 149, 156);
	bgPalette.data[26] = JO_COLOR_RGB(24, 72, 106);
	bgPalette.data[27] = JO_COLOR_RGB(41, 72, 90);
	bgPalette.data[28] = JO_COLOR_RGB(123, 174, 180);
	bgPalette.data[29] = JO_COLOR_RGB(131, 182, 189);
	bgPalette.data[30] = JO_COLOR_RGB(49, 105, 131);
	bgPalette.data[31] = JO_COLOR_RGB(32, 76, 98);
	bgPalette.data[32] = JO_COLOR_RGB(106, 157, 164);
	bgPalette.data[33] = JO_COLOR_RGB(90, 141, 148);
	bgPalette.data[34] = JO_COLOR_RGB(156, 206, 213);
	bgPalette.data[35] = JO_COLOR_RGB(32, 80, 106);
	bgPalette.data[36] = JO_COLOR_RGB(16, 64, 98);
	bgPalette.data[37] = JO_COLOR_RGB(139, 190, 197);
	bgPalette.data[38] = JO_COLOR_RGB(74, 125, 139);
	bgPalette.data[39] = JO_COLOR_RGB(8, 68, 98);
	bgPalette.data[40] = JO_COLOR_RGB(24, 76, 106);
	bgPalette.data[41] = JO_COLOR_RGB(16, 20, 49);
	bgPalette.data[42] = JO_COLOR_RGB(82, 133, 148);
	bgPalette.data[43] = JO_COLOR_RGB(205, 238, 246);
	bgPalette.data[44] = JO_COLOR_RGB(16, 40, 57);
	bgPalette.data[45] = JO_COLOR_RGB(131, 165, 180);
	bgPalette.data[46] = JO_COLOR_RGB(32, 64, 82);
	bgPalette.data[47] = JO_COLOR_RGB(49, 85, 106);
	bgPalette.data[48] = JO_COLOR_RGB(172, 214, 222);
	bgPalette.data[49] = JO_COLOR_RGB(32, 76, 106);
	bgPalette.data[50] = JO_COLOR_RGB(49, 97, 115);
	bgPalette.data[51] = JO_COLOR_RGB(123, 157, 172);
	bgPalette.data[52] = JO_COLOR_RGB(57, 93, 115);
	bgPalette.data[53] = JO_COLOR_RGB(123, 161, 180);
	bgPalette.data[54] = JO_COLOR_RGB(74, 117, 139);
	bgPalette.data[55] = JO_COLOR_RGB(98, 137, 148);
	bgPalette.data[56] = JO_COLOR_RGB(139, 182, 189);
	bgPalette.data[57] = JO_COLOR_RGB(74, 113, 123);
	bgPalette.data[58] = JO_COLOR_RGB(8, 12, 49);
	bgPalette.data[59] = JO_COLOR_RGB(189, 230, 238);
	bgPalette.data[60] = JO_COLOR_RGB(24, 32, 57);
	bgPalette.data[61] = JO_COLOR_RGB(8, 8, 49);
	bgPalette.data[62] = JO_COLOR_RGB(180, 222, 230);
	bgPalette.data[63] = JO_COLOR_RGB(57, 101, 123);
	bgPalette.data[64] = JO_COLOR_RGB(148, 178, 189);
	bgPalette.data[65] = JO_COLOR_RGB(180, 214, 222);
	bgPalette.data[66] = JO_COLOR_RGB(156, 194, 205);
	bgPalette.data[67] = JO_COLOR_RGB(8, 20, 41);
	bgPalette.data[68] = JO_COLOR_RGB(32, 56, 82);
	bgPalette.data[69] = JO_COLOR_RGB(57, 113, 139);
	bgPalette.data[70] = JO_COLOR_RGB(16, 36, 65);
	bgPalette.data[71] = JO_COLOR_RGB(32, 85, 115);
	bgPalette.data[72] = JO_COLOR_RGB(16, 60, 90);
	bgPalette.data[73] = JO_COLOR_RGB(24, 68, 98);
	bgPalette.data[74] = JO_COLOR_RGB(156, 198, 205);
	bgPalette.data[75] = JO_COLOR_RGB(32, 48, 74);
	bgPalette.data[76] = JO_COLOR_RGB(57, 101, 115);
	bgPalette.data[77] = JO_COLOR_RGB(131, 174, 180);
	bgPalette.data[78] = JO_COLOR_RGB(24, 44, 65);
	bgPalette.data[79] = JO_COLOR_RGB(32, 64, 90);
	bgPalette.data[80] = JO_COLOR_RGB(41, 80, 98);
	bgPalette.data[81] = JO_COLOR_RGB(16, 28, 41);
	bgPalette.data[82] = JO_COLOR_RGB(41, 68, 82);
	bgPalette.data[83] = JO_COLOR_RGB(139, 186, 189);
	bgPalette.data[84] = JO_COLOR_RGB(49, 93, 123);
	bgPalette.data[85] = JO_COLOR_RGB(180, 218, 230);
	bgPalette.data[86] = JO_COLOR_RGB(180, 218, 222);
	bgPalette.data[87] = JO_COLOR_RGB(98, 141, 156);
	bgPalette.data[88] = JO_COLOR_RGB(106, 153, 156);
	bgPalette.data[89] = JO_COLOR_RGB(41, 89, 106);
	bgPalette.data[90] = JO_COLOR_RGB(41, 93, 123);
	bgPalette.data[91] = JO_COLOR_RGB(41, 97, 123);
	bgPalette.data[92] = JO_COLOR_RGB(57, 97, 123);
	bgPalette.data[93] = JO_COLOR_RGB(115, 157, 164);
	bgPalette.data[94] = JO_COLOR_RGB(49, 93, 115);
	bgPalette.data[95] = JO_COLOR_RGB(65, 109, 131);
	bgPalette.data[96] = JO_COLOR_RGB(106, 153, 164);
	bgPalette.data[97] = JO_COLOR_RGB(16, 24, 57);
	bgPalette.data[98] = JO_COLOR_RGB(115, 153, 172);
	bgPalette.data[99] = JO_COLOR_RGB(16, 24, 41);
	bgPalette.data[100] = JO_COLOR_RGB(16, 20, 41);
	bgPalette.data[101] = JO_COLOR_RGB(148, 194, 205);
	bgPalette.data[102] = JO_COLOR_RGB(172, 218, 222);
	bgPalette.data[103] = JO_COLOR_RGB(24, 44, 57);
	bgPalette.data[104] = JO_COLOR_RGB(32, 60, 90);
	bgPalette.data[105] = JO_COLOR_RGB(90, 133, 139);
	bgPalette.data[106] = JO_COLOR_RGB(49, 101, 123);
	bgPalette.data[107] = JO_COLOR_RGB(131, 178, 180);
	bgPalette.data[108] = JO_COLOR_RGB(123, 178, 180);
	bgPalette.data[109] = JO_COLOR_RGB(131, 178, 189);
	bgPalette.data[110] = JO_COLOR_RGB(16, 28, 49);
	bgPalette.data[111] = JO_COLOR_RGB(65, 101, 106);
	bgPalette.data[112] = JO_COLOR_RGB(57, 105, 131);
	bgPalette.data[113] = JO_COLOR_RGB(180, 226, 238);
	bgPalette.data[114] = JO_COLOR_RGB(57, 109, 131);
	bgPalette.data[115] = JO_COLOR_RGB(65, 101, 115);
	bgPalette.data[116] = JO_COLOR_RGB(98, 145, 156);
	bgPalette.data[117] = JO_COLOR_RGB(41, 68, 90);
	bgPalette.data[118] = JO_COLOR_RGB(205, 234, 246);
	bgPalette.data[119] = JO_COLOR_RGB(139, 186, 197);
	bgPalette.data[120] = JO_COLOR_RGB(172, 206, 213);
	bgPalette.data[121] = JO_COLOR_RGB(90, 137, 148);
	bgPalette.data[122] = JO_COLOR_RGB(32, 72, 98);
	bgPalette.data[123] = JO_COLOR_RGB(16, 68, 98);
	bgPalette.data[124] = JO_COLOR_RGB(32, 72, 90);
	bgPalette.data[125] = JO_COLOR_RGB(16, 72, 98);
	bgPalette.data[126] = JO_COLOR_RGB(156, 202, 205);
	bgPalette.data[127] = JO_COLOR_RGB(106, 149, 164);
	bgPalette.data[128] = JO_COLOR_RGB(65, 113, 131);
	bgPalette.data[129] = JO_COLOR_RGB(82, 129, 148);
	bgPalette.data[130] = JO_COLOR_RGB(74, 109, 123);
	bgPalette.data[131] = JO_COLOR_RGB(82, 125, 139);
	bgPalette.data[132] = JO_COLOR_RGB(57, 113, 131);
	bgPalette.data[133] = JO_COLOR_RGB(82, 125, 148);
	bgPalette.data[134] = JO_COLOR_RGB(164, 210, 213);
	bgPalette.data[135] = JO_COLOR_RGB(49, 97, 123);
	bgPalette.data[136] = JO_COLOR_RGB(65, 105, 115);
	bgPalette.data[137] = JO_COLOR_RGB(74, 125, 148);
	bgPalette.data[138] = JO_COLOR_RGB(82, 125, 131);
	bgPalette.data[139] = JO_COLOR_RGB(106, 145, 164);
	bgPalette.data[140] = JO_COLOR_RGB(32, 60, 74);
	bgPalette.data[141] = JO_COLOR_RGB(16, 32, 49);
	bgPalette.data[142] = JO_COLOR_RGB(16, 32, 57);
	bgPalette.data[143] = JO_COLOR_RGB(24, 48, 65);
	bgPalette.data[144] = JO_COLOR_RGB(65, 121, 148);
	bgPalette.data[145] = JO_COLOR_RGB(98, 145, 164);
	bgPalette.data[146] = JO_COLOR_RGB(16, 36, 49);
	bgPalette.data[147] = JO_COLOR_RGB(24, 52, 74);
	bgPalette.data[148] = JO_COLOR_RGB(24, 36, 57);
	bgPalette.data[149] = JO_COLOR_RGB(24, 52, 82);
	bgPalette.data[150] = JO_COLOR_RGB(8, 12, 32);
	bgPalette.data[151] = JO_COLOR_RGB(49, 93, 106);
	bgPalette.data[152] = JO_COLOR_RGB(164, 206, 213);
	bgPalette.data[153] = JO_COLOR_RGB(24, 40, 65);
	bgPalette.data[154] = JO_COLOR_RGB(41, 89, 115);
	bgPalette.data[155] = JO_COLOR_RGB(189, 226, 238);
	bgPalette.data[156] = JO_COLOR_RGB(24, 36, 65);
	bgPalette.data[157] = JO_COLOR_RGB(8, 4, 49);
	bgPalette.data[158] = JO_COLOR_RGB(32, 52, 74);
	bgPalette.data[159] = JO_COLOR_RGB(57, 97, 115);
	bgPalette.data[160] = JO_COLOR_RGB(189, 218, 230);
	bgPalette.data[161] = JO_COLOR_RGB(98, 141, 148);
	bgPalette.data[162] = JO_COLOR_RGB(8, 16, 41);
	bgPalette.data[163] = JO_COLOR_RGB(115, 153, 164);
	bgPalette.data[164] = JO_COLOR_RGB(24, 40, 57);
	bgPalette.data[165] = JO_COLOR_RGB(148, 194, 197);
	bgPalette.data[166] = JO_COLOR_RGB(90, 133, 148);
	bgPalette.data[167] = JO_COLOR_RGB(172, 218, 230);
	bgPalette.data[168] = JO_COLOR_RGB(41, 85, 115);
	bgPalette.data[169] = JO_COLOR_RGB(41, 85, 106);
	bgPalette.data[170] = JO_COLOR_RGB(180, 226, 230);
	bgPalette.data[171] = JO_COLOR_RGB(123, 170, 172);
	bgPalette.data[172] = JO_COLOR_RGB(123, 165, 180);
	bgPalette.data[173] = JO_COLOR_RGB(8, 4, 24);
	bgPalette.data[174] = JO_COLOR_RGB(57, 105, 123);
	bgPalette.data[175] = JO_COLOR_RGB(205, 234, 238);
	bgPalette.data[176] = JO_COLOR_RGB(8, 0, 24);
	bgPalette.data[177] = JO_COLOR_RGB(123, 165, 172);
	bgPalette.data[178] = JO_COLOR_RGB(82, 129, 139);
	bgPalette.data[179] = JO_COLOR_RGB(8, 8, 32);
	bgPalette.data[180] = JO_COLOR_RGB(16, 16, 41);
	bgPalette.data[181] = JO_COLOR_RGB(32, 60, 82);
	bgPalette.data[182] = JO_COLOR_RGB(115, 157, 172);
	bgPalette.data[183] = JO_COLOR_RGB(49, 101, 131);
	bgPalette.data[184] = JO_COLOR_RGB(115, 161, 172);
	bgPalette.data[185] = JO_COLOR_RGB(74, 121, 139);
	bgPalette.data[186] = JO_COLOR_RGB(115, 161, 164);
	bgPalette.data[187] = JO_COLOR_RGB(213, 242, 246);
	bgPalette.data[188] = JO_COLOR_RGB(24, 48, 74);
	bgPalette.data[189] = JO_COLOR_RGB(16, 28, 57);
	bgPalette.data[190] = JO_COLOR_RGB(189, 226, 230);
	bgPalette.data[191] = JO_COLOR_RGB(65, 121, 139);
	bgPalette.data[192] = JO_COLOR_RGB(8, 4, 41);
	bgPalette.data[193] = JO_COLOR_RGB(65, 113, 139);
	bgPalette.data[194] = JO_COLOR_RGB(90, 141, 156);
	bgPalette.data[195] = JO_COLOR_RGB(90, 137, 156);
	bgPalette.data[196] = JO_COLOR_RGB(16, 24, 49);
	bgPalette.data[197] = JO_COLOR_RGB(123, 178, 189);
	bgPalette.data[198] = JO_COLOR_RGB(98, 145, 148);
	bgPalette.data[199] = JO_COLOR_RGB(123, 170, 180);
	bgPalette.data[200] = JO_COLOR_RGB(156, 202, 213);
	bgPalette.data[201] = JO_COLOR_RGB(90, 137, 139);
	bgPalette.data[202] = JO_COLOR_RGB(131, 186, 189);
	bgPalette.data[203] = JO_COLOR_RGB(24, 56, 74);
	bgPalette.data[204] = JO_COLOR_RGB(213, 238, 246);
	bgPalette.data[205] = JO_COLOR_RGB(16, 36, 57);
	bgPalette.data[206] = JO_COLOR_RGB(197, 230, 238);
	bgPalette.data[207] = JO_COLOR_RGB(189, 222, 230);
	bgPalette.data[208] = JO_COLOR_RGB(74, 109, 115);
	bgPalette.data[209] = JO_COLOR_RGB(32, 52, 82);
	bgPalette.data[210] = JO_COLOR_RGB(0, 0, 16);
	bgPalette.data[211] = JO_COLOR_RGB(8, 0, 16);
	bgPalette.data[212] = JO_COLOR_RGB(24, 56, 82);
	bgPalette.data[213] = JO_COLOR_RGB(32, 68, 90);
	bgPalette.data[214] = JO_COLOR_RGB(131, 186, 197);
	bgPalette.data[215] = JO_COLOR_RGB(8, 8, 24);
	bgPalette.data[216] = JO_COLOR_RGB(197, 234, 238);
	bgPalette.data[217] = JO_COLOR_RGB(164, 210, 222);
	bgPalette.data[218] = JO_COLOR_RGB(65, 117, 139);
	bgPalette.data[219] = JO_COLOR_RGB(74, 121, 148);
	bgPalette.data[220] = JO_COLOR_RGB(41, 80, 106);
	bgPalette.data[221] = JO_COLOR_RGB(106, 149, 156);
	bgPalette.data[222] = JO_COLOR_RGB(32, 68, 98);
	bgPalette.data[223] = JO_COLOR_RGB(65, 105, 123);
}

void global_initMainMenu()
{

	jo_core_tv_off();
	jo_set_tga_palette_handling(JO_NULL);

	// Create palette
	jo_create_palette(&fontPalette);
	fontPalette.data[0] = JO_COLOR_RGB(255, 0, 220);
	fontPalette.data[1] = JO_COLOR_RGB(255, 255, 255);
	fontPalette.data[2] = JO_COLOR_RGB(37, 15, 219);
	fontPalette.data[3] = JO_COLOR_RGB(239, 227, 13);
	fontPalette.data[4] = JO_COLOR_RGB(0, 158, 17);
	fontPalette.data[5] = JO_COLOR_RGB(0, 0, 0);

	imageTextCharacters = jo_sprite_add_tga_tileset("TEX", "FONT.TGA", 1, fontTiles, JO_TILE_COUNT(fontTiles));
	//  TODO: Load BG
	jo_core_tv_on();
}

void display_initGraphics(short levelId)
{

	jo_core_tv_off();

	jo_sprite_free_all();

	// Init sprite palette
	initGameplayPalette();

	// Load sprite/texure packs
	jo_sprite_add_image_pack("TEX", "HERO.TEX", 0);

	// Load BG
	if (gamestate != ANIMTEST)
	{
		switch (levelId)
		{
		case 0:
			jo_clear_background(JO_COLOR_Transparent);
			backgroundImageBuffer.data = JO_NULL;

			// Load layer 0
			jo_tga_8bits_loader(&backgroundImageBuffer, "BG", "BGL1A.TGA", 0);
			jo_vdp2_set_nbg0_8bits_image(&backgroundImageBuffer, bgPalette.id, false, true);
			jo_free_img(&backgroundImageBuffer);

			// Load layer 1
			jo_tga_8bits_loader(&backgroundImageBuffer, "BG", "BGL1B.TGA", 1);
			jo_vdp2_set_nbg1_8bits_image(&backgroundImageBuffer, bgPalette.id, 0);
			jo_free_img(&backgroundImageBuffer);

			// Load textures
			jo_sprite_add_image_pack("TEX", "LVL1.TEX", 0);

			imageHUDSWeaponOne = jo_sprite_add_tga("TEX", "HOLY.TGA", 1);
			// imageHUDSWeaponTwo = jo_sprite_add_tga("TEX", "SWEAPA.TGA", JO_COLOR_Transparent);
			// imageHUDSWeaponThree = jo_sprite_add_tga("TEX", "SWEAPK.TGA", JO_COLOR_Transparent);

			imageHUDBackgroundId = jo_sprite_add_tga("TEX", "HUDBG.TGA", 1);
			imageHUDFillId = jo_sprite_add_tga("TEX", "HUDFIL.TGA", 1);
			imageTextCharacters = jo_sprite_add_tga_tileset("TEX", "FONT.TGA", 1, fontTiles, JO_TILE_COUNT(fontTiles));
			break;
		}
	}

	jo_core_tv_on();
}

void draw(void)
{
	switch (gamestate)
	{
	case MAINMENU:
		drawMainMenu();
		break;
	case GAMEPLAY:
		display_drawGameplay();
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