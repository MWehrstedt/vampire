#include <jo/jo.h>
#include "collision.h"
#include "hero.h"
#include "vars.h"
#include "globalFunctions.h"

FIXED jumpHeight = HERO_DEFAULT_VERTICALJUMPSPEED;
FIXED heroWalkSpeed = HERO_DEFAULT_WALKSPEED;

void global_initHero()
{
    hero = (hero_t){
        .animationCounter = 0,
        .currentKeyframe = 0,
        .x = toFIXED(-300),
        .y = toFIXED(-15),
        .z = toFIXED(5.5),
        .hitbox = (hitbox_t){
            .width = HERO_DEFAULT_HITBOX_STANDING_WIDTH,
            .height = HERO_DEFAULT_HITBOX_STANDING_HEIGHT},
        .health = 8,
        .isFacingLeft = false,
        .invulnerability = 0,
        .sword = (dynamic_hitbox_t){
            .x = JO_FIXED_0,
            .y = JO_FIXED_0,
            .width = HERO_DEFAULT_SWORD_HITBOX_WIDTH,
            .height = HERO_DEFAULT_SWORD_HITBOX_HEIGHT,
            .active = false,
        },
        .swordCounter = 0,
    };

    hero.hitbox.x = hero.x - (hero.hitbox.width / 2);
    hero.hitbox.y = hero.y - (hero.hitbox.height / 2);
    hero.state = IDLE;
    oldHerostate = IDLE;

    global_SetHeroAnimation(&hero, IDLE);
}

void hero_handleStateUpdate()
{
    if (gamestate != ANIMTEST)
    {
        if (oldHerostate != hero.state || oldDirection != hero.isFacingLeft)
        {
            global_SetHeroAnimation(&hero, hero.state);
        }
    }
}

