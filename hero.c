#include <jo/jo.h>
#include "collision.h"
#include "hero.h"
#include "vars.h"
#include "globalfunctions.h"

hero_t hero;
FIXED jumpHeight = HERO_DEFAULT_VERTICALJUMPSPEED;
FIXED heroWalkSpeed = HERO_DEFAULT_WALKSPEED;

void handleStateUpdate()
{
    if (gamestate != ANIMTEST)
    {
        if (oldHerostate != herostate || oldDirection != hero.isFacingLeft)
        {
            heroSetAnimation(&hero, herostate);
        }
    }
}

void updateHero(void)
{
    switch (gamestate)
    {
    case GAMEPLAY:

        if (hero.speedY < gravity.max)
            hero.speedY += gravity.step;

        // static hitboxes
        for (iterator = 0; iterator < currentLevel->hitboxCount; iterator++)
        {
            collision = (collision_t){
                .x = detectCollisionX(hero.hitbox.x + hero.speedX, hero.hitbox.y, hero.hitbox.width, hero.hitbox.height, currentLevelHitboxes[iterator].x, currentLevelHitboxes[iterator].y, currentLevelHitboxes[iterator].width, currentLevelHitboxes[iterator].height),
                .y = detectCollisionY(hero.hitbox.x, hero.hitbox.y + hero.speedY, hero.hitbox.width, hero.hitbox.height, currentLevelHitboxes[iterator].x, currentLevelHitboxes[iterator].y, currentLevelHitboxes[iterator].width, currentLevelHitboxes[iterator].height)};

            switch (currentLevelHitboxes[iterator].type)
            {
            case HITBOX_TYPE_SOLID:
                // X
                // from left

                if (collision.x != JO_FIXED_0 && hero.speedX > JO_FIXED_0)
                {
                    hero.speedX -= collision.x;
                }
                // from right
                else if (collision.x != JO_FIXED_0 && hero.speedX < JO_FIXED_0)
                {
                    hero.speedX += collision.x;
                }

                // Y
                // from top
                if (collision.y != JO_FIXED_0 && hero.speedY > JO_FIXED_0)
                {
                    hero.speedY -= collision.y;

                    // assume hero is grounded
                    hero.isGrounded = true;

                    if (herostate == JUMP)
                    {
                        herostate = IDLE;
                    }
                }
                // from bottom
                else if (collision.y != JO_FIXED_0 && hero.speedY < JO_FIXED_0)
                {
                    hero.speedY += collision.y;
                }

                break;

            case HITBOX_TYPE_SEMISOLID:
                // Only check from top and only if hero.y < hitbox top
                if (collision.y != JO_FIXED_0 && hero.speedY > JO_FIXED_0 && (hero.hitbox.y + hero.hitbox.height) <= currentLevelHitboxes[iterator].y)
                {
                    hero.speedY -= collision.y;

                    // assume hero is grounded
                    hero.isGrounded = true;

                    if (herostate == JUMP)
                    {
                        herostate = IDLE;
                        if (herostate == JUMP)
                        {
                            herostate = IDLE;
                            // heroSetAnimation(&hero, HERO_ANIMATION_IDLE_ID);
                        }
                    }
                }
                break;
            }
        }

        // dynamic hitboxes
        for (iterator = 0; iterator < currentLevel->dynamicHitboxCount; iterator++)
        {
            collision = (collision_t){
                .x = detectCollisionX(hero.hitbox.x + hero.speedX, hero.hitbox.y, hero.hitbox.width, hero.hitbox.height, currentLevelDynamicHitboxes[iterator].x, currentLevelDynamicHitboxes[iterator].y, currentLevelDynamicHitboxes[iterator].width, currentLevelDynamicHitboxes[iterator].height),
                .y = detectCollisionY(hero.hitbox.x, hero.hitbox.y + hero.speedY, hero.hitbox.width, hero.hitbox.height, currentLevelDynamicHitboxes[iterator].x, currentLevelDynamicHitboxes[iterator].y, currentLevelDynamicHitboxes[iterator].width, currentLevelDynamicHitboxes[iterator].height)};

            switch (currentLevelDynamicHitboxes[iterator].type)
            {
            case DYNAMIC_HITBOX_TYPE_TEMP_SOLID:

                if (!tempSolid)
                    continue;

                // X
                // from left

                if (collision.x != JO_FIXED_0 && hero.speedX > JO_FIXED_0)
                {
                    hero.speedX -= collision.x;
                }
                // from right
                else if (collision.x != JO_FIXED_0 && hero.speedX < JO_FIXED_0)
                {
                    hero.speedX += collision.x;
                }

                // Y
                // from top
                if (collision.y != JO_FIXED_0 && hero.speedY > JO_FIXED_0)
                {
                    hero.speedY -= collision.y;

                    // assume hero is grounded
                    hero.isGrounded = true;

                    if (herostate == JUMP)
                    {
                        herostate = IDLE;
                        // heroSetAnimation(&hero, HERO_ANIMATION_IDLE_ID);
                    }
                }
                // from bottom
                else if (collision.y != JO_FIXED_0 && hero.speedY < JO_FIXED_0)
                {
                    hero.speedY += collision.y;
                }

                break;

            case DYNAMIC_HITBOX_TYPE_TEMP_CHUNK:
                if (collision.x != JO_FIXED_0)
                {
                    if (hero.speedX < JO_FIXED_0)
                    {
                        currentLevel->currentChunk = currentLevelDynamicHitboxes[iterator].attribute - 1;
                    }
                    else if (hero.speedX > JO_FIXED_0)
                    {
                        currentLevel->currentChunk = currentLevelDynamicHitboxes[iterator].attribute;
                    }
                }
                break;
            }
        }

        // if (herostate == WALKING)
        // {
        //     if (hero.speedX > JO_FIXED_0)
        //         hero.speedX -= friction;
        //     else if (hero.speedX < JO_FIXED_0)
        //         hero.speedX += friction;
        // }

        hero.x += hero.speedX;
        hero.y += hero.speedY;

        hero.hitbox.x = hero.x - (hero.hitbox.width / 2);
        hero.hitbox.y = hero.y - (hero.hitbox.height / 2) + toFIXED(3.2);

        // hero.z += hero.speedZ;

        // Handle camera boundaries

        if (hero.x < currentLevel->boundaryLeft)
        {
            camera.x = currentLevel->boundaryLeft;
        }
        else if (hero.x > currentLevel->boundaryRight)
        {
            camera.x = currentLevel->boundaryRight;
        }
        else
        {
            camera.x = hero.x;
        }

        if (hero.y > currentLevel->boundaryBottom)
        {
            camera.y = currentLevel->boundaryBottom - CAMERA_DEFAULT_OFFSET_Y;
        }
        else if (hero.y < currentLevel->boundaryTop)
        {
            camera.y = currentLevel->boundaryTop - CAMERA_DEFAULT_OFFSET_Y;
        }
        else
        {
            camera.y = hero.y - CAMERA_DEFAULT_OFFSET_Y;
        }

        if (hero.speedY != JO_FIXED_0)
        {
            hero.isGrounded = false;
        }

        handleStateUpdate();
        break;
    default:
        break;
    }
}
