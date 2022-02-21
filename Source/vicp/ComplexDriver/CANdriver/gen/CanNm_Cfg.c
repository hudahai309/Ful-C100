/* -----------------------------------------------------------------------------
  Filename:    CanNm_Cfg.c
  Description: Toolversion: 02.03.11.01.70.09.79.00.00.00
               
               Serial Number: CBD1700979
               Customer Info: Huizhou Desay SV Automotive Co., Ltd.
                              Package: CBD_Vector_SLP2
                              Micro: R7F7016213AFP
                              Compiler: Green Hills 2015.1.7
               
               
               Generator Fwk   : GENy 
               Generator Module: CanNm
               
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

#include "CanNm_Cfg.h"
#include "can_par.h"
#define CANNM_START_SEC_PBCFG_ROOT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

CONST(CanNm_ConfigType, CANNM_PBCFG_ROOT) CanNm_Configuration0 = 
{
  CanNm_PbChannelConfig0, 
  0xBABEu /* CANNM_MAGIC_NUMBER */
};
#define CANNM_STOP_SEC_PBCFG_ROOT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define CANNM_START_SEC_PBCFG
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

CONST(CanNm_PbChannelConfigType, CANNM_PBCFG) CanNm_PbChannelConfig0[CANNM_NUMBER_OF_CANNM_CHANNELS] = 
{
  
  {
    0u /* CANNM_MSG_CYCLE_OFFSET */, 
    CanTxAVM_NM /* CANNM_TX_PDU_ID */, 
    14u /* CANNM_NODE_ID */
  }
};
#define CANNM_STOP_SEC_PBCFG
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"



/* START of Checksum include for
  - CanNmLinktimeCRC */
#define CANNM_START_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

CONST(CanNm_LConfigType, CANNM_CONST) CanNm_LConfiguration = 
{
  1u /* CANNM_NUMBER_OF_CHANNELS */, 
  2u /* CANNM_NUMBER_OF_SYSTEM_CHANNELS */
};
#define CANNM_STOP_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define CANNM_START_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

CONST(CanNm_LChannelConfigType, CANNM_CONST) CanNm_LChannelConfig[CANNM_NUMBER_OF_CANNM_CHANNELS] = 
{
  
  {
    100u /* CANNM_TIMEOUT_TIME */, 
    500u /* CANNM_WAIT_BUS_SLEEP_TIME */, 
    50u /* CANNM_REPEAT_MESSAGE_TIME */, 
    0u /* CANNM_REMOTE_SLEEP_IND_TIME */, 
    10u /* CANNM_MSG_CYCLE_TIME */, 
    6u /* CANNM_MSG_TIMEOUT_TIME */, 
    0u /* CANNM_CHANNEL_ID */, 
    1u /* CANNM_CHANNEL_ACTIVE */, 
    0u /* CANNM_BUS_LOAD_REDUCTION_ACTIVE */, 
    8u /* CANNM_PDU_LENGTH */, 
    (uint8) 0x00u /* CANNM_PDU_NID_POSITION */, 
    (uint8) 0x01u /* CANNM_PDU_CBV_POSITION */, 
    6u /* CANNM_USER_DATA_LENGTH */, 
    10u /* CANNM_MAIN_FUNCTION_PERIOD */
  }
};
#define CANNM_STOP_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


/* END of Checksum include for
  - CanNmLinktimeCRC */

/* START of Checksum include for
  - CanNmLinktimeCRC */
/* Channel indirection: System Channel handle to CAN NM channel handle */
#define CANNM_START_SEC_CONST_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

CONST(NetworkHandleType, CANNM_CONST) CanNm_SystemToNmChannelInd[CANNM_NUMBER_OF_SYS_CHANNELS] = 
{
  0, 
  0xFF
};
#define CANNM_STOP_SEC_CONST_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


/* END of Checksum include for
  - CanNmLinktimeCRC */

#define CANNM_START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */
VAR(Nm_StateType, CANNM_VAR_ZERO_INIT_FAST) CanNm_NmState[CANNM_NUMBER_OF_CANNM_CHANNELS] = 
{
  NM_STATE_UNINIT
};
#define CANNM_STOP_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* PN Filter Masks */
/* --------------------- Configuration Constants --------------------- */
#if ( CANNM_CRC_CHECK == STD_ON )
#define CANNM_START_SEC_CONST_32BIT
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

CONST(uint32, CANNM_CONST) CanNm_LinktimeCRC = CANNM_LINKTIME_CRC;

#define CANNM_STOP_SEC_CONST_32BIT
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */
#endif

