#pragma once
// THIS FILE WAS AUTO GENERATED BY uppaal2c.exe DO NOT MODIFY!!!

#include "uppaal2c.h"

#ifdef __cplusplus
extern "C" { 
#endif
// Channels
extern U2C_CHANNEL GLOBAL_CHANNEL_VAR_Apace; // brodcast chan Apace
extern U2C_CHANNEL GLOBAL_CHANNEL_VAR_Vpace; // brodcast chan Vpace
extern U2C_CHANNEL GLOBAL_CHANNEL_VAR_Asignal; // brodcast chan Asignal
extern U2C_CHANNEL GLOBAL_CHANNEL_VAR_Vsignal; // brodcast chan Vsignal
extern U2C_CHANNEL GLOBAL_CHANNEL_VAR_AlarmH; // brodcast chan AlarmH
extern U2C_CHANNEL GLOBAL_CHANNEL_VAR_AlarmL; // brodcast chan AlarmL
extern U2C_CHANNEL GLOBAL_CHANNEL_VAR_NoAlarm; // brodcast chan NoAlarm
extern U2C_CHANNEL GLOBAL_CHANNEL_VAR_HMmodechange; // urgent brodcast chan HMmodechange
extern U2C_CHANNEL GLOBAL_CHANNEL_VAR_testHM_random; // urgent brodcast chan testHM_random
extern U2C_CHANNEL GLOBAL_CHANNEL_VAR_testHM_manual; // urgent brodcast chan testHM_manual
extern U2C_CHANNEL GLOBAL_CHANNEL_VAR_testHM_test; // urgent brodcast chan testHM_test
extern U2C_CHANNEL GLOBAL_CHANNEL_VAR_testHM_gen_0; // urgent brodcast chan testHM_gen[0,1]
extern U2C_CHANNEL GLOBAL_CHANNEL_VAR_testHM_gen_1; // urgent brodcast chan testHM_gen[0,1]
extern U2C_CHANNEL GLOBAL_CHANNEL_VAR_Asense; // urgent brodcast chan Asense
extern U2C_CHANNEL GLOBAL_CHANNEL_VAR_Vsense; // urgent brodcast chan Vsense
extern U2C_CHANNEL GLOBAL_CHANNEL_VAR_PMmodechange; // urgent brodcast chan PMmodechange
extern U2C_CHANNEL GLOBAL_CHANNEL_VAR_testPM_normal; // urgent brodcast chan testPM_normal
extern U2C_CHANNEL GLOBAL_CHANNEL_VAR_testPM_sleep; // urgent brodcast chan testPM_sleep
extern U2C_CHANNEL GLOBAL_CHANNEL_VAR_testPM_sports; // urgent brodcast chan testPM_sports
extern U2C_CHANNEL GLOBAL_CHANNEL_VAR_testPM_manual; // urgent brodcast chan testPM_manual
extern U2C_CHANNEL GLOBAL_CHANNEL_VAR_testPM_gen_0; // urgent brodcast chan testPM_gen[0,1]
extern U2C_CHANNEL GLOBAL_CHANNEL_VAR_testPM_gen_1; // urgent brodcast chan testPM_gen[0,1]

#define TOTAL_CHANNEL_COUNT 22
extern U2C_CHANNEL* ALL_CHANNELS[TOTAL_CHANNEL_COUNT];

typedef struct {
        u2c_clk_t u2c_clk_t_GLOBAL_clkheart;
        u2c_clk_t u2c_clk_t_GLOBAL_clk_aa;
        u2c_clk_t u2c_clk_t_GLOBAL_clk_pvarp;
        const int int_GLOBAL_Normal_LRI;
        const int int_GLOBAL_Normal_URI;
        const int int_GLOBAL_Low_AVI;
        const int int_GLOBAL_Low_VRP;
        const int int_GLOBAL_Low_PVARP;
        const int int_GLOBAL_Low_PVAB;
        const int int_GLOBAL_High_MSTI;
        int int_GLOBAL_heartmode;
        int int_GLOBAL_pmmode;
        int int_GLOBAL_cur_avi;
        int int_GLOBAL_cur_avi_ext;
        int int_GLOBAL_cur_pvarp;
        int int_GLOBAL_cur_pvab;
        int int_GLOBAL_cur_vrp;
        int int_GLOBAL_cur_uri;
        int int_GLOBAL_cur_lri;
        int int_GLOBAL_cur_msti;
        u2c_clk_t u2c_clk_t_HM_DisplayAndAlarm_t;
        int int_HM_DisplayAndAlarm_aa_count;
        int int_HM_DisplayAndAlarm_aa_rate;
        u2c_clk_t u2c_clk_t_PM_Sensor_V_clkt;
        u2c_clk_t u2c_clk_t_PM_DisplayAndAlarm_t;
        int int_PM_DisplayAndAlarm_aa_count;
        int int_PM_DisplayAndAlarm_aa_rate;
        u2c_clk_t u2c_clk_t_Tester_HM_Predefined1_t;
        u2c_clk_t u2c_clk_t_Tester_HM_Predefined2_t;
        u2c_clk_t u2c_clk_t_Tester_HM_Predefined3_t;
        u2c_clk_t u2c_clk_t_Observer_LRI_t;
        u2c_clk_t u2c_clk_t_Observer_URI_t;
        u2c_clk_t u2c_clk_t_Observer_VRP_t;
        u2c_clk_t u2c_clk_t_Observer_AV_t;
} U2C_SYSTEM_STATE;

extern U2C_SYSTEM_STATE U2C_StateVars;

// Process - HM_ModeSwitch

extern U2C_TRANSITION HM_ModeSwitch_TRANS_Manual__Unnamed1__1;
extern U2C_TRANSITION HM_ModeSwitch_TRANS_Manual__Unnamed1__0;
extern U2C_TRANSITION HM_ModeSwitch_TRANS_Init__Unnamed1__0;
extern U2C_TRANSITION HM_ModeSwitch_TRANS_Init__Unnamed0__0;
extern U2C_TRANSITION HM_ModeSwitch_TRANS_Init__Unnamed1__1;
extern U2C_TRANSITION HM_ModeSwitch_TRANS_Manual__Unnamed3__0;
extern U2C_TRANSITION HM_ModeSwitch_TRANS_Unnamed1__Init__0;
extern U2C_TRANSITION HM_ModeSwitch_TRANS_Unnamed0__Manual__0;
extern U2C_TRANSITION HM_ModeSwitch_TRANS_Unnamed2__Manual__0;
extern U2C_TRANSITION HM_ModeSwitch_TRANS_Unnamed3__Manual__0;
extern U2C_TRANSITION HM_ModeSwitch_TRANS_Manual__Unnamed2__0;
extern U2C_STATENODE HM_ModeSwitch_STATE_Unnamed0;
extern U2C_STATENODE HM_ModeSwitch_STATE_Unnamed1;
extern U2C_STATENODE HM_ModeSwitch_STATE_Unnamed2;
extern U2C_STATENODE HM_ModeSwitch_STATE_Unnamed3;
extern U2C_STATENODE HM_ModeSwitch_STATE_Manual;
extern U2C_STATENODE HM_ModeSwitch_STATE_Init;
extern U2C_TASK HM_ModeSwitch_TASK;


// Process - HM_Asignal

extern U2C_TRANSITION HM_Asignal_TRANS_RHM__RHM__0;
extern U2C_TRANSITION HM_Asignal_TRANS_RHM__Disabled__0;
extern U2C_TRANSITION HM_Asignal_TRANS_Disabled__RHM__0;
extern U2C_STATENODE HM_Asignal_STATE_Disabled;
extern U2C_STATENODE HM_Asignal_STATE_RHM;
extern U2C_TASK HM_Asignal_TASK;


// Process - HM_Apace

extern U2C_TRANSITION HM_Apace_TRANS_AIdle__AIdle__0;
extern U2C_STATENODE HM_Apace_STATE_AIdle;
extern U2C_TASK HM_Apace_TASK;


// Process - HM_Vsignal

extern U2C_TRANSITION HM_Vsignal_TRANS_RHM__RHM__0;
extern U2C_TRANSITION HM_Vsignal_TRANS_Disabled__RHM__0;
extern U2C_TRANSITION HM_Vsignal_TRANS_RHM__Disabled__0;
extern U2C_STATENODE HM_Vsignal_STATE_Disabled;
extern U2C_STATENODE HM_Vsignal_STATE_RHM;
extern U2C_TASK HM_Vsignal_TASK;


// Process - HM_Vpace

extern U2C_TRANSITION HM_Vpace_TRANS_VIdle__VIdle__0;
extern U2C_STATENODE HM_Vpace_STATE_VIdle;
extern U2C_TASK HM_Vpace_TASK;


// Process - HM_Leds_Apace

extern U2C_TRANSITION HM_Leds_Apace_TRANS_On__Off__0;
extern U2C_TRANSITION HM_Leds_Apace_TRANS_Off__On__0;
extern U2C_STATENODE HM_Leds_Apace_STATE_On;
extern U2C_STATENODE HM_Leds_Apace_STATE_Off;
extern U2C_TASK HM_Leds_Apace_TASK;


// Process - HM_Leds_Asignal

extern U2C_TRANSITION HM_Leds_Asignal_TRANS_On__Off__0;
extern U2C_TRANSITION HM_Leds_Asignal_TRANS_Off__On__0;
extern U2C_STATENODE HM_Leds_Asignal_STATE_On;
extern U2C_STATENODE HM_Leds_Asignal_STATE_Off;
extern U2C_TASK HM_Leds_Asignal_TASK;


// Process - HM_Leds_Vpace

extern U2C_TRANSITION HM_Leds_Vpace_TRANS_On__Off__0;
extern U2C_TRANSITION HM_Leds_Vpace_TRANS_Off__On__0;
extern U2C_STATENODE HM_Leds_Vpace_STATE_On;
extern U2C_STATENODE HM_Leds_Vpace_STATE_Off;
extern U2C_TASK HM_Leds_Vpace_TASK;


// Process - HM_Leds_Vsignal

extern U2C_TRANSITION HM_Leds_Vsignal_TRANS_On__Off__0;
extern U2C_TRANSITION HM_Leds_Vsignal_TRANS_Off__On__0;
extern U2C_STATENODE HM_Leds_Vsignal_STATE_On;
extern U2C_STATENODE HM_Leds_Vsignal_STATE_Off;
extern U2C_TASK HM_Leds_Vsignal_TASK;


// Process - HM_DisplayAndAlarm

extern U2C_TRANSITION HM_DisplayAndAlarm_TRANS_Incr__Init__0;
extern U2C_TRANSITION HM_DisplayAndAlarm_TRANS_Init__ShowRate__0;
extern U2C_TRANSITION HM_DisplayAndAlarm_TRANS_ShowRate__Init__3;
extern U2C_TRANSITION HM_DisplayAndAlarm_TRANS_Init__Incr__0;
extern U2C_TRANSITION HM_DisplayAndAlarm_TRANS_Init__Incr__1;
extern U2C_TRANSITION HM_DisplayAndAlarm_TRANS_ShowRate__Init__1;
extern U2C_TRANSITION HM_DisplayAndAlarm_TRANS_ShowRate__Init__2;
extern U2C_TRANSITION HM_DisplayAndAlarm_TRANS_ShowRate__Init__0;
extern U2C_STATENODE HM_DisplayAndAlarm_STATE_ShowRate;
extern U2C_STATENODE HM_DisplayAndAlarm_STATE_Incr;
extern U2C_STATENODE HM_DisplayAndAlarm_STATE_Init;
extern U2C_TASK HM_DisplayAndAlarm_TASK;


// Process - PM_ModeSwitch

extern U2C_TRANSITION PM_ModeSwitch_TRANS_Unnamed4__Unnamed8__0;
extern U2C_TRANSITION PM_ModeSwitch_TRANS_Unnamed5__Unnamed8__0;
extern U2C_TRANSITION PM_ModeSwitch_TRANS_Unnamed6__Unnamed8__0;
extern U2C_TRANSITION PM_ModeSwitch_TRANS_Unnamed10__Manual__0;
extern U2C_TRANSITION PM_ModeSwitch_TRANS_Manual__Unnamed10__0;
extern U2C_TRANSITION PM_ModeSwitch_TRANS_Manual__Unnamed5__0;
extern U2C_TRANSITION PM_ModeSwitch_TRANS_Init__Unnamed7__0;
extern U2C_TRANSITION PM_ModeSwitch_TRANS_Manual__Unnamed6__0;
extern U2C_TRANSITION PM_ModeSwitch_TRANS_Manual__Unnamed9__0;
extern U2C_TRANSITION PM_ModeSwitch_TRANS_Init__Unnamed4__0;
extern U2C_TRANSITION PM_ModeSwitch_TRANS_Init__Unnamed5__0;
extern U2C_TRANSITION PM_ModeSwitch_TRANS_Init__Unnamed6__0;
extern U2C_TRANSITION PM_ModeSwitch_TRANS_Manual__Unnamed4__0;
extern U2C_TRANSITION PM_ModeSwitch_TRANS_Unnamed9__Manual__0;
extern U2C_TRANSITION PM_ModeSwitch_TRANS_Unnamed8__Init__0;
extern U2C_TRANSITION PM_ModeSwitch_TRANS_Unnamed7__Manual__0;
extern U2C_STATENODE PM_ModeSwitch_STATE_Unnamed4;
extern U2C_STATENODE PM_ModeSwitch_STATE_Unnamed5;
extern U2C_STATENODE PM_ModeSwitch_STATE_Unnamed6;
extern U2C_STATENODE PM_ModeSwitch_STATE_Unnamed7;
extern U2C_STATENODE PM_ModeSwitch_STATE_Unnamed8;
extern U2C_STATENODE PM_ModeSwitch_STATE_Unnamed9;
extern U2C_STATENODE PM_ModeSwitch_STATE_Unnamed10;
extern U2C_STATENODE PM_ModeSwitch_STATE_Manual;
extern U2C_STATENODE PM_ModeSwitch_STATE_Init;
extern U2C_TASK PM_ModeSwitch_TASK;


// Process - PM_Sensor_A

extern U2C_TRANSITION PM_Sensor_A_TRANS_ResetClk__WaitAVI__0;
extern U2C_TRANSITION PM_Sensor_A_TRANS_VEvent__Wait_PVARP__0;
extern U2C_TRANSITION PM_Sensor_A_TRANS_Wait_PVARP__Wait_URI__0;
extern U2C_TRANSITION PM_Sensor_A_TRANS_Wait_URI__Await__0;
extern U2C_TRANSITION PM_Sensor_A_TRANS_WaitAVI__VEvent__1;
extern U2C_TRANSITION PM_Sensor_A_TRANS_Await__ResetClk__0;
extern U2C_TRANSITION PM_Sensor_A_TRANS_Await__Aevent__0;
extern U2C_TRANSITION PM_Sensor_A_TRANS_Aevent__ResetClk__0;
extern U2C_TRANSITION PM_Sensor_A_TRANS_WaitAVI__VEvent__0;
extern U2C_STATENODE PM_Sensor_A_STATE_Aevent;
extern U2C_STATENODE PM_Sensor_A_STATE_Wait_URI;
extern U2C_STATENODE PM_Sensor_A_STATE_Wait_PVARP;
extern U2C_STATENODE PM_Sensor_A_STATE_VEvent;
extern U2C_STATENODE PM_Sensor_A_STATE_WaitAVI;
extern U2C_STATENODE PM_Sensor_A_STATE_ResetClk;
extern U2C_STATENODE PM_Sensor_A_STATE_Await;
extern U2C_TASK PM_Sensor_A_TASK;


// Process - PM_Sensor_V

extern U2C_TRANSITION PM_Sensor_V_TRANS_DoneVRP__Init__0;
extern U2C_TRANSITION PM_Sensor_V_TRANS_Init_PVAB__Wait_PVAB__0;
extern U2C_TRANSITION PM_Sensor_V_TRANS_VEvent__WaitVRP__0;
extern U2C_TRANSITION PM_Sensor_V_TRANS_Wait_PVAB__WaitVEvent__0;
extern U2C_TRANSITION PM_Sensor_V_TRANS_WaitVRP__DoneVRP__0;
extern U2C_TRANSITION PM_Sensor_V_TRANS_Init__Init_PVAB__0;
extern U2C_TRANSITION PM_Sensor_V_TRANS_Init__Init_PVAB__1;
extern U2C_TRANSITION PM_Sensor_V_TRANS_WaitVEvent__VEvent__0;
extern U2C_TRANSITION PM_Sensor_V_TRANS_Unnamed11__VEvent__0;
extern U2C_TRANSITION PM_Sensor_V_TRANS_Init__PVC__0;
extern U2C_TRANSITION PM_Sensor_V_TRANS_PVC__Init__0;
extern U2C_TRANSITION PM_Sensor_V_TRANS_WaitVEvent__Unnamed11__0;
extern U2C_STATENODE PM_Sensor_V_STATE_PVC;
extern U2C_STATENODE PM_Sensor_V_STATE_Unnamed11;
extern U2C_STATENODE PM_Sensor_V_STATE_DoneVRP;
extern U2C_STATENODE PM_Sensor_V_STATE_WaitVRP;
extern U2C_STATENODE PM_Sensor_V_STATE_VEvent;
extern U2C_STATENODE PM_Sensor_V_STATE_WaitVEvent;
extern U2C_STATENODE PM_Sensor_V_STATE_Wait_PVAB;
extern U2C_STATENODE PM_Sensor_V_STATE_Init_PVAB;
extern U2C_STATENODE PM_Sensor_V_STATE_Init;
extern U2C_TASK PM_Sensor_V_TASK;


// Process - PM_Pacer_AA

extern U2C_TRANSITION PM_Pacer_AA_TRANS_Adone__AVI_Wait__0;
extern U2C_TRANSITION PM_Pacer_AA_TRANS_AVI_Wait__PaceV__0;
extern U2C_TRANSITION PM_Pacer_AA_TRANS_PVC__PaceA__0;
extern U2C_TRANSITION PM_Pacer_AA_TRANS_Vevent__PaceA__0;
extern U2C_TRANSITION PM_Pacer_AA_TRANS_AVI_Wait__Vevent__0;
extern U2C_TRANSITION PM_Pacer_AA_TRANS_Vevent__Adone__0;
extern U2C_TRANSITION PM_Pacer_AA_TRANS_PaceV__Vevent__0;
extern U2C_TRANSITION PM_Pacer_AA_TRANS_Vevent__PVC__0;
extern U2C_TRANSITION PM_Pacer_AA_TRANS_PaceA__Adone__0;
extern U2C_TRANSITION PM_Pacer_AA_TRANS_PVC__PMManualMode__0;
extern U2C_TRANSITION PM_Pacer_AA_TRANS_PaceA__PMManualMode__0;
extern U2C_TRANSITION PM_Pacer_AA_TRANS_Adone__PMManualMode__0;
extern U2C_TRANSITION PM_Pacer_AA_TRANS_Vevent__PMManualMode__0;
extern U2C_TRANSITION PM_Pacer_AA_TRANS_PVC__Adone__0;
extern U2C_TRANSITION PM_Pacer_AA_TRANS_PMManualMode__AVI_Wait__0;
extern U2C_TRANSITION PM_Pacer_AA_TRANS_AVI_Wait__PMManualMode__0;
extern U2C_STATENODE PM_Pacer_AA_STATE_PaceV;
extern U2C_STATENODE PM_Pacer_AA_STATE_PMManualMode;
extern U2C_STATENODE PM_Pacer_AA_STATE_Adone;
extern U2C_STATENODE PM_Pacer_AA_STATE_PVC;
extern U2C_STATENODE PM_Pacer_AA_STATE_PaceA;
extern U2C_STATENODE PM_Pacer_AA_STATE_Vevent;
extern U2C_STATENODE PM_Pacer_AA_STATE_AVI_Wait;
extern U2C_TASK PM_Pacer_AA_TASK;


// Process - PM_Leds_Apace

extern U2C_TRANSITION PM_Leds_Apace_TRANS_On__Off__0;
extern U2C_TRANSITION PM_Leds_Apace_TRANS_Off__On__0;
extern U2C_STATENODE PM_Leds_Apace_STATE_On;
extern U2C_STATENODE PM_Leds_Apace_STATE_Off;
extern U2C_TASK PM_Leds_Apace_TASK;


// Process - PM_Leds_Asense

extern U2C_TRANSITION PM_Leds_Asense_TRANS_On__Off__0;
extern U2C_TRANSITION PM_Leds_Asense_TRANS_Off__On__0;
extern U2C_STATENODE PM_Leds_Asense_STATE_On;
extern U2C_STATENODE PM_Leds_Asense_STATE_Off;
extern U2C_TASK PM_Leds_Asense_TASK;


// Process - PM_Leds_Vpace

extern U2C_TRANSITION PM_Leds_Vpace_TRANS_On__Off__0;
extern U2C_TRANSITION PM_Leds_Vpace_TRANS_Off__On__0;
extern U2C_STATENODE PM_Leds_Vpace_STATE_On;
extern U2C_STATENODE PM_Leds_Vpace_STATE_Off;
extern U2C_TASK PM_Leds_Vpace_TASK;


// Process - PM_Leds_Vsense

extern U2C_TRANSITION PM_Leds_Vsense_TRANS_On__Off__0;
extern U2C_TRANSITION PM_Leds_Vsense_TRANS_Off__On__0;
extern U2C_STATENODE PM_Leds_Vsense_STATE_On;
extern U2C_STATENODE PM_Leds_Vsense_STATE_Off;
extern U2C_TASK PM_Leds_Vsense_TASK;


// Process - PM_DisplayAndAlarm

extern U2C_TRANSITION PM_DisplayAndAlarm_TRANS_Incr__Init__0;
extern U2C_TRANSITION PM_DisplayAndAlarm_TRANS_Init__ShowRate__0;
extern U2C_TRANSITION PM_DisplayAndAlarm_TRANS_ShowRate__Init__3;
extern U2C_TRANSITION PM_DisplayAndAlarm_TRANS_Init__Incr__0;
extern U2C_TRANSITION PM_DisplayAndAlarm_TRANS_Init__Incr__1;
extern U2C_TRANSITION PM_DisplayAndAlarm_TRANS_ShowRate__Init__1;
extern U2C_TRANSITION PM_DisplayAndAlarm_TRANS_ShowRate__Init__2;
extern U2C_TRANSITION PM_DisplayAndAlarm_TRANS_ShowRate__Init__0;
extern U2C_STATENODE PM_DisplayAndAlarm_STATE_ShowRate;
extern U2C_STATENODE PM_DisplayAndAlarm_STATE_Incr;
extern U2C_STATENODE PM_DisplayAndAlarm_STATE_Init;
extern U2C_TASK PM_DisplayAndAlarm_TASK;


// Process - Tester_HM_Random

extern U2C_TRANSITION Tester_HM_Random_TRANS_Unnamed13__Unnamed12__0;
extern U2C_STATENODE Tester_HM_Random_STATE_Unnamed12;
extern U2C_STATENODE Tester_HM_Random_STATE_Unnamed13;
extern U2C_TASK Tester_HM_Random_TASK;


// Process - Tester_HM_Predefined1

extern U2C_TRANSITION Tester_HM_Predefined1_TRANS_VAdelay__GenA__0;
extern U2C_TRANSITION Tester_HM_Predefined1_TRANS_Unnamed17__GenA__0;
extern U2C_TRANSITION Tester_HM_Predefined1_TRANS_GenA__AVdelay__0;
extern U2C_TRANSITION Tester_HM_Predefined1_TRANS_AVdelay__VAdelay__0;
extern U2C_STATENODE Tester_HM_Predefined1_STATE_VAdelay;
extern U2C_STATENODE Tester_HM_Predefined1_STATE_AVdelay;
extern U2C_STATENODE Tester_HM_Predefined1_STATE_GenA;
extern U2C_STATENODE Tester_HM_Predefined1_STATE_Unnamed17;
extern U2C_TASK Tester_HM_Predefined1_TASK;


// Process - Tester_HM_Predefined2

extern U2C_TRANSITION Tester_HM_Predefined2_TRANS_VAdelay__GenA__0;
extern U2C_TRANSITION Tester_HM_Predefined2_TRANS_Unnamed18__GenA__0;
extern U2C_TRANSITION Tester_HM_Predefined2_TRANS_GenA__AVdelay__0;
extern U2C_TRANSITION Tester_HM_Predefined2_TRANS_AVdelay__VAdelay__0;
extern U2C_STATENODE Tester_HM_Predefined2_STATE_VAdelay;
extern U2C_STATENODE Tester_HM_Predefined2_STATE_AVdelay;
extern U2C_STATENODE Tester_HM_Predefined2_STATE_GenA;
extern U2C_STATENODE Tester_HM_Predefined2_STATE_Unnamed18;
extern U2C_TASK Tester_HM_Predefined2_TASK;


// Process - Tester_HM_Predefined3

extern U2C_TRANSITION Tester_HM_Predefined3_TRANS_VAdelay__GenA__0;
extern U2C_TRANSITION Tester_HM_Predefined3_TRANS_Unnamed19__GenA__0;
extern U2C_TRANSITION Tester_HM_Predefined3_TRANS_GenA__AVdelay__0;
extern U2C_TRANSITION Tester_HM_Predefined3_TRANS_AVdelay__VAdelay__0;
extern U2C_STATENODE Tester_HM_Predefined3_STATE_VAdelay;
extern U2C_STATENODE Tester_HM_Predefined3_STATE_AVdelay;
extern U2C_STATENODE Tester_HM_Predefined3_STATE_GenA;
extern U2C_STATENODE Tester_HM_Predefined3_STATE_Unnamed19;
extern U2C_TASK Tester_HM_Predefined3_TASK;


// Process - Tester_HM_HeIsDeadJim

extern U2C_TRANSITION Tester_HM_HeIsDeadJim_TRANS_DoNothing__DoNothing__0;
extern U2C_STATENODE Tester_HM_HeIsDeadJim_STATE_DoNothing;
extern U2C_TASK Tester_HM_HeIsDeadJim_TASK;


// Process - Observer_PS

extern U2C_TRANSITION Observer_PS_TRANS_Apaced__Observer__0;
extern U2C_TRANSITION Observer_PS_TRANS_Asensed__Observer__0;
extern U2C_TRANSITION Observer_PS_TRANS_Asignalled__Observer__0;
extern U2C_TRANSITION Observer_PS_TRANS_Vpaced__Observer__0;
extern U2C_TRANSITION Observer_PS_TRANS_Vsensed__Observer__0;
extern U2C_TRANSITION Observer_PS_TRANS_Vsignalled__Observer__0;
extern U2C_TRANSITION Observer_PS_TRANS_Observer__Apaced__0;
extern U2C_TRANSITION Observer_PS_TRANS_Observer__Asignalled__0;
extern U2C_TRANSITION Observer_PS_TRANS_Observer__Asensed__0;
extern U2C_TRANSITION Observer_PS_TRANS_Observer__Vsensed__0;
extern U2C_TRANSITION Observer_PS_TRANS_Observer__Vpaced__0;
extern U2C_TRANSITION Observer_PS_TRANS_Observer__Vsignalled__0;
extern U2C_STATENODE Observer_PS_STATE_Vsensed;
extern U2C_STATENODE Observer_PS_STATE_Asensed;
extern U2C_STATENODE Observer_PS_STATE_Vsignalled;
extern U2C_STATENODE Observer_PS_STATE_Vpaced;
extern U2C_STATENODE Observer_PS_STATE_Asignalled;
extern U2C_STATENODE Observer_PS_STATE_Apaced;
extern U2C_STATENODE Observer_PS_STATE_Observer;
extern U2C_TASK Observer_PS_TASK;


// Process - Observer_LRI

extern U2C_TRANSITION Observer_LRI_TRANS_S3__S2__0;
extern U2C_TRANSITION Observer_LRI_TRANS_S1__S2__0;
extern U2C_TRANSITION Observer_LRI_TRANS_S1__S2__1;
extern U2C_TRANSITION Observer_LRI_TRANS_S2__S3__0;
extern U2C_TRANSITION Observer_LRI_TRANS_S2__S3__1;
extern U2C_STATENODE Observer_LRI_STATE_S3;
extern U2C_STATENODE Observer_LRI_STATE_S2;
extern U2C_STATENODE Observer_LRI_STATE_S1;
extern U2C_TASK Observer_LRI_TASK;


// Process - Observer_URI

extern U2C_TRANSITION Observer_URI_TRANS_S3__S2__0;
extern U2C_TRANSITION Observer_URI_TRANS_S1__S2__0;
extern U2C_TRANSITION Observer_URI_TRANS_S1__S2__1;
extern U2C_TRANSITION Observer_URI_TRANS_S2__S3__0;
extern U2C_TRANSITION Observer_URI_TRANS_S2__S2__0;
extern U2C_STATENODE Observer_URI_STATE_S3;
extern U2C_STATENODE Observer_URI_STATE_S2;
extern U2C_STATENODE Observer_URI_STATE_S1;
extern U2C_TASK Observer_URI_TASK;


// Process - Observer_VRP

extern U2C_TRANSITION Observer_VRP_TRANS_S3__S2__0;
extern U2C_TRANSITION Observer_VRP_TRANS_S1__S2__0;
extern U2C_TRANSITION Observer_VRP_TRANS_S1__S2__1;
extern U2C_TRANSITION Observer_VRP_TRANS_S2__S3__0;
extern U2C_TRANSITION Observer_VRP_TRANS_S2__S3__1;
extern U2C_STATENODE Observer_VRP_STATE_S3;
extern U2C_STATENODE Observer_VRP_STATE_S2;
extern U2C_STATENODE Observer_VRP_STATE_S1;
extern U2C_TASK Observer_VRP_TASK;


// Process - Observer_AV

extern U2C_TRANSITION Observer_AV_TRANS_BAD1__S6__0;
extern U2C_TRANSITION Observer_AV_TRANS_BAD2__S5__0;
extern U2C_TRANSITION Observer_AV_TRANS_S7__S3__0;
extern U2C_TRANSITION Observer_AV_TRANS_S4__S5__1;
extern U2C_TRANSITION Observer_AV_TRANS_S1__S2__0;
extern U2C_TRANSITION Observer_AV_TRANS_S1__S2__1;
extern U2C_TRANSITION Observer_AV_TRANS_S4__S5__0;
extern U2C_TRANSITION Observer_AV_TRANS_S3__S35__0;
extern U2C_TRANSITION Observer_AV_TRANS_S3__S4__0;
extern U2C_TRANSITION Observer_AV_TRANS_S2__S3__1;
extern U2C_TRANSITION Observer_AV_TRANS_S2__S3__0;
extern U2C_TRANSITION Observer_AV_TRANS_S35__S5__1;
extern U2C_TRANSITION Observer_AV_TRANS_S5__S4__0;
extern U2C_TRANSITION Observer_AV_TRANS_S35__BAD2__0;
extern U2C_TRANSITION Observer_AV_TRANS_S35__S5__0;
extern U2C_TRANSITION Observer_AV_TRANS_S5__S4__1;
extern U2C_TRANSITION Observer_AV_TRANS_S6__S7__1;
extern U2C_TRANSITION Observer_AV_TRANS_S5__S6__0;
extern U2C_TRANSITION Observer_AV_TRANS_S5__BAD1__0;
extern U2C_TRANSITION Observer_AV_TRANS_S6__S7__0;
extern U2C_STATENODE Observer_AV_STATE_BAD2;
extern U2C_STATENODE Observer_AV_STATE_S35;
extern U2C_STATENODE Observer_AV_STATE_BAD1;
extern U2C_STATENODE Observer_AV_STATE_S7;
extern U2C_STATENODE Observer_AV_STATE_S6;
extern U2C_STATENODE Observer_AV_STATE_S5;
extern U2C_STATENODE Observer_AV_STATE_S1;
extern U2C_STATENODE Observer_AV_STATE_S4;
extern U2C_STATENODE Observer_AV_STATE_S3;
extern U2C_STATENODE Observer_AV_STATE_S2;
extern U2C_TASK Observer_AV_TASK;



#define U2C_TOTAL_TASK_COUNT 29
extern U2C_TASK* U2C_TASK_LIST[U2C_TOTAL_TASK_COUNT];


#ifdef __cplusplus
} // extern "C" 
#endif