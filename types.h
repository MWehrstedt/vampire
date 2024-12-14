#ifndef __TYPES_H_
#define __TYPES_H_

typedef enum
{
    MAINMENU = 0,
    GAMEPLAY = 1,
    FINANCES = 2,
    PAUSED = 3,
    MENU = 4
} gamestate_e;

typedef enum
{
    IDLE,
    WALKING,
    ATTACK,
    JUMP,
    HIT,
    DYING
} herostate_e;

typedef struct
{
    FIXED x;
    FIXED y;
    FIXED z;
    FIXED width;
    FIXED height;
    FIXED depth;
    short type;
} hitbox_t;

typedef struct
{
    FIXED x;
    FIXED y;
    FIXED z;
    FIXED width;
    FIXED height;
    FIXED depth;
    short type;
    short attribute;
} dynamic_hitbox_t;

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
    int currentKeyframe;
    FIXED counter;
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

typedef struct
{
    FIXED startframe;
    FIXED length;
    FIXED translation[3];
    short rotation[3];
    FIXED baseTranslation[3];
    short baseRotation[3];
} keyframe_t;

typedef struct
{
    short id;
    bool loop;
    FIXED length;
    const keyframe_t *frames;
    bool play;
} animation_t;

typedef struct
{
    short currentChunk;
    void (*const *display_geometry)(void);
    short chunks;
} level_t;

#endif