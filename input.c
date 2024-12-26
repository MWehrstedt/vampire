#include <jo/jo.h>
#include "hero.h"
#include "input.h"
#include "vars.h"
#include "display.h"

void handleGameplayInput()
{

    // Movement
    if (jo_is_pad1_key_pressed(JO_KEY_LEFT))
    {
        if (herostate == IDLE || herostate == WALKING)
        {
            hero.speedX = -heroWalkSpeed;
            hero.rotationY = 180;
            herostate = WALKING;
        }
    }
    else if (jo_is_pad1_key_pressed(JO_KEY_RIGHT))
    {
        if (herostate == IDLE || herostate == WALKING)
        {
            hero.speedX = heroWalkSpeed;
            hero.rotationY = 0;
            herostate = WALKING;
        }
    }

    if (herostate != JUMP && !jo_is_pad1_key_pressed(JO_KEY_LEFT) && !jo_is_pad1_key_pressed(JO_KEY_RIGHT))
    {
        if (herostate == IDLE || herostate == WALKING)
        {
            hero.speedX = JO_FIXED_0;
        }
    }

    // Jump
    if (jo_is_pad1_key_down(JO_KEY_C))
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

    // DEBUG
    if (jo_is_pad1_key_down(JO_KEY_L))
    {
        hero.health--;
    }
    else if (jo_is_pad1_key_down(JO_KEY_R))
    {
        hero.health++;
    }

    if (jo_is_pad1_key_down(JO_KEY_X))
    {
        tempSolid = false;
    }
    // else if (jo_is_pad1_key_pressed(JO_KEY_Z))
    // {
    //     camera.y += JO_FIXED_1;
    // }

    if (jo_is_pad1_key_pressed(JO_KEY_A))
    {
        camera.z -= JO_FIXED_1;
    }
    else if (jo_is_pad1_key_pressed(JO_KEY_B))
    {
        camera.z += JO_FIXED_1;
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
            initBackgroundGfx(0);
            initGameplay();
            initGameplayCamera();
            gamestate = GAMEPLAY;
            break;
        case 1:
            initBackgroundGfx(0);
            initGameplay();
            initGameplayCamera();
            gamestate = ANIMTEST;

        default:
            break;
        }
    }
}

void handleAnimtestInput()
{
    if (jo_is_pad1_key_pressed(JO_KEY_DOWN))
    {
        camera.z -= JO_FIXED_1;
    }
    else if (jo_is_pad1_key_pressed(JO_KEY_UP))
    {
        camera.z += JO_FIXED_1;
    }

    if (jo_is_pad1_key_pressed(JO_KEY_LEFT))
    {
        hero.rotationY--;
    }
    else if (jo_is_pad1_key_pressed(JO_KEY_RIGHT))
    {
        hero.rotationY++;
    }

    if (jo_is_pad1_key_down(JO_KEY_C))
    {
        tempSolid = !tempSolid;
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