void hero_updateHero(void)
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
                .x = collisions_detectCollisionX(hero.hitbox.x + hero.speedX, hero.hitbox.y, hero.hitbox.width, hero.hitbox.height, currentLevelHitboxes[iterator].x, currentLevelHitboxes[iterator].y, currentLevelHitboxes[iterator].width, currentLevelHitboxes[iterator].height),
                .y = collisions_detectCollisionY(hero.hitbox.x, hero.hitbox.y + hero.speedY, hero.hitbox.width, hero.hitbox.height, currentLevelHitboxes[iterator].x, currentLevelHitboxes[iterator].y, currentLevelHitboxes[iterator].width, currentLevelHitboxes[iterator].height)};

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

                    if (hero.state == JUMP)
                    {
                        hero.state = IDLE;
                    }
                    else if (hero.state == HIT)
                    {
                        hero.state = IDLE;
                        hero.invulnerability = 100;
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

                    if (hero.state == JUMP)
                    {
                        hero.state = IDLE;
                        if (hero.state == JUMP || hero.state == HIT)
                        {
                            hero.state = IDLE;
                            hero.invulnerability = 100;
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
            // jo_printf(2, 7 + iterator, " %d ", currentLevelDynamicHitboxes[iterator].active);

            // If hitbox is not active, move to next one
            if (!currentLevelDynamicHitboxes[iterator].active)
            {
                // jo_printf(2, 9 + iterator, "not active ");
                continue;
            }

            collision = (collision_t){
                .x = collisions_detectCollisionX(hero.hitbox.x + hero.speedX, hero.hitbox.y, hero.hitbox.width, hero.hitbox.height, currentLevelDynamicHitboxes[iterator].x, currentLevelDynamicHitboxes[iterator].y, currentLevelDynamicHitboxes[iterator].width, currentLevelDynamicHitboxes[iterator].height),
                .y = collisions_detectCollisionY(hero.hitbox.x, hero.hitbox.y + hero.speedY, hero.hitbox.width, hero.hitbox.height, currentLevelDynamicHitboxes[iterator].x, currentLevelDynamicHitboxes[iterator].y, currentLevelDynamicHitboxes[iterator].width, currentLevelDynamicHitboxes[iterator].height)};

            switch (currentLevelDynamicHitboxes[iterator].type)
            {
            case DYNAMIC_HITBOX_TYPE_TEMP_SOLID:

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

                    if (hero.state == JUMP)
                    {
                        hero.state = IDLE;
                        // heroSetAnimation(&hero, HERO_ANIMATION_IDLE_ID);
                    }
                    else if (hero.state == HIT)
                    {
                        hero.state = IDLE;
                        hero.invulnerability = 100;
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
            case DYNAMIC_HITBOX_TYPE_ENEMYSPAWNER:
                if (collision.x > JO_FIXED_0 && collision.y > JO_FIXED_0 && global_spawnEnemy(currentLevelDynamicHitboxes[iterator].attribute))
                {
                    currentLevelDynamicHitboxes[iterator].active = false;
                }
                break;
            }
        }

        // enemy hitboxes
        if (!hero.invulnerability && hero.state != HIT)
        {
            for (iterator = 0; iterator < ENEMY_MAX_NUMBER; ++iterator)
            {
                if (currentActiveEnemies[iterator].active)
                {
                    collision = (collision_t){
                        .x = collisions_detectCollisionX(hero.hitbox.x + hero.speedX, hero.hitbox.y, hero.hitbox.width, hero.hitbox.height, currentActiveEnemies[iterator].hitbox.x, currentActiveEnemies[iterator].hitbox.y, currentActiveEnemies[iterator].hitbox.width, currentActiveEnemies[iterator].hitbox.height),
                        .y = collisions_detectCollisionY(hero.hitbox.x, hero.hitbox.y + hero.speedY, hero.hitbox.width, hero.hitbox.height, currentActiveEnemies[iterator].hitbox.x, currentActiveEnemies[iterator].hitbox.y, currentActiveEnemies[iterator].hitbox.width, currentActiveEnemies[iterator].hitbox.height)};

                    switch (currentActiveEnemies[iterator].type)
                    {
                    case ENEMY_TYPE_ZOMBIE:
                        if (collision.x != JO_FIXED_0 || collision.y != JO_FIXED_0)
                        {
                            hero.state = HIT;
                            hero.health--;

                            hero.speedX = hero.isFacingLeft ? toFIXED(HERO_DEFAULT_KNOCKBACK_HORIZONTALSPEED_RAW) : toFIXED(-HERO_DEFAULT_KNOCKBACK_HORIZONTALSPEED_RAW);
                            hero.speedY = HERO_DEFAULT_KNOCKBACK_VERTICALSPEED;
                        }
                        break;
                    }
                }
            }
        }

        // update sword hitbox while attacking
        if (hero.state == ATTACK && hero.swordCounter)
        {
            if (hero.swordCounter > HERO_DEFAULT_SWORD_COUNTER - HERO_DEAFULT_SWORD_STARTUP ||
                hero.swordCounter < HERO_DEAFULT_SWORD_RECOVERY)
            {
                hero.sword.active = false;
            }
            else
            {
                hero.sword.active = true;
            }

            // Count down and reset state on end
            if (--(hero.swordCounter) == 0)
            {
                hero.state = IDLE;
                hero.sword.active = false;
            }
        }

        // If we have an invulnerability timer, update it
        if (hero.invulnerability > 0)
        {
            hero.invulnerability--;
        }

        // Update hero position
        hero.x += hero.speedX;
        hero.y += hero.speedY;

        hero.hitbox.x = hero.x - (hero.hitbox.width / 2);
        hero.hitbox.y = hero.y - (hero.hitbox.height / 2) + toFIXED(3.2);

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

        // Set grounded flag
        if (hero.speedY != JO_FIXED_0)
        {
            hero.isGrounded = false;
        }

        hero_handleStateUpdate();
        break;
    default:
        break;
    }
}