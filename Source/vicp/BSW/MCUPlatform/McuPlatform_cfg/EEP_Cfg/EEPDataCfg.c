/***********************************************************************
*   Copyright (C) Huizhou Desay SV Automotive Co., Ltd.                *
*                 All Rights Reserved.                                 *
*   Department : CT AD                                         *
*   AUTHOR     :                                       *
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
*------------------------------------------------------------------------
* 0.1          Jun 11,2016                Init version.
*------------------------------------------------------------------------
* 0.2          Jan 11,2017  ZhangJie  Add u for constant value to avoid Coverity warning.
*-----------------------------------------------------------------------
* 0.3          Jan 24,2017   ZhangJie   Remove unused include file.
*-----------------------------------------------------------------------
* 0.4          Mar 17,2017   Pei Jingli   Add test ID:EED_SYSTEM_VERSION infomations.
*=====================================================================*/
#include "EEP_Def.h"
//#include "EEP_DtcData.h"
//#include "EEP_ECUSerialNumber.h"
//#include "EEP_EOLconfig.h"
//#include "EEP_DiagData.h"

EED_tstDataConfig Ram_UpgradeConfig;
EED_SystemVersion Ram_SystemVersion;
EED_IllumState Ram_IllumState;
EED_tstECUSerialNumber  		Ram_EcuSerialNumber;
EED_tstEOLCONFIG        Ram_EOLConfig;
EED_DiagCalibrationReason Ram_DiagCalibrationReason;


EED_tstDtcRecord        Ram_DtcRecord;
EED_tstDtcRecord1       Ram_DtcRecord1;
EED_tstDtcRecord2       Ram_DtcRecord2;

EED_tstDtcOccurrenceCount Ram_DtcOccurrenceCount;
EED_tstDtcOccurrenceCount1 Ram_DtcOccurrenceCount1;
EED_tstDtcOccurrenceCount2 Ram_DtcOccurrenceCount2;

EED_tstDtcAgingCount Ram_DtcAgingCount;
EED_tstDtcAgingCount1 Ram_DtcAgingCount1;
EED_tstDtcAgingCount2 Ram_DtcAgingCount2;

EED_tstDtcAgedCount  Ram_DtcAgedCount;
EED_tstDtcAgedCount1  Ram_DtcAgedCount1;
EED_tstDtcAgedCount2  Ram_DtcAgedCount2;

EED_tstDtcFidData  Ram_DtcFidData;
EED_tstDtcFidData1  Ram_DtcFidData1;
EED_tstDtcFidData2  Ram_DtcFidData2;

EED_tstDIAGDATA0 		Ram_DiagData0;

/* DTC Snapshot Record */
EED_tstDtcSnapshotRecord Ram_DtcSnapshotRecord;

const U8 Rom_DtcSnapshotRecord[544] = {0x00,0xA5};

/* default data block in ROM */
const U8 Rom_UpgradeConfig[32]=
{
    0x00,
    0xA5,
    0xA5,
    0xA5,
    0xA5,
    0xA5,
    0xA5,
    0xA5,
    0xA5,
    0xA5,
    0xA5,
    0xA5,
    0xA5,
    0xA5,
    0xA5,
    0xA5 ,
    0xA5,
    0xA5,
    0xA5,
    0xA5,
    0xA5,
    0xA5,
    0xA5,
    0xA5,
    0xA5,
    0xA5,
    0xA5,
    0xA5,
    0xA5,
    0xA5,
    0x56,
    0x13
};
const U8 Rom_EOLConfig[32]=
{
	0x00,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5 ,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0x56,
	0x13
};
	
const U8 Rom_DtcRecord[32]=
{
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00 ,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x56,
	0x13
};

const U8 Rom_DtcRecord1[32]=
{
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x56,
	0x13
};

const U8 Rom_DtcRecord2[32]=
{
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x56,
	0x13
};

const U8 Rom_DtcOccurrenceCount[32]=
{
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00 ,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x56,
	0x13
};

const U8 Rom_DtcOccurrenceCount1[32]=
{
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00 ,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x56,
	0x13
};

const U8 Rom_DtcOccurrenceCount2[32]=
{
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00 ,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x56,
	0x13
};

const U8 Rom_DtcAgingCount[32]=
{
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x56,
	0x13
};

const U8 Rom_DtcAgingCount1[32]=
{
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00 ,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x56,
	0x13
};

const U8 Rom_DtcAgingCount2[32]=
{
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00 ,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x56,
	0x13
};

const U8 Rom_DtcAgedCount[32]=
{
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00 ,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x56,
	0x13
};

const U8 Rom_DtcAgedCount1[32]=
{
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00 ,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x56,
	0x13
};

const U8 Rom_DtcAgedCount2[32]=
{
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00 ,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x56,
	0x13
};

const U8 Rom_DtcFidData[32]=
{
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00 ,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x56,
	0x13
};

const U8 Rom_DtcFidData1[32]=
{
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00 ,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x56,
	0x13
};

const U8 Rom_DtcFidData2[32]=
{
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00 ,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x56,
	0x13
};


const U8 Rom_EcuSerialNumber[32]=
{
	0x39,//9
	0x30,//0
	0x32,//2
	0x38,//8
	0x20,// 
	0x33,//3
	0x35,//5
	0x37,//7
	0x20,// 
	0x38,//8
	0x31,//1
	0x38,//8
	0x37,//7
	0x35,//5
	0xA5,
	0xA5 ,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0x56,
	0x13
};

const U8 Rom_DiagData0[32]=
{	
	0x00,0x00,0x00,0x00,//BackupConfigurationInformation_64[4]
	0xFF,0xFF,0xFF,0xFF,//AVM_FunctionConfiguration_F101[4]
	0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,//SystemNameOrEngineType[8]
	0x20,0x16,0x09,0x12,//ECUManufacturingDate[4]
	0x00,
	0xA5,0xA5,0xA5,0xA5,0xA5,0xA5,0xA5,0xA5,0xA5,//Unused[14]/*default:0*/
	0x56,
	0x13
};

/*For System Version*/
const U8 Rom_SysremVersion[32]=
{
 0,1,2
};

/*For Illum State*/
const U8 Rom_IllumState[32]=
{
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00
};



const U8 Rom_DiagCalibrationReason[32]=
{
	0x00,//CALIBRATION Reason[0]
	0x00,
	0x00,
	0x00,//CALIBRATION Reason[4]
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5 ,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0xA5,
	0x56,
	0x13

};



/**************** END OF FILE *****************************************/