#if ( CANNM_PROD_ERROR_DETECT == STD_ON ) && ( CANNM_CONFIG_VARIANT > 1 )
# if ( CANNM_DEM2DET_ENABLED == STD_OFF ) || (( CANNM_PASSIVE_MODE_ENABLED == STD_OFF ) && ( CANNM_DISABLE_TX_ERR_REPORT == STD_OFF ))

#define CANNM_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* DEM Constant(s) for link-time support */
#  if ( CANNM_DEM2DET_ENABLED == STD_OFF )
CONST( Dem_EventIdType, CANNM_CONST ) CanNm_DemInitFailed = CANNM_ERROR_CODE_INIT_FAILED;
#  endif

#  if ( CANNM_PASSIVE_MODE_ENABLED == STD_OFF ) && ( CANNM_DISABLE_TX_ERR_REPORT == STD_OFF )
#   if ( CANNM_DEM2DET_ENABLED == STD_OFF )
CONST( Dem_EventIdType, CANNM_CONST ) CanNm_DemTxError = CANNM_ERROR_CODE_CANIF_TRANSMIT_ERROR;
#   endif

CONST( Dem_EventIdType, CANNM_CONST ) CanNm_DemNetTimeout = CANNM_ERROR_CODE_NW_TIMEOUT;
#  endif /* ( CANNM_PASSIVE_MODE_ENABLED == STD_OFF ) && ( CANNM_DISABLE_TX_ERR_REPORT == STD_OFF ) */

#define CANNM_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* ( CANNM_DEM2DET_ENABLED == STD_OFF ) || (...) */
#endif /* ( CANNM_PROD_ERROR_DETECT == STD_ON ) && ( CANNM_CONFIG_VARIANT > 1 ) */

/* ----------- Local 8 Bit Data definitions without initialization need ----------- */
#define CANNM_START_SEC_VAR_NOINIT_8BIT
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Tx NM message data buffer. */
#if defined ( CANNM_TX_USER_DATA_BUFFER_ENABLED )
VAR( CanNm_MsgDataType, CANNM_VAR_NOINIT ) CanNm_TxMessageData[CANNM_NUMBER_OF_CANNM_CHANNELS];
#else
# if ( CANNM_PASSIVE_MODE_ENABLED == STD_OFF)
VAR( CanNm_MsgDataType, CANNM_VAR_NOINIT ) CanNm_TxMessageData;
# endif
#endif

#if defined ( CANNM_RX_USER_DATA_BUFFER_ENABLED )
/* Rx NM message data buffer. */
VAR( CanNm_MsgDataType, CANNM_VAR_NOINIT ) CanNm_RxMessageData[CANNM_NUMBER_OF_CANNM_CHANNELS];
#endif

#if ( CANNM_PN_EIRA_CALC_FEATURE_ENABLED == STD_ON )
/* Internal and External Cluster Request Buffer */
VAR( CanNm_PnClusterReqDataType, CANNM_VAR_NOINIT ) CanNm_PnClusterReq;
VAR( CanNm_PnClusterReqDataType, CANNM_VAR_NOINIT ) CanNm_PnClusterReqNew;
#endif
#if ( CANNM_PN_ERA_CALC_FEATURE_ENABLED == STD_ON )
/* External Cluster Request Buffer */
VAR( CanNm_PnClusterReqDataType, CANNM_VAR_NOINIT ) CanNm_PnClusterReqExt[CANNM_NUMBER_OF_CANNM_CHANNELS];
VAR( CanNm_PnClusterReqDataType, CANNM_VAR_NOINIT ) CanNm_PnClusterReqExtNew[CANNM_NUMBER_OF_CANNM_CHANNELS];
#endif

#if ( CANNM_USER_DATA_ENABLED == STD_ON ) || ( CANNM_COM_USER_DATA_ENABLED == STD_ON )
/* User Data Position Start Index */
VAR( uint8, CANNM_VAR_NOINIT ) CanNm_UserDataPosition[CANNM_NUMBER_OF_CANNM_CHANNELS];
#endif

#if ( CANNM_PASSIVE_MODE_ENABLED == STD_OFF )
# if defined ( CANNM_DIAG_GW_EXT_ENABLED ) || ( CANNM_COM_USER_DATA_ENABLED == STD_ON )
VAR( uint8, CANNM_VAR_NOINIT ) CanNm_MsgRequest[CANNM_NUMBER_OF_CANNM_CHANNELS];
# endif
#endif

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* ----------- Local 8 Bit Data definitions with frequent access without initialization need ----------- */
/* Control States */
#define CANNM_START_SEC_VAR_FAST_NOINIT_8BIT
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if ( CANNM_PASSIVE_MODE_ENABLED == STD_OFF )
VAR( uint8, CANNM_VAR_NOINIT_FAST ) CanNm_CommState[CANNM_NUMBER_OF_CANNM_CHANNELS];
#endif

