/* -----------------------------------------------------------------------------
  Filename:    nmcbdwrp_par.c
  Description: Toolversion: 02.03.11.01.70.09.79.00.00.00
               
               Serial Number: CBD1700979
               Customer Info: Huizhou Desay SV Automotive Co., Ltd.
                              Package: CBD_Vector_SLP2
                              Micro: R7F7016213AFP
                              Compiler: Green Hills 2015.1.7
               
               
               Generator Fwk   : GENy 
               Generator Module: Nm_AsrNmCANbeddedWrapper
               
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
                       Node:         APA

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

#define __NMCBDWRP_PAR_C__
/* Includes */
#include "v_cfg.h"
#include "v_def.h"
#include "nmcbdwrp_cfg.h"
/* Channel specific parameters */
/* Channel indirection */
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanNm_CanToNmChannelInd[kCbdWrpNumberOfCanChannels] = 
{
  0, 
  0xFF
};
V_MEMROM0 V_MEMROM1 vuint8 V_MEMROM2 CanNm_NmToCanChannelInd[kCbdWrpNumberOfChannels] = 
{
  0
};
/* --------------------- Module Data Prototypes --------------------- */
#if defined CBDWRP_ADAPTATION_LAYER
#else
/* BusOff recovery timer. */
V_MEMRAM0 V_MEMRAM1 vuint16 V_MEMRAM2 cbdWrpBusOffRecTimer[kCbdWrpNumberOfChannels];
V_MEMRAM0 V_MEMRAM1 vuint8  V_MEMRAM2 cbdWrpBusOffThresholdCounter[kCbdWrpNumberOfChannels];

# if defined ( CBDWRP_ENABLE_EARLY_BUSOFF_REINIT )
/* Indication Flag that the CAN Driver is in BusOff state */
V_MEMRAM0 V_MEMRAM1 vuint8 V_MEMRAM2 cbdWrpDrvCanIsBusOff[kCbdWrpNumberOfChannels];
# endif
#endif

/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 390049630
      #error "The magic number of the generated file <D:\Renesas_Platform\fawhq_c100_apa_mcu\Source\vicp\ComplexDriver\CANdriver\tool\gen979\nmcbdwrp_par.c> is different. Please check time and date of generated files!"
  #endif
#else
  #error "The magic number is not defined in the generated file <D:\Renesas_Platform\fawhq_c100_apa_mcu\Source\vicp\ComplexDriver\CANdriver\tool\gen979\nmcbdwrp_par.c> "

#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

