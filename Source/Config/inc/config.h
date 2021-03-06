/***********************************************************************
*   Copyright (C) Huizhou Desay SV Automotive Co., Ltd.				   *
*				  All Rights Reserved.          					   *
*   Department : RN R&D SW1      									   *
*   AUTHOR	   :            										   *
************************************************************************
* Object        : 
* Module        : 
* Instance      : 
* Description   : 
*-----------------------------------------------------------------------
* Version: 
* Date: 
* Author: 
***********************************************************************/
/*-History--------------------------------------------------------------
* Version       Date    Name    Changes and comments
------------------------------------------------------------------------
* 0.1	   Jun 26,2016   PEI Jingli  Initial version
------------------------------------------------------------------------
* 0.2	   Jun 29,2016   LIU Chenxi  Correct errors during merging	
------------------------------------------------------------------------
* 0.3	   July 07,2016  PEI Jingli  Adapt 64pin MCU
------------------------------------------------------------------------
* 0.4          July 07,2016  LIU Chenxi  Refine code structure
------------------------------------------------------------------------
* 0.5	   Sep 12,2016  PEI Jingli  Add a switch EEL_USED
* ----------------------------------------------------------------------
* 0.6          Dec 20,2016 ShangQiuju  add config according using hw.
*-----------------------------------------------------------------------
* 0.7          Dec 21,2016    PeiJingLi   Add Ds03h hw version select option.
*-----------------------------------------------------------------------
* 0.8          Jan 06,2017    ShangQiuju  Add config file path according hw using.
*----------------------------------------------------------------------
* 0.9          Jan 13,2017    ZhangJie       Fix Coverity Warning.
*-----------------------------------------------------------------------
* 1.0   	   Jan 16,2017    RenWeimin  Add test code.
*-----------------------------------------------------------------------
* 1.1   	   Jan 24,2017    ZhangJie     Fix Coverity warning phase2.
*-----------------------------------------------------------------------
* 1.2   	   Feb 09,2017    ZhangJie     Add timermng config file path.
*-----------------------------------------------------------------------
* 1.3   	   Feb 14,2017    ShangQiuju     Add DEEPSTOP_FLAG_ADDRESS for deepstop dataflash address.
*-----------------------------------------------------------------------
* 1.4          Mar 20,2017   PeiJingLi   Delete EEL_USED micro.
*-----------------------------------------------------------------------
* 1.5          Apr 13,2017    ZhangJie     Add VICP basic software version.
*=====================================================================*/
//#ifndef _CONFIG_H_
//#define _CONFIG_H_ 
//#include "..\..\BSW\MCUPlatform\McuPlatform_cfg\Core_cfg\CORE_CFG.H"
//#define  VICP_BSW_version  "RCB_10.0"

/*MCU define*/ 
//#define  NOTIFY_MACRO_DEFINITION_ERROR   WARNING("ERROR!!!")  

//#define MCU_RH850_F1L_144


//#define PIN48    0U
//#define PIN64    1U
//#define PIN80    2U
//#define PIN100    3U
//#define PIN144    4U
//#define PIN176    5U

//#ifdef MCU_RH850_F1L_144
// #define MCU_PIN	PIN144
// #include "mcu_144pin_cc.h"
//#else

//#ifdef MCU_RH850_F1L_100
// #define MCU_PIN	PIN100
// #include "mcu_100pin_cc.h"
//#else

//#ifdef MCU_RH850_F1L_64
// #define MCU_PIN    PIN64
// #include "mcu_64pin_cc.h"
//#else
//bad scenairo, no effect definition
// NOTIFY_MACRO_DEFINITION_ERROR   
//#endif  //for MCU_RH850_F1L_64

//#endif  //for MCU_RH850_F1L_100

//#endif  //for MCU_RH850_F1L_144


//#ifdef MCU_PLATFORM_TEMPLATE_100
//#define MCU_PIN    PIN100
//#define DEMO_HAL_ENABLED  /*turn on HAL DEMO*/
//#define HAL_CFG_H_PATH   "HAL_cfg.h"	
//#define SIG_CFG_H_PATH "Signal_cfg.h"
//#define TIMERMNG_CFG_H_PATH "TimerMng_Cfg.h"
//#define USE_ACC_WAKEUP_OPTION /* Acc wakeup switch */
//#define POWERVOLTAGEWAKEUP	/*Voltage wakeup switch*/
//#define USE_CAN_WAKEUP_OPTION /* Can wakeup switch */
//#define USE_REVERSE_INTERRUPT_OPTION /* Reverse signal wakeup switch */
//#endif
//#ifdef MCU_PLATFORM_TEMPLATE_64
//#define MCU_PIN    PIN64
//#define DEMO_HAL_ENABLED  /*turn on HAL DEMO*/
//#define HAL_CFG_H_PATH   "HAL_cfg.h"	
//#define SIG_CFG_H_PATH "Signal_cfg.h"
//#define TIMERMNG_CFG_H_PATH "TimerMng_Cfg.h"

