#ifndef __COLLISION_H__
#define __COLLISION_H__

FIXED detectCollisionX(const FIXED x1, const FIXED y1, const FIXED width1, const FIXED height1, const FIXED x2, const FIXED y2, const FIXED width2, const FIXED height2);
FIXED detectCollisionY(const FIXED x1, const FIXED y1, const FIXED width1, const FIXED height1, const FIXED x2, const FIXED y2, const FIXED width2, const FIXED height2);
FIXED detectCollision(const FIXED speedX, const FIXED speedY, const FIXED x1, const FIXED y1, const FIXED width1, const FIXED height1, const FIXED x2, const FIXED y2, const FIXED width2, const FIXED height2);
#endif