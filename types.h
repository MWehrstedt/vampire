#ifndef __TYPES_H_
#define __TYPES_H_

typedef enum
{
    MAINMENU = 0,
    GAMEPLAY = 1,
    ANIMTEST = 2,
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
    short health;
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
    FIXED startframe;
    FIXED length;
    FIXED TORSO_baseTranslation[3];
    FIXED TORSO_translation[3];
    short TORSO_baseRotation[3];
    short TORSO_rotation[3];
    FIXED SHOULDER_baseTranslation[3];
    FIXED SHOULDER_translation[3];
    short SHOULDER_baseRotation[3];
    short SHOULDER_rotation[3];
    FIXED R_UARM_baseTranslation[3];
    FIXED R_UARM_translation[3];
    short R_UARM_baseRotation[3];
    short R_UARM_rotation[3];
    FIXED R_THIGH_baseTranslation[3];
    FIXED R_THIGH_translation[3];
    short R_THIGH_baseRotation[3];
    short R_THIGH_rotation[3];
    FIXED R_FARM_baseTranslation[3];
    FIXED R_FARM_translation[3];
    short R_FARM_baseRotation[3];
    short R_FARM_rotation[3];
    FIXED R_CALF_baseTranslation[3];
    FIXED R_CALF_translation[3];
    short R_CALF_baseRotation[3];
    short R_CALF_rotation[3];
    FIXED LOWER_baseTranslation[3];
    FIXED LOWER_translation[3];
    short LOWER_baseRotation[3];
    short LOWER_rotation[3];
    FIXED L_UARM_baseTranslation[3];
    FIXED L_UARM_translation[3];
    short L_UARM_baseRotation[3];
    short L_UARM_rotation[3];
    FIXED L_THIGH_baseTranslation[3];
    FIXED L_THIGH_translation[3];
    short L_THIGH_baseRotation[3];
    short L_THIGH_rotation[3];
    FIXED L_FARM_baseTranslation[3];
    FIXED L_FARM_translation[3];
    short L_FARM_baseRotation[3];
    short L_FARM_rotation[3];
    FIXED L_CALF_baseTranslation[3];
    FIXED L_CALF_translation[3];
    short L_CALF_baseRotation[3];
    short L_CALF_rotation[3];
    FIXED HEAD_baseTranslation[3];
    FIXED HEAD_translation[3];
    short HEAD_baseRotation[3];
    short HEAD_rotation[3];
} anim_hero_keyframe_t;

typedef struct
{
    short id;
    bool loop;
    FIXED length;
    const anim_hero_keyframe_t *frames;
    bool play;
} animation_t;

typedef struct
{
    short currentChunk;
    void (*const *display_geometry)(void);
    short chunks;
    short hitboxCount;
    short dynamicHitboxCount;
    FIXED boundaryLeft;
    FIXED boundaryRight;
    FIXED boundaryTop;
    FIXED boundaryBottom;
} level_t;

#endif