VAR( uint8, CANNM_VAR_NOINIT_FAST ) CanNm_NetworkRestartFlag[CANNM_NUMBER_OF_CANNM_CHANNELS];

#if ( CANNM_PASSIVE_MODE_ENABLED == STD_OFF ) && ( CANNM_IMMEDIATE_NM_TX_FEATURE_ENABLED == STD_ON )
VAR( uint8, CANNM_VAR_NOINIT_FAST ) CanNm_ImmediateNmMsgCount[CANNM_NUMBER_OF_CANNM_CHANNELS];
#endif

#if ( CANNM_PN_FEATURE_ENABLED == STD_ON )
VAR( uint8, CANNM_VAR_NOINIT_FAST ) CanNm_PnEnabled[CANNM_NUMBER_OF_CANNM_CHANNELS];
#endif

#define CANNM_STOP_SEC_VAR_FAST_NOINIT_8BIT
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */


#if ( CANNM_PASSIVE_MODE_ENABLED == STD_OFF ) && ( CANNM_COM_CONTROL_ENABLED == STD_ON )
#define CANNM_START_SEC_VAR_FAST_NOINIT_8BIT
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR( uint8, CANNM_VAR_NOINIT_FAST ) CanNm_TxControlStateRequest[CANNM_NUMBER_OF_CANNM_CHANNELS];
VAR( uint8, CANNM_VAR_NOINIT_FAST ) CanNm_TxControlState[CANNM_NUMBER_OF_CANNM_CHANNELS];

#define CANNM_STOP_SEC_VAR_FAST_NOINIT_8BIT
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */
#endif

/* ----------- Local 16 Bit Data definitions with frequent access without initialization need ----------- */
#define CANNM_START_SEC_VAR_FAST_NOINIT_16BIT
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Timer for NM Algorithm. */
VAR( CanNm_TimerCounterType, CANNM_VAR_NOINIT_FAST ) CanNm_TimeoutTimer[CANNM_NUMBER_OF_CANNM_CHANNELS];

#if ( CANNM_PASSIVE_MODE_ENABLED == STD_OFF ) && ( CANNM_REMOTE_SLEEP_IND_ENABLED == STD_ON )
VAR( CanNm_TimerCounterType, CANNM_VAR_NOINIT_FAST ) CanNm_RemoteSleepTimer[CANNM_NUMBER_OF_CANNM_CHANNELS];
#endif

VAR( CanNm_TimerCounterType, CANNM_VAR_NOINIT_FAST ) CanNm_WaitBusSleepTimer[CANNM_NUMBER_OF_CANNM_CHANNELS];
VAR( CanNm_TimerCounterType, CANNM_VAR_NOINIT_FAST ) CanNm_RepeatMsgTimer[CANNM_NUMBER_OF_CANNM_CHANNELS];

#if (CANNM_PN_EIRA_CALC_FEATURE_ENABLED == STD_ON)
VAR( CanNm_TimerCounterType, CANNM_VAR_NOINIT_FAST ) CanNm_PnClusterResetTimer[CANNM_DEF_PN_CLUSTER_INFO_LENGTH][CANNM_PN_CLUSTERS_PER_BYTE];
#endif
#if (CANNM_PN_ERA_CALC_FEATURE_ENABLED == STD_ON)
VAR( CanNm_TimerCounterType, CANNM_VAR_NOINIT_FAST ) CanNm_PnClusterResetTimerExt[CANNM_NUMBER_OF_CANNM_CHANNELS][CANNM_DEF_PN_CLUSTER_INFO_LENGTH][CANNM_PN_CLUSTERS_PER_BYTE];
#endif

/* CANNM072: Message Transmission only for nodes that are not passive */
#if ( CANNM_PASSIVE_MODE_ENABLED == STD_OFF )
/* Timer for NM message transmission. */
VAR( CanNm_TimerCounterType, CANNM_VAR_NOINIT_FAST ) CanNm_MsgTimer[CANNM_NUMBER_OF_CANNM_CHANNELS];
/* CANNM071: Immediate Transmission confirmation is configurable */
# if ( CANNM_PASSIVE_MODE_ENABLED == STD_OFF ) && ( CANNM_IMMEDIATE_TXCONF_ENABLED == STD_OFF )
/* CANNM073: Transmission error handling only when not passive and immediate transmission confirmation is not enabled */
VAR( CanNm_TimerCounterType, CANNM_VAR_NOINIT_FAST ) CanNm_MsgTimeoutTimer[CANNM_NUMBER_OF_CANNM_CHANNELS];
# endif
#endif

