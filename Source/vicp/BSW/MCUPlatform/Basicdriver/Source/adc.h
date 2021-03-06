/***********************************************************************
*   Copyright (C) Huizhou Desay SV Automotive Co., Ltd.                *
*                 All Rights Reserved.                                 *
*   Department : CT AD                                                 *
*   AUTHOR     :                                                       *
************************************************************************
* Object        :
* Module        :	ADC
* Instance      :
* Description   :	ADC module header file
*-----------------------------------------------------------------------
* Version:
* Date:
* Author:
***********************************************************************/
/*-History--------------------------------------------------------------
* Version       Date    Name    Changes and comments
* ----------------------------------------------------------------------
* 0.1   Jun 26,2016   PEI Jingli  Initial version
* ----------------------------------------------------------------------
* 0.2   Aug 01,2016   PEI Jingli  Add interface
------------------------------------------------------------------------
* 0.3   Dec 28,2016   PEI Jingli   Modify for CodeReview result
*------------------------------------------------------------------------
* 0.4   Jan 12,2017  ZhangJie  Change micro and add parentheses and add u for constant value to avoid Coverity warning.
*-----------------------------------------------------------------------
* 0.5   Jan 24,2017   ZhangJie   Remove unused include file.
------------------------------------------------------------------------
* 0.6	   Apr 13,2017   PEI Jingli   Fix ICxxx.RF setting errors.
*=====================================================================*/
#ifndef   _ADC_H
#define   _ADC_H
#include "Define.h"
#include "Cpu.h"

/**** Definition of constants ****/

/**** Definition of types ****/
typedef enum
{
   ADC_GRPUP_1=1,
   ADC_GRPUP_2=2,
   ADC_GRPUP_3=3
}ADC_GROUP;

/*
     The index of physical channel
*/ 

typedef enum
{
		ADC_0 = 0x0,
		ADC_1 = 0x01,
		ADC_2 = 0x02,
		ADC_3 = 0x03,
		ADC_4 = 0x04,
		ADC_5 = 0x05,
		ADC_6 = 0x06,
		ADC_7 = 0x07,
		ADC_8 = 0x08,
		ADC_9 = 0x09,
		ADC_10 = 0x0A,
		ADC_11 = 0x0B,
		ADC_12 = 0x0C,
		ADC_13 = 0x0D,
		ADC_14 = 0x0E,
		ADC_15 = 0x0F,

	 	ADC_MAX
}ADC_TYPE;

/*relationship between physical channels used and virtual channel*/
typedef struct
{
    U8   virtual_channel;
    U16 phy_channel; /* all channels enabled */
}ADC_VIR_CH_MAP;

/* A/D error clear register (ADCAnECR) */
#define  ADC_ECR_LIMIT_CLEAR          0x0008u /* clear upper/low limmit error flag */
#define  ADC_ECR_OVERWRITE_CLEAR 0x0004u /* clear overwrite error flag */

/* 
    A/D control register (ADCAnADCR) 
*/
/* suspend mode select */
#define  ADC_CR_SUSPEND_SYN          0x0000u /*synchronous suspend*/
#define  ADC_CR_SUSPEND_ASYN_SG  0x0001u /*Asynchronous suspend about SG*/
#define  ADC_CR_SUSPEND_ASYN        0x0002u /*Asynchronous suspend about SG or SVSSTOP*/
/* 12/10 bit select */
#define  ADC_CR_12BIT  0x0000u
#define  ADC_CR_10BIT  0x0010u
/* alignment control */
#define  ADC_CR_RIGHT_ALIGN  0x0000u
#define  ADC_CR_LEFT_ALIGN    0x0020u
/* self-diagnostic voltage standby control */
#define  ADC_CR_SELFDIAG_OFF  0x0000u
#define  ADC_CR_SELFDIAG_ON    0x0080u

/* 
    A/D samplng control register (ADCAnSMCR) 
*/
/* set sampling time */
#define  ADC_SMCR_SUSPEND_SYN          0x0012u /* 18 cycles,ADCACLK= 8~32MHZ */
#define  ADC_SMCR_SUSPEND_ASYN_SG  0x0018u /*24 cycles,ADCACLK= 8~40MHZ*/

/* 
    A/D safety control register (ADCAnSFTCR) 
*/
/* error interrupt control on overwrite error detection */
#define  ADC_SFTCR_OVERWRITE_ERRORINT_DIS    0x0000u /* disable error interrupt */
#define  ADC_SFTCR_OVERWRITE_ERRORINT_EN     0x0004u /*enable error interrupt*/
/* error interrupt control on upper/low limmit error detection */
#define  ADC_SFTCR_LIMMIT_ERRORINT_DIS    0x0000u /* disable error interrupt */
#define  ADC_SFTCR_LIMMIT_ERRORINT_EN      0x0008u /*enable error interrupt*/
/* whether clear A/D conversion result by hardware */
#define  ADC_SFTCR_READCLEAR_DIS    0x0000u /* disable */
#define  ADC_SFTCR_READCLEAR_EN      0x0010u /*enable*/

/* 
    A/D scan group control register (ADCAnSGCR) 
*/
/* trigger mode */
#define  ADC_SGCR_TRIGGER_DIS    0x0000u
#define  ADC_SGCR_TRIGGER_EN      0x0001u
/* channel repeat times select */
#define  ADC_SGCR_CHANNEL_REPEAT_ONE    0x0000u
#define  ADC_SGCR_CHANNEL_REPEAT_TWO   0x0004u
#define  ADC_SGCR_CHANNEL_REPEAT_FOUR  0x0008u
/* scan end interrupt enable */
#define  ADC_SGCR_SCANEND_INT_DIS    0x0000u
#define  ADC_SGCR_SCANEND_INT_EN      0x0010u

