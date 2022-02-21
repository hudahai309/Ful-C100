/* -----------------------------------------------------------------------------
  Filename:    appdesc.h
  Description: Interface towards the application used by CANdesc.
                
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

#if !defined(__APPDESC_H__)
#define __APPDESC_H__

extern U8 app_31ServiceNRC78Flag;

/* -----------------------------------------------------------------------------
    &&&~ Configuration switches
 ----------------------------------------------------------------------------- */

#if !defined(__DESC_H__)
# error "Include sequence error! You must include desc.h before appDesc.h."
#endif



/* -----------------------------------------------------------------------------
    &&&~ Preprocessor constants (defines)
 ----------------------------------------------------------------------------- */

/* This magic number provides inter CANdesc generation process consistency check.All CANdesc files must have the same one. */
#define DESC_APPLICATION_INTERFACE_MAGIC_NUMBER                      15296


/* -----------------------------------------------------------------------------
    &&&~ Function prototypes
 ----------------------------------------------------------------------------- */

#if defined (DESC_ENABLE_DEBUG_USER ) || defined (DESC_ENABLE_DEBUG_INTERNAL)
/* Assertion function for better integration support. */
void DESC_API_CALLBACK_TYPE ApplDescFatalError(vuint8 errorCode, vuint16 lineNumber);
#endif

#if defined (DESC_ENABLE_SPONTANEOUS_RES)
void DESC_API_CALLBACK_TYPE ApplDescSpontaneousResponseConfirmation(DESC_CONTEXT_FORMAL_PARAM_DEF_FIRST vuint8 status);
#endif

vuint8 DESC_API_CALL_TYPE ApplDescInitPosResFblBusInfo(t_descUsdtNetBus* pBusInfo);

/* If RCR-RP has been forced this confirmation function will notify the application about the transmission result. */
void DESC_API_CALLBACK_TYPE ApplDescRcrRpConfirmation(vuint8 status);
void DESC_API_CALLBACK_TYPE ApplDescOnTransitionSession(DescStateGroup newState, DescStateGroup formerState);
void DESC_API_CALLBACK_TYPE ApplDescOnTransitionSecurityAccess(DescStateGroup newState, DescStateGroup formerState);
void DESC_API_CALLBACK_TYPE ApplDescEcuResetHard(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescEcuResetSoft(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescClearDiagInfo(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDtcRNODTCBSM(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDtcRDTCBSM(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDtcRDTCSSBDTC(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDtcRDTCEDRBDN(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDtcRSUPDTC(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescWriteDidFAW_Vehicle_Identification_Number(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescWriteDidRepair_Shop_Code_and_or_Tester_Serial_Number(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescWriteDidProgramming_Date(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescWriteDidECU_Installation_Date(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescWriteDidFAW_Reserved(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescWriteDidSystem_Configuration_1(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescWriteDidFAW_Reserved1(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescIoCtrlRetCtrlToEcuAVS_View_change_control(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescIoCtrlShortTermAdjAVS_View_change_control(DescMsgContext* pMsgContext);
/* Request length check can not be performed. Please, implement length check in your Main-Handler!! */
void DESC_API_CALLBACK_TYPE ApplDescRequestDownload(DescMsgContext* pMsgContext);
/* Request length check can not be performed. Please, implement length check in your Main-Handler!! */
void DESC_API_CALLBACK_TYPE ApplDescTransferData(DescMsgContext* pMsgContext);
/* Request length check can not be performed. Please, implement length check in your Main-Handler!! */
void DESC_API_CALLBACK_TYPE ApplDescRequestTransferExit(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescControlDtcSettingEnable(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescControlDtcSettingDisable(DescMsgContext* pMsgContext);
/* Application condition checks */
void DESC_API_CALLBACK_TYPE ApplDescCheckCommCtrl(DESC_CONTEXT_FORMAL_PARAM_DEF_FIRST DescOemCommControlInfo *commControlInfo);

#if defined (DESC_ENABLE_COMM_CTRL_SUBNET_SUPPORT)
void DESC_API_CALLBACK_TYPE ApplDescSetCommMode(DescOemCommControlInfo *commControlInfo);
#endif

#if defined (DESC_ENABLE_RX_COMM_CONTROL)
void DESC_API_CALLBACK_TYPE ApplDescSetCommModeOnRxPath(DescOemCommControlInfo *commControlInfo);
#endif

/* Notification functions */
void DESC_API_CALLBACK_TYPE ApplDescOnCommunicationDisable(void);
void DESC_API_CALLBACK_TYPE ApplDescOnCommunicationEnable(void);

void DESC_API_CALLBACK_TYPE ApplDescCheckSessionTransition(DescStateGroup newState, DescStateGroup formerState);
/* application function which returns a randomly generated value each time it is called 
 * (e.g. current free running timer value)
 */
void ApplDescSecurityAccessGetSeed(DescSecurityAccessContext* pDescSecurityAccessContext);
void DescSecurityGetAttCounter(void);
vuint8 SecM_GetAttCounter(void);
/* application function which must evaluate the received key and confirm its validity.
 */
void ApplDescSecurityAccessCheckKey(DescSecurityAccessContext* pDescSecurityAccessContext);

#if defined (DESC_ENABLE_REPORT_ATT_CNTR_STATE)
/* application notification on time expiration */
void ApplDescSecurityAccessOnAttCntrChanged(DESC_CONTEXT_FORMAL_PARAM_DEF_FIRST DescSecAccAttCtrChgEvType chgEv, vuint8 newAttCounter);
#endif

void DESC_API_CALLBACK_TYPE ApplDescReadDidVehicleSpeed(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidOdometer(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidSupply_Voltage(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidInstallation_status(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidAVS_Calibration_Status(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidAVS_View_change_status(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidAVS_View_change_control(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidSupplier_ECU_Boot_Software_Version_Number(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidFAW_Part_Number(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidFAW_ECU_Software_Version_Number(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidFAW_Vehicle_Identification_Number(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidFAW_ECU_Hardware_Version_Number(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidSupplier_ECU_Hardware_Number(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidSupplier_ECU_Hardware_Version_Number(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidSupplier_ECU_Software_Number(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidSupplier_ECU_Software_Version_Number(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidRepair_Shop_Code_and_or_Tester_Serial_Number(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidProgramming_Date(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidECU_Installation_Date(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidFAW_Reserved(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidSystem_Configuration_1(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescReadDidFAW_Reserved1(DescMsgContext* pMsgContext);
#if defined (DESC_ENABLE_MULTI_CFG_SUPPORT)
/* Additionaly reject a supported PID (multi ECU configuration) */
DescBool ApplDescIsDataIdSupported(vuint16 pid);
#endif

void DESC_API_CALLBACK_TYPE ApplDescRtnCtrlStartCheck_Programming_Integrity(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescRtnCtrlStartInstallation(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescRtnCtrlStartEnter_EOL_view(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescRtnCtrlReqResEnter_EOL_view(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescRtnCtrlStartcalibration(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescRtnCtrlReqRescalibration(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescRtnCtrlStartErase_Memory(DescMsgContext* pMsgContext);
void DESC_API_CALLBACK_TYPE ApplDescRtnCtrlStartCheck_Programming_Dependence(DescMsgContext* pMsgContext);


#endif /* __APPDESC_H__ */
