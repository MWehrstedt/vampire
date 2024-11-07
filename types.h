#ifndef __TYPES_H_
#define __TYPES_H_

typedef struct {
    FIXED x;
    FIXED y;
    FIXED z;
    FIXED width;
    FIXED height;
    FIXED depth;
} hitbox_t;

typedef struct
{
    FIXED x;
    FIXED y;
    FIXED z;
    int rotationX;
    int rotationY;
    int rotationZ;
    FIXED speedX;
    FIXED speedY;
    FIXED speedZ;
    bool isGrounded;
    hitbox_t hitbox;
} hero_t;

typedef struct
{
    jo_camera cam;
    FIXED x;
    FIXED y;
    FIXED z;
} camera_t;

typedef struct 
{
    FIXED max;
    FIXED step;
} gravity_t;

typedef struct
{
    FIXED x;
    FIXED y;
    FIXED z;
} collision_t;

#endif