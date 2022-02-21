/* -----------------------------------------------------------------------------
  Filename:    appdescdev.c
  Description: Implementation for development tests with CANdesc.
                
                Manufacturer: Vector
                EcuDocFile:   D:\Renesas_Platform\fawhq_c080_apa_mcu\Source\vicp\ComplexDriver\CANdriver\tool\FAW_C080_20200507_Geny.cdd
                Variant:      CommonDiagnostics

  Generated by CANdelaGen, Fri Dec 11 16:33:53 2020
 
 ----------------------------------------------------------------------------- */
/* -----------------------------------------------------------------------------
  C O P Y R I G H T
 -------------------------------------------------------------------------------
  Copyright (c) 2001-2013 by Vector Informatik GmbH. All rights reserved.
 
  This software is copyright protected and proprietary to Vector Informatik 
  GmbH.
  
  Vector Informatik GmbH grants to you only those rights as set out in the 
  license conditions.
  
  All other rights remain with Vector Informatik GmbH.
 -------------------------------------------------------------------------------
 ----------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
    &&&~ Includes
 ----------------------------------------------------------------------------- */

/* Physical layer specific API */
#include "v_inc.h"
/* Check if CCL is available and take into account its configuration */
#if defined (VGEN_ENABLE_CCL)
# include "ccl_cfg.h"
#endif

/* Check if CCLcom is available and take into account its configuration */
#if defined (VGEN_ENABLE_CCLCOM)
# include "cclcom_cfg.h"
#endif

/* Make all CANdesc specific typedefs available */
#include "desc.h"
/* Include the implementation prototypes for prototype checks */
#include "appdesc.h"