#define CANNM_STOP_SEC_VAR_FAST_NOINIT_16BIT
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* ----------- Local Data definitions with unspecified size without initialization need ----------- */
/* CANNM149: Remote Sleep Indication is configurable */
#if ( CANNM_PASSIVE_MODE_ENABLED == STD_OFF ) && ( CANNM_REMOTE_SLEEP_IND_ENABLED == STD_ON )
#define CANNM_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* State of remote sleep indication. */
VAR( boolean, CANNM_VAR_NOINIT ) CanNm_RemoteSleepIndState[CANNM_NUMBER_OF_CANNM_CHANNELS];

#define CANNM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */
#endif

#if defined ( CANNM_LIMP_HOME_INDICATION )
#define CANNM_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Limp Home State */
VAR( boolean, CANNM_VAR_NOINIT ) CanNm_LimpHomeState[CANNM_NUMBER_OF_CANNM_CHANNELS];

#define CANNM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */
#endif

#if ( CANNM_PN_FEATURE_ENABLED == STD_ON )
#define CANNM_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Partial Networking: Message Reception Filter is enabled */
VAR( boolean, CANNM_VAR_NOINIT ) CanNm_PnMessageFilterEnabled[CANNM_NUMBER_OF_CANNM_CHANNELS];

#define CANNM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif

/* ----------- Local Data definitions with unspecified size frequent access without initialization need ----------- */
#define CANNM_START_SEC_VAR_FAST_NOINIT_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Control Flags */
VAR( boolean, CANNM_VAR_NOINIT_FAST ) CanNm_MsgIndicationFlag[CANNM_NUMBER_OF_CANNM_CHANNELS];
/* CANNM161, CANNM162: Passive Mode is configurable */
#if ( CANNM_PASSIVE_MODE_ENABLED == STD_OFF)
VAR( boolean, CANNM_VAR_NOINIT_FAST ) CanNm_MsgConfirmationFlag[CANNM_NUMBER_OF_CANNM_CHANNELS];
/* CANNM135: Repeat Message Request / Bit is configurable */
# if ( CANNM_NODE_DETECTION_ENABLED == STD_ON )
VAR( boolean, CANNM_VAR_NOINIT_FAST ) CanNm_RepeatMsgBitIndFlag[CANNM_NUMBER_OF_CANNM_CHANNELS];
VAR( boolean, CANNM_VAR_NOINIT_FAST ) CanNm_RepeatMsgReqFlag[CANNM_NUMBER_OF_CANNM_CHANNELS];
# endif
#endif

#define CANNM_STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/* ----------- Generated main function definitions(s) ----------- */
#define CANNM_START_SEC_CODE
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/* START of Checksum include for
  - CanNmLinktimeCRC */
/***********************************************************************************************************************
 *  CanNm_MainFunction_0
 **********************************************************************************************************************/
/*! \brief      Main functions of the network managment for channel index 0..x
 *              Cyclic task for incrementation of the counters
 *  \pre        NM is initialized
 *  \context    Function could be called from from task level only
 *  \note       Generated for each CanNm instance
 *  \note       Scheduled by the BSW scheduler (CANNM077)
 **********************************************************************************************************************/
FUNC( void, CANNM_CODE ) CanNm_MainFunction_0( void ) 
{ 
#if defined ( CANNM_OPTIMIZE_CHANNEL_ENABLED )
  CanNm_LocalMainFunction();
#else
  CanNm_LocalMainFunction( (NetworkHandleType)0u ); 
#endif 
}
/* END of Checksum include for
  - CanNmLinktimeCRC */

#define CANNM_STOP_SEC_CODE
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */


/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 390049630
      #error "The magic number of the generated file <D:\Renesas_Platform\fawhq_c100_apa_mcu\Source\vicp\ComplexDriver\CANdriver\tool\gen979\CanNm_Cfg.c> is different. Please check time and date of generated files!"
  #endif
#else
  #error "The magic number is not defined in the generated file <D:\Renesas_Platform\fawhq_c100_apa_mcu\Source\vicp\ComplexDriver\CANdriver\tool\gen979\CanNm_Cfg.c> "

#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

