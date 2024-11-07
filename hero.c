#include <jo/jo.h>
#include "collision.h"
#include "hero.h"
#include "levels/level1.h"
#include "vars.h"

hero_t hero;
FIXED jumpHeight = toFIXED(3.1f);
FIXED heroWalkSpeed = toFIXED(1.1f);

void updateHero(void)
{
    switch (gamestate)
    {
    case GAMEPLAY:
        if (hero.speedY < gravity.max)
            hero.speedY += gravity.step;

        for (iterator = 0; iterator < 4; iterator++)
        {
            collision = (collision_t){
                .x = detectCollisionX(hero.hitbox.x + hero.speedX, hero.hitbox.y, hero.hitbox.width, hero.hitbox.height, level01Hitboxes[iterator].x, level01Hitboxes[iterator].y, level01Hitboxes[iterator].width, level01Hitboxes[iterator].height),
                .y = detectCollisionY(hero.hitbox.x, hero.hitbox.y + hero.speedY, hero.hitbox.width, hero.hitbox.height, level01Hitboxes[iterator].x, level01Hitboxes[iterator].y, level01Hitboxes[iterator].width, level01Hitboxes[iterator].height)};

            // detectCollision(hero.speedX, hero.speedY,
            //                 hero.hitbox.x, hero.hitbox.y,
            //                 hero.hitbox.width, hero.hitbox.height,
            //                 level01Hitboxes[iterator].x, level01Hitboxes[iterator].y,
            //                 level01Hitboxes[iterator].width, level01Hitboxes[iterator].height);
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
        }

        hero.x += hero.speedX;
        hero.y += hero.speedY;

        hero.hitbox.x = hero.x - (hero.hitbox.width / 2);
        hero.hitbox.y = hero.y - (hero.hitbox.height / 2);

        // hero.z += hero.speedZ;

        camera.x = hero.x;
        camera.y = hero.y - 10;

        if (hero.speedY != JO_FIXED_0)
        {
            hero.isGrounded = false;
        }
        // if (hero.speedX > 0.0f)
        //     hero.speedX -= friction;
        // else if (hero.speedX < 0.0f)
        //     hero.speedX += friction;

        break;
    default:
        break;
    }
}