/**** Definition of macros ****/
/*  Register address.  
  Parameter : . Group range to 1~3. ch range to 0~15.
*/

#define  ADCA0_REG_BASEADD                ( (CPU_INT32U )0xFFF20000u)
#define  ADCA1_REG_BASEADD                ( (CPU_INT32U )0xFFD6D000u)



#define  ADC1_REG_BASEADD                  ( (CPU_INT32U )0xFFF10000u)/*seem not used*/

#define  ADC_REG_ADCA0VCR(ch)   		   (*(CPU_REG16 *)((ADCA0_REG_BASEADD)+(ch)*4u))
#define  ADC_REG_ADCA1VCR(ch)   		   (*(CPU_REG16 *)((ADCA1_REG_BASEADD)+(ch)*4u))

/*error clear reg*/
#define  ADC_REG_ADCA0ECR   		   (*(CPU_REG32 *)((ADCA0_REG_BASEADD)+0x344U))
#define  ADC_REG_ADCA1ECR   		   (*(CPU_REG32 *)((ADCA1_REG_BASEADD)+0x344U))

/*A/D control reg*/
#define  ADC_REG_ADCA0ADCR   		   (*(CPU_REG32 *)((ADCA0_REG_BASEADD)+0x304U))
#define  ADC_REG_ADCA1ADCR   		   (*(CPU_REG32 *)((ADCA1_REG_BASEADD)+0x304U))

/*A/D samplng control reg*/
#define  ADC_REG_ADCA0SMPCR   		   (*(CPU_REG32 *)((ADCA0_REG_BASEADD)+0x380U))
#define  ADC_REG_ADCA1SMPCR   		   (*(CPU_REG32 *)((ADCA1_REG_BASEADD)+0x380U))

/*A/D safety control reg*/
#define  ADC_REG_ADCA0SFTCR   		   (*(CPU_REG32 *)((ADCA0_REG_BASEADD)+0x334U))
#define  ADC_REG_ADCA1SFTCR   		   (*(CPU_REG32 *)((ADCA1_REG_BASEADD)+0x334U))

/*A/D scan group start control reg. Group range 1~3.*/
#define  ADC_REG_ADCA0SGSTCR(group)     (*(CPU_REG32 *)((ADCA0_REG_BASEADD)+0x400U+(group)*0x40u))
#define  ADC_REG_ADCA1SGSTCR(group)     (*(CPU_REG32 *)((ADCA1_REG_BASEADD)+0x400U+(group)*0x40u))

/*A/D scan group control reg. Group range 1~3.*/
#define  ADC_REG_ADCA0SGCR(group)     (*(CPU_REG32 *)((ADCA0_REG_BASEADD)+0x408U+(group)*0x40u))
#define  ADC_REG_ADCA1SGCR(group)     (*(CPU_REG32 *)((ADCA1_REG_BASEADD)+0x408U+(group)*0x40u))

/*A/D scan group start virtual channel reg. Group range 1~3.*/
#define  ADC_REG_ADCA0SGVCSP(group)     (*(CPU_REG32 *)((ADCA0_REG_BASEADD)+0x40CU+(group)*0x40u))
#define  ADC_REG_ADCA1SGVCSP(group)     (*(CPU_REG32 *)((ADCA1_REG_BASEADD)+0x40CU+(group)*0x40u))

/*A/D scan group end virtual channel reg. Group range 1~3.*/
#define  ADC_REG_ADCA0SGVCEP(group)     (*(CPU_REG32 *)((ADCA0_REG_BASEADD)+0x410U+(group)*0x40u))
#define  ADC_REG_ADCA1SGVCEP(group)     (*(CPU_REG32 *)((ADCA1_REG_BASEADD)+0x410U+(group)*0x40u))

/*A/D data information reg.[15~0]bit is conversion result*/
#define  ADC_REG_ADCA0DIR(ch)   		(*(CPU_REG32 *)((ADCA0_REG_BASEADD)+0x200U+(ch)*4u))
//#define  ADC_REG_ADCA0DIR(ch)   		(*(CPU_REG32 *)((ADCA0_REG_BASEADD)+0x200U+(ch)*2u))

#define  ADC_REG_ADCA1DIR(ch)   		(*(CPU_REG32 *)((ADCA1_REG_BASEADD)+0x200U+(ch)*4u))
//#define  ADC_REG_ADCA1DIR(ch)   		(*(CPU_REG32 *)((ADCA1_REG_BASEADD)+0x200U+(ch)*2u))


/**** Declaration of functions ****/
/* ADC0 */
extern void ADCG0_Init(U16 usedChannels, U16 scannum);
extern void ADCG0_DeInit(void);
extern ERR_TYPE ADCG0_GetValue(ADC_TYPE channelId, U16* val);
extern void ADCG0_Conversion(void);
#if (MCU_PIN > PIN100)
/* ADC1 */
extern void ADCG1_Init(U16 usedChannels, U16 scannum);
extern void ADCG1_DeInit(void);
extern ERR_TYPE ADCG1_GetValue(ADC_TYPE channelId, U16* val);
extern void ADCG1_Conversion(void);
extern void ADCG0_Update_Polling_Handler(void);
extern void ADCG1_Update_Polling_Handler(void);

#endif
 
U8 adcg0_vcr_ch;

#endif /*_ADC_H*/

