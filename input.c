#include <jo/jo.h>
#include "vars.h"
#include "globalFunctions.h"
#include "levels.h"
#include "hero.h"
#include "input.h"
#include "display.h"

void handleGameplayInput()
{
    oldHerostate = hero.state;
    oldDirection = hero.isFacingLeft;

    // Attack
    if (jo_is_pad1_key_down(JO_KEY_B))
    {
        if (hero.isGrounded && (hero.state == IDLE || hero.state == WALKING))
        {
            hero.speedX = 0;
            hero.sword.x = hero.x + HERO_DEFAULT_SWORD_HITBOX_OFFSET_X;
            hero.sword.y = hero.y + HERO_DEFAULT_SWORD_HITBOX_OFFSET_Y;
            hero.swordCounter = HERO_DEFAULT_SWORD_COUNTER;

            hero.state = ATTACK;
        }
    }

    // Movement
    if (hero.state == IDLE && jo_is_pad1_key_pressed(JO_KEY_DOWN))
    {
        hero.speedX = 0;
        hero.state = CROUCHING;
    }
    else if (hero.state == CROUCHING && !jo_is_pad1_key_pressed(JO_KEY_DOWN))
    {
        hero.state = IDLE;
    }

    // Set state to idle
    if (hero.state != JUMP && !jo_is_pad1_key_pressed(JO_KEY_LEFT) && !jo_is_pad1_key_pressed(JO_KEY_RIGHT))
    {
        if (hero.state == IDLE || hero.state == WALKING)
        {
            hero.speedX = JO_FIXED_0;
            hero.state = IDLE;
        }
    }

    if (jo_is_pad1_key_pressed(JO_KEY_LEFT))
    {
        if (hero.state == IDLE || hero.state == WALKING)
        {
            hero.speedX = -heroWalkSpeed;
            hero.isFacingLeft = true;
            hero.state = WALKING;
        }
        else if (hero.state == CROUCHING)
        {
            hero.isFacingLeft = true;
        }
    }
    else if (jo_is_pad1_key_pressed(JO_KEY_RIGHT))
    {
        if (hero.state == IDLE || hero.state == WALKING)
        {
            hero.speedX = heroWalkSpeed;
            hero.isFacingLeft = false;
            hero.state = WALKING;
        }
        else if (hero.state == CROUCHING)
        {
            hero.isFacingLeft = false;
        }
    }

    // Jump
    if (jo_is_pad1_key_down(JO_KEY_C) || jo_is_pad1_key_down(JO_KEY_A))
    {
        if (hero.isGrounded && (hero.state == IDLE || hero.state == WALKING))
        {
            hero.speedY = -jumpHeight;

            if (hero.speedX < JO_FIXED_0)
                hero.speedX = -HERO_DEFAULT_HORIZONTALJUMPSPEED;
            else if (hero.speedX > JO_FIXED_0)
                hero.speedX = HERO_DEFAULT_HORIZONTALJUMPSPEED;

            hero.state = JUMP;
        }
    }

    if (jo_is_pad1_key_down(JO_KEY_X))
    {
        currentLevelDynamicHitboxes[4].active = !currentLevelDynamicHitboxes[4].active;
    }

    // Open Menu
    // TODO: show menu, transition to PAUSED/MENU state
    if (jo_is_pad1_key_down(JO_KEY_START))
    {
        gamestate = PAUSED;
    }
}

void handlePausedInput()
{
    if (jo_is_pad1_key_down(JO_KEY_START))
    {
        gamestate = GAMEPLAY;
    }
}

void handleMainMenuInput()
{
    if (jo_is_pad1_key_down(JO_KEY_DOWN))
    {
        currentSelection = (currentSelection + 1) % 2;
    }
    else if (jo_is_pad1_key_down(JO_KEY_UP))
    {
        currentSelection = (currentSelection - 1) % 2;
    }

    if (jo_is_pad1_key_down(JO_KEY_C))
    {
        switch (currentSelection)
        {
        case 0:
            display_initGraphics(0);
            global_initHero();
            levels_initLevel(0);
            display_initGameplayCamera();
            gamestate = GAMEPLAY;
            break;
        case 1:
            gamestate = ANIMTEST;
            display_initGraphics(0);
            global_initHero();
            display_initGameplayCamera();

        default:
            break;
        }
    }
}

void handleAnimtestInput()
{
    oldDirection = hero.isFacingLeft;

    // if (jo_is_pad1_key_pressed(JO_KEY_LEFT))
    // {
    //     //hero.rotationY--;
    // }
    // else if (jo_is_pad1_key_pressed(JO_KEY_RIGHT))
    // {
    //     //hero.rotationY++;
    // }

    if (jo_is_pad1_key_down(JO_KEY_UP))
    {
        camera.z += JO_FIXED_1;
    }
    else if (jo_is_pad1_key_down(JO_KEY_DOWN))
    {
        camera.z -= JO_FIXED_1;
    }

    if (jo_is_pad1_key_down(JO_KEY_A))
    {
        if (!hero.playAnimation)
        {
            hero.animationCounter += JO_FIXED_1;
        }
    }
    else if (jo_is_pad1_key_down(JO_KEY_B))
    {
        if (!hero.playAnimation)
        {
            hero.animationCounter -= JO_FIXED_1;
        }
    }

    if (jo_is_pad1_key_down(JO_KEY_C))
    {
        hero.playAnimation = !hero.playAnimation;
    }

    if (jo_is_pad1_key_down(JO_KEY_L))
    {
        if (animTestCurrentCharacter > 0)
        {
            --animTestCurrentCharacter;
        }
    }
    else if (jo_is_pad1_key_down(JO_KEY_R))
    {
        if (animTestCurrentCharacter < 1)
        {
            ++animTestCurrentCharacter;
        }
    }

    if (jo_is_pad1_key_down(JO_KEY_Y))
    {
        hero.isFacingLeft = !hero.isFacingLeft;
    }

    if (jo_is_pad1_key_down(JO_KEY_X))
    {
        if (animTestCurrentAnimation > 0)
        {
            --animTestCurrentAnimation;
            global_SetHeroAnimation(&hero, (herostate_e)animTestCurrentAnimation);
        }
    }
    else if (jo_is_pad1_key_down(JO_KEY_Z))
    {
        if (animTestCurrentAnimation < 6)
        {
            ++animTestCurrentAnimation;
            global_SetHeroAnimation(&hero, (herostate_e)animTestCurrentAnimation);
        }
    }
}

void input_handleInput()
{
    switch (gamestate)
    {
    case MAINMENU:
        handleMainMenuInput();
        break;
    case GAMEPLAY:
        handleGameplayInput();
        break;
    case PAUSED:
        handlePausedInput();
        break;
    case ANIMTEST:
        handleAnimtestInput();
        break;
    default:
        break;
    }
}