//#define USE_ACC_WAKEUP_OPTION
//#define USE_CAN_WAKEUP_OPTION
//#define USE_REVERSE_INTERRUPT_OPTION
//#endif

//#ifndef MCU_PIN
//    NOTIFY_MACRO_DEFINITION_ERROR   
//#endif 

//#define UPGRADE_FLAG_ADDRESS 0U    /*real address is 0xFF200000~0xFF200040*/


/******************************CAN*************************************/
//#define CAN_BUS_OPTION
//#define CAN_DIAG_OPTION
//#define EOL_OPTION
//#define EOL_UART UART_3


/*********************for keyboard********************/
//#define CT_G4_IPC
//#define DS03h_KEY_OPTION

//#endif /*_CONFIG_H_*/

#ifndef _CONFIG_H_
#define _CONFIG_H_ 
#include "..\..\BSW\MCUPlatform\McuPlatform_cfg\Core_cfg\CORE_CFG.H"

//MCU define 
#define  NOTIFY_MACRO_DEFINITION_ERROR   WARNING("ERROR!!!")  

#define MCU_RH850_F1L_144
//#define MCU_RH850_F1L_100
//#define MCU_RH850_F1L_64

#define PIN48    0
#define PIN64    1
#define PIN80    2
#define PIN100    3
#define PIN144    4
#define PIN176    5

#ifdef MCU_RH850_F1L_144
 #define MCU_PIN	PIN144
 #include "mcu_144pin_cc.h"
#else

#ifdef MCU_RH850_F1L_100
 #define MCU_PIN	PIN100
 #include "mcu_100pin_cc.h"
#else

#ifdef MCU_RH850_F1L_64
 #define MCU_PIN    PIN64
 #include "mcu_64pin_cc.h"
#else
//bad scenairo, no effect definition
 NOTIFY_MACRO_DEFINITION_ERROR   
#endif  //for MCU_RH850_F1L_64

#endif  //for MCU_RH850_F1L_100

#endif  //for MCU_RH850_F1L_144
#define __on_lbss __attribute__((section(".lbss")))
#define __on_ldata __attribute__((section(".ldata")))

#define __on_rbss __attribute__((section(".rbss")))
#define __on_rdata __attribute__((section(".rdata")))

#define XPRINTF_ENABLE 0

/* Define CPU CLOCK */
#define  CPU_CLOCK_HZ       CPUCLK_NORMAL_HZ

#define UPGRADE_FLAG_ADDRESS 0    //real address is 0xFF200000+UPGRADE_FLAG_ADDRESS

/* Dataflash simulate EEPROM switch */
#define EEL_USED

#define USE_ACC_WAKEUP_OPTION
//#define USE_CAN_WAKEUP_OPTION


/*********************for keyboard********************/
#define CT_G4_IPC
#define DS03h_KEY_OPTION

/******************************CAN*************************************/
#define CAN_BUS_OPTION
/*
#define CANTXSIG_PASS_1
#include "Cansig_def.h"
#define CANRXSIG_PASS_1
#include "Cansig_def.h"
*/
#define CAN_DIAG_OPTION
#define CANDTC_DIAG_LED_CIRCUIT

//#define EOL_UART UART_3
//#define M4_UART (UART_4)
#define EOL_UART UART_3
#define M4_UART (UART_4)

#define UPGRADE_FLAG_ADDRESS 0U      /*real address is 0xFF200000~0xFF200040*/
#define F190_STORE_ADDRESS 0x200U    /*real address is 0xFF200000+F190_STORE_ADDRESS*/
#define F198_STORE_ADDRESS 0x140U    /*real address is 0xFF200000+F198_STORE_ADDRESS*/
#define F199_STORE_ADDRESS 0x180U    /*real address is 0xFF200000+F199_STORE_ADDRESS*/
#define F19D_STORE_ADDRESS 0x2C0U    /*real address is 0xFF200000+F19D_STORE_ADDRESS*/
#define F1A0_STORE_ADDRESS 0x300U    /*real address is 0xFF200000+F1A0_STORE_ADDRESS*/
#define F1A1_STORE_ADDRESS 0x350U    /*real address is 0xFF200000+F1A1_STORE_ADDRESS*/
#define F1A7_STORE_ADDRESS 0x380U    /*real address is 0xFF200000+F1A7_STORE_ADDRESS*/

#endif /*_CONFIG_H_*/	
/****************************** END OF FILE ***************************/

