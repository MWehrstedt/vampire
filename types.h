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
    CROUCHING,
    HIT,
    DYING
} herostate_e;

typedef enum
{
    E_NORMAL,
    E_HURT,
    E_DYING
} enemystate_e;

typedef struct
{
    FIXED x;
    FIXED y;
    FIXED width;
    FIXED height;
    short type;
} hitbox_t;

typedef struct
{
    FIXED x;
    FIXED y;
    FIXED width;
    FIXED height;
    short type;
    short attribute;
    bool active;
} dynamic_hitbox_t;

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
} collision_t;

typedef struct
{
    FIXED startframe;
    FIXED length;
    FIXED HEAD_translation[3];
    short HEAD_rotation[3];
    FIXED L_CALF_translation[3];
    short L_CALF_rotation[3];
    FIXED L_FARM_translation[3];
    short L_FARM_rotation[3];
    FIXED L_THIGH_translation[3];
    short L_THIGH_rotation[3];
    FIXED L_UARM_translation[3];
    short L_UARM_rotation[3];
    FIXED LOWER_translation[3];
    short LOWER_rotation[3];
    FIXED R_CALF_translation[3];
    short R_CALF_rotation[3];
    FIXED R_FARM_translation[3];
    short R_FARM_rotation[3];
    FIXED R_THIGH_translation[3];
    short R_THIGH_rotation[3];
    FIXED R_UARM_translation[3];
    short R_UARM_rotation[3];
    FIXED SHOULDER_translation[3];
    short SHOULDER_rotation[3];
    FIXED TORSO_translation[3];
    short TORSO_rotation[3];
    FIXED SWORD_translation[3];
    short SWORD_rotation[3];
} anim_hero_keyframe_t;

typedef struct
{
    FIXED startframe;
    FIXED length;
    FIXED HEAD_translation[3];
    short HEAD_rotation[3];
    FIXED L_CALF_translation[3];
    short L_CALF_rotation[3];
    FIXED L_FARM_translation[3];
    short L_FARM_rotation[3];
    FIXED L_THIGH_translation[3];
    short L_THIGH_rotation[3];
    FIXED L_UARM_translation[3];
    short L_UARM_rotation[3];
    FIXED LOWER_translation[3];
    short LOWER_rotation[3];
    FIXED R_CALF_translation[3];
    short R_CALF_rotation[3];
    FIXED R_FARM_translation[3];
    short R_FARM_rotation[3];
    FIXED R_THIGH_translation[3];
    short R_THIGH_rotation[3];
    FIXED R_UAM_translation[3];
    short R_UAM_rotation[3];
    FIXED SHOULDER_translation[3];
    short SHOULDER_rotation[3];
    FIXED TORSO_translation[3];
    short TORSO_rotation[3];
} mesh_death_keyframe_t;

typedef struct
{
    short id;
    bool loop;
    FIXED length;
    short numberKeyframes;
    const anim_hero_keyframe_t *frames;
    bool play;
} animation_t;

typedef struct
{
    FIXED x;
    FIXED y;
    FIXED z;
    FIXED speedX;
    FIXED speedY;
    bool isGrounded;
    bool isFacingLeft;
    hitbox_t hitbox;
    int currentKeyframe;
    FIXED counter;
    short health;
    const animation_t *currentAnimation;
    bool playAnimation;
} hero_t;

typedef struct
{
    short type;
    FIXED x;
    FIXED y;
    hitbox_t hitbox;
    enemystate_e state;
    short health;
    bool active;
    bool isFacingLeft;
    void (*update)(short idx);
    void (*draw)(short idx);
} enemy_t;

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