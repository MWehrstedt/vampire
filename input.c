#include <jo/jo.h>
#include "vars.h"
#include "globalFunctions.h"
#include "levels.h"
#include "hero.h"
#include "input.h"
#include "display.h"

void handleGameplayInput()
{
    oldHerostate = herostate;
    oldDirection = hero.isFacingLeft;

    // Movement
    if (herostate == IDLE && jo_is_pad1_key_pressed(JO_KEY_DOWN))
    {
        hero.speedX = 0;
        herostate = CROUCHING;
    }
    else if (herostate == CROUCHING && !jo_is_pad1_key_pressed(JO_KEY_DOWN))
    {
        herostate = IDLE;
    }

    // Set state to idle
    if (herostate != JUMP && !jo_is_pad1_key_pressed(JO_KEY_LEFT) && !jo_is_pad1_key_pressed(JO_KEY_RIGHT))
    {
        if (herostate == IDLE || herostate == WALKING)
        {
            hero.speedX = JO_FIXED_0;
            herostate = IDLE;
        }
    }

    if (jo_is_pad1_key_pressed(JO_KEY_LEFT))
    {
        if (herostate == IDLE || herostate == WALKING)
        {
            hero.speedX = -heroWalkSpeed;
            hero.isFacingLeft = true;
            herostate = WALKING;
        }
        else if (herostate == CROUCHING)
        {
            hero.isFacingLeft = true;
        }
    }
    else if (jo_is_pad1_key_pressed(JO_KEY_RIGHT))
    {
        if (herostate == IDLE || herostate == WALKING)
        {
            hero.speedX = heroWalkSpeed;
            hero.isFacingLeft = false;
            herostate = WALKING;
        }
        else if (herostate == CROUCHING)
        {
            hero.isFacingLeft = false;
        }
    }

    // Jump
    if (jo_is_pad1_key_down(JO_KEY_C) || jo_is_pad1_key_down(JO_KEY_A))
    {
        if (hero.isGrounded && (herostate == IDLE || herostate == WALKING))
        {
            hero.speedY = -jumpHeight;

            if (hero.speedX < JO_FIXED_0)
                hero.speedX = -HERO_DEFAULT_HORIZONTALJUMPSPEED;
            else if (hero.speedX > JO_FIXED_0)
                hero.speedX = HERO_DEFAULT_HORIZONTALJUMPSPEED;

            herostate = JUMP;
        }
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
            initGraphics(0);
            initHero();
            initLevel(0);
            initGameplayCamera();
            gamestate = GAMEPLAY;
            break;
        case 1:
            gamestate = ANIMTEST;
            initGraphics(0);
            initHero();
            initGameplayCamera();

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
            hero.counter += JO_FIXED_1;
        }
    }
    else if (jo_is_pad1_key_down(JO_KEY_B))
    {
        if (!hero.playAnimation)
        {
            hero.counter -= JO_FIXED_1;
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
            heroSetAnimation(&hero, (herostate_e)animTestCurrentAnimation);
        }
    }
    else if (jo_is_pad1_key_down(JO_KEY_Z))
    {
        if (animTestCurrentAnimation < 5)
        {
            ++animTestCurrentAnimation;
            heroSetAnimation(&hero, (herostate_e)animTestCurrentAnimation);
        }
    }
}

void handleInput()
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