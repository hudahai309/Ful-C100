/* -----------------------------------------------------------------------------
  Filename:    v_inc.h
  Description: Toolversion: 02.03.11.01.70.09.79.00.00.00
               
               Serial Number: CBD1700979
               Customer Info: Huizhou Desay SV Automotive Co., Ltd.
                              Package: CBD_Vector_SLP2
                              Micro: R7F7016213AFP
                              Compiler: Green Hills 2015.1.7
               
               
               Generator Fwk   : GENy 
               Generator Module: GenTool_GenyVcfgNameDecorator
               
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

#if !defined(__V_INC_H__)
#define __V_INC_H__

#include "can_inc.h"

#include "v_cfg.h"
#include "drv_par.h"

#include "tpmc.h"

#include "v_par.h"
#include "can_par.h"

/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 390049630
      #error "The magic number of the generated file <D:\Renesas_Platform\fawhq_c100_apa_mcu\Source\vicp\ComplexDriver\CANdriver\tool\gen979\v_inc.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 390049630
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* __V_INC_H__ */
