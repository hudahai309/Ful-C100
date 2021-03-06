/* -----------------------------------------------------------------------------
  Filename:    ccl_cfg.h
  Description: Toolversion: 02.03.11.01.70.09.79.00.00.00
               
               Serial Number: CBD1700979
               Customer Info: Huizhou Desay SV Automotive Co., Ltd.
                              Package: CBD_Vector_SLP2
                              Micro: R7F7016213AFP
                              Compiler: Green Hills 2015.1.7
               
               
               Generator Fwk   : GENy 
               Generator Module: Ccl__core
               
               Configuration   : D:\Renesas_Platform\fawhq_c100_apa_mcu\Source\vicp\ComplexDriver\CANdriver\tool\CBD1700979 D00 Rh850 GreenHills FAW C100 APA.gny
               
               ECU: 
                       TargetSystem: Hw_Rh850Cpu
                       Compiler:     GreenHills
                       Derivates:    F1K
               
               Channel "Channel0":
                       Databasefile: D:\Renesas_Platform\fawhq_c100_apa_mcu\Source\vicp\ComplexDriver\CANdriver\tool\AB02_979_C100_APA_PublicCAN_V0.1_20210609.dbc
                       Bussystem:    CAN
                       Manufacturer: Vector
                       Node:         APA
               Channel "Channel1":
                       Databasefile: D:\Renesas_Platform\fawhq_c100_apa_mcu\Source\vicp\ComplexDriver\CANdriver\tool\AB02_979_C100_ADV_PrivateCAN_V0.1_20210629.dbc
                       Bussystem:    CAN
                       Manufacturer: Vector
                       Node:         ADV

 ----------------------------------------------------------------------------- */
/* -----------------------------------------------------------------------------
  C O P Y R I G H T
 -------------------------------------------------------------------------------
  Copyright (c) 2001-2015 by Vector Informatik GmbH. All rights reserved.
 
  This software is copyright protected and proprietary to Vector Informatik 
  GmbH.
  
  Vector Informatik GmbH grants to you only those rights as set out in the 
  license conditions.
  
  All other rights remain with Vector Informatik GmbH.
 -------------------------------------------------------------------------------
 ----------------------------------------------------------------------------- */

#if !defined(__CCL_CFG_H__)
#define __CCL_CFG_H__

#include "can_inc.h"
#include "il_inc.h"
#include "Nm.h"
#include "CanNm.h"
#include "NmCbdWrp.h"
#include "tpmc.h"
#include "desc.h"
#include "appdesc.h"
/***************************************************************************/ 
/* Version                  (abcd: Main version ab Sub Version cd )        */ 
/***************************************************************************/ 

#define CCL_DLL_VERSION  0x0201
#define CCL_DLL_BUGFIX_VERSION  0x00
#define CCL__COREDLL_VERSION                 0x0311u
#define CCL__COREDLL_RELEASE_VERSION         0x31u
/***************************************************************************/ 
/* Defines                                                                 */ 
/***************************************************************************/ 

#define C_ENABLE_CCL 

#define CCL_DISABLE_ERROR_HOOK  /* CclFatalError function is disabled */ 

#define CCL_DISABLE_DEBUG /* disables the debug mode and switches the assertions to on */ 

#define CCL_DISABLE_EMC_WAKEUP

#define CCL_DISABLE_WAKEUP_REG
#define CCL_ENABLE_INTERNAL_REQUEST
#define CCL_ENABLE_EXTERNAL_REQUEST
#define CCL_ENABLE_SLEEP_REPETITION
#define CCL_NM_TYPE_NONE

#define CCL_ENABLE_CANBEDDED_HANDLING
#define CCL_ENABLE_SCHEDULE_TASK
#define CCL_DISABLE_CONTAINER_TASK
#define CCL_DISABLE_STOP_MODE_ECU
#define CCL_DISABLE_POWER_DOWN_MODE_ECU
#define CCL_ENABLE_CUSTOMER_MODE_ECU
#define CCL_DISABLE_NET_STATE_RESTRICTION

#define CCL_DISABLE_TRCV_PORT_INT

#define CCL_ENABLE_SYSTEM_SHUTDOWN

#define CCL_ENABLE_INDEXED

#define CCL_ENABLE_SW_COM_STATE

#define CCL_DISABLE_MISSING_ACK_HANDLING

#define kCclNmCbdWrpChIndex 0

#define kCclNrOfSystemChannels 2

#define kCclNrOfChannels 2  /* number of used channels */

#define kCclNrOfNetworks 2  /* number of used networks */ 

#define CCL_DISABLE_MULTIPLE_NODES  /* no multiple nodes */ 

#define CCL_ENABLE_BUSOFF_START

#define CCL_ENABLE_BUSOFF_END

#define CCL_ENABLE_BUSSTART

#define kCclNetReqTableSize 2  /* size of network request tabless */
#define kCclNumberOfUser 3
#define kCclCycleTime 10


/* Communication Handles */
#define CCL_CanComRequestHandle    2
/***************************************************************************/ 
/* Macros                                                                  */ 
/***************************************************************************/ 


  /* *** Communication Request access macros *** */
#define CclSet_CanComRequestHandle()                                    CclRequestCommunication(CCL_CanComRequestHandle)


  /* *** Release Communication access macros *** */
#define CclRel_CanComRequestHandle()                                    CclReleaseCommunication(CCL_CanComRequestHandle)

extern void CclComStart(CanChannelHandle channel);
extern void CclComStop(CanChannelHandle channel);
extern void CclComWait(CanChannelHandle channel);
extern void CclComResume(CanChannelHandle channel);
extern void CCL_API_CALLBACK_TYPE ApplCclComStart(CanChannelHandle channel);
extern void CCL_API_CALLBACK_TYPE ApplCclComStop(CanChannelHandle channel);
extern void CCL_API_CALLBACK_TYPE ApplCclComWait(CanChannelHandle channel);
extern void CCL_API_CALLBACK_TYPE ApplCclComResume(CanChannelHandle channel);
extern void CclBusOffStart(CanChannelHandle channel);
extern void CclBusOffEnd(CanChannelHandle channel);
extern void CCL_API_CALLBACK_TYPE ApplCclBusOffStart(CanChannelHandle channel);
extern void CCL_API_CALLBACK_TYPE ApplCclBusOffEnd(CanChannelHandle channel);
extern void CCL_API_CALLBACK_TYPE ApplCclInit(CanChannelHandle channel);
extern void CCL_API_CALL_TYPE CclPollingTask(void); 
extern void CCL_API_CALLBACK_TYPE ApplCclInitTrcv( CanChannelHandle channel );
extern void CCL_API_CALLBACK_TYPE ApplCclWakeUpTrcv( CanChannelHandle channel );
extern void CCL_API_CALLBACK_TYPE ApplCclStandbyTrcv( CanChannelHandle channel );
extern void CCL_API_CALLBACK_TYPE ApplCclSleepTrcv( CanChannelHandle channel );
extern void CCL_API_CALL_TYPE CclScheduleTask(void);

/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 390049630
      #error "The magic number of the generated file <D:\Renesas_Platform\fawhq_c100_apa_mcu\Source\vicp\ComplexDriver\CANdriver\tool\gen979\ccl_cfg.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 390049630
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* __CCL_CFG_H__ */
