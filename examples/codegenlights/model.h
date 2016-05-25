#pragma once
// THIS FILE WAS AUTO GENERATED BY uppaal2c.exe DO NOT MODIFY!!!

#include "uppaal2c.h"

#ifdef __cplusplus
extern "C" { 
#endif
// Channels
extern U2C_CHANNEL GLOBAL_CHANNEL_VAR_press; // chan press

#define TOTAL_CHANNEL_COUNT 1
extern U2C_CHANNEL* ALL_CHANNELS[TOTAL_CHANNEL_COUNT];

typedef struct {
        u2c_clk_t u2c_clk_t_GLOBAL_y;
} U2C_SYSTEM_STATE;

extern U2C_SYSTEM_STATE U2C_StateVars;

// Process - Light

extern U2C_TRANSITION Light_TRANS_low__off__0;
extern U2C_TRANSITION Light_TRANS_off__low__0;
extern U2C_TRANSITION Light_TRANS_bright__off__0;
extern U2C_TRANSITION Light_TRANS_low__bright__0;
extern U2C_STATENODE Light_STATE_bright;
extern U2C_STATENODE Light_STATE_low;
extern U2C_STATENODE Light_STATE_off;
extern U2C_TASK Light_TASK;



#define U2C_TOTAL_TASK_COUNT 1
extern U2C_TASK* U2C_TASK_LIST[U2C_TOTAL_TASK_COUNT];


#ifdef __cplusplus
} // extern "C" 
#endif