/***********************************************************************
*   Copyright (C) Huizhou Desay SV Automotive Co., Ltd.                *
*                 All Rights Reserved.                                 *
*   Department :                                               *
*   AUTHOR     :                                                       *
************************************************************************
* Object        :
* Module        :	ICUS
* Instance      :
* Description   :	ICUS opertaion.								
*-----------------------------------------------------------------------
* Version:
* Date:
* Author:
***********************************************************************/

/*============================================================================
 Includes
============================================================================*/
#include "icus.h"
#include "icus_if.h"
#include "icus_dma_if.h"
#include "Icus_define.h"

U8 Icus_LoadKeyFunc(U8 KeyID, const U8 *pDat, U8 *pRetDat)
{
    U8 err     = 0xFF; 

    Icus_Init();
    __EI();

    err = Icus_Loadkey(KeyID, pDat, pRetDat);     
    return err;
}


#if 0
U8 TEST_ENC1[64];

const U8 MASTER_ECU_KEY_UPDATE[] = {  //counter =1
    /* M1 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 
    /* M2 */ 0xFF, 0x8B, 0x75, 0xF7, 0x3E, 0x6A, 0xD5, 0xA1, 0x72, 0x94, 0x23, 0xC6, 0xE9, 0x31, 0x1F, 0x1A, 0x81, 0xB9, 0xF9, 0x69, 0xD4, 0x03, 0x6A, 0x5B, 0x22, 0x1E, 0x76, 0xFA, 0x91, 0x38, 0xAE, 0x21, 
    /* M3 */ 0xA2, 0xC2, 0xE0, 0x11, 0xDD, 0xC4, 0x27, 0x8F, 0x61, 0xAA, 0xEA, 0xCF, 0xB9, 0x6E, 0xAA, 0xD9, 
    /* M4 */ 0x00, 0x51, 0x00, 0x9F, 0x01, 0x20, 0x31, 0x35, 0x2D, 0x34, 0x30, 0x38, 0x47, 0x38, 0x4E, 0x11, 0x4C, 0xF0, 0xDC, 0x60, 0x59, 0x64, 0x22, 0x27, 0x0A, 0xA4, 0xB9, 0xC3, 0x92, 0xB1, 0x01, 0xAC, 
    /* M5 */ 0x1B, 0x03, 0xD6, 0x05, 0x5E, 0xBF, 0x7D, 0x2D, 0x51, 0x75, 0x6E, 0xDF, 0x32, 0x49, 0xE4, 0xE4  
};

const unsigned char KEY_1_UPDATE[] = {
    /* M1 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 
    /* M2 */ 0x85, 0x89, 0x67, 0xFD, 0xF0, 0xF5, 0x91, 0x79, 0x02, 0x6B, 0x18, 0x91, 0xF9, 0x4F, 0xD3, 0x7B, 0x42, 0x11, 0x54, 0x46, 0xE2, 0x9D, 0xC1, 0x37, 0x29, 0xC5, 0x74, 0xB6, 0x34, 0x61, 0xCD, 0x74, 
    /* M3 */ 0xE8, 0x6F, 0x4A, 0x81, 0xA6, 0xCB, 0xB2, 0xB0, 0x47, 0x29, 0x5D, 0xCF, 0xF8, 0x53, 0x51, 0x0D, 
    /* M4 */ 0x9B, 0xEF, 0x7C, 0x05, 0x9E, 0x8C, 0xA5, 0xB8, 0xBA, 0x33, 0x4E, 0x87, 0x22, 0xD7, 0x17, 0x44, 0xEE, 0x52, 0xF0, 0x69, 0x49, 0x2A, 0x9D, 0x3D, 0x12, 0x83, 0x55, 0x7E, 0xA6, 0x45, 0x74, 0x6C, 
    /* M5 */ 0xD3, 0x02, 0x28, 0xBC, 0xF6, 0x86, 0x05, 0xC0, 0xC6, 0xE7, 0x50, 0x75, 0x73, 0xE8, 0xBE, 0x61  
};

const unsigned char KEY_2_UPDATE[] = {
    /* M1 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 
    /* M2 */ 0x85, 0x89, 0x67, 0xFD, 0xF0, 0xF5, 0x91, 0x79, 0x02, 0x6B, 0x18, 0x91, 0xF9, 0x4F, 0xD3, 0x7B, 0x42, 0x11, 0x54, 0x46, 0xE2, 0x9D, 0xC1, 0x37, 0x29, 0xC5, 0x74, 0xB6, 0x34, 0x61, 0xCD, 0x74, 
    /* M3 */ 0xB6, 0x12, 0x9E, 0xA6, 0xF0, 0x59, 0x2E, 0x62, 0xFD, 0x2D, 0x33, 0xAF, 0xBA, 0x1A, 0x44, 0xA3, 
    /* M4 */ 0x9B, 0xEF, 0x7C, 0x05, 0x9E, 0x8C, 0xA5, 0xB8, 0xBA, 0x33, 0x4E, 0x87, 0x22, 0xD7, 0x17, 0x55, 0xEE, 0x52, 0xF0, 0x69, 0x49, 0x2A, 0x9D, 0x3D, 0x12, 0x83, 0x55, 0x7E, 0xA6, 0x45, 0x74, 0x6C, 
    /* M5 */ 0x79, 0x86, 0xA2, 0x5C, 0x4D, 0x16, 0x77, 0xED, 0x3A, 0xB6, 0x47, 0x95, 0xB4, 0xEC, 0x6D, 0x39  
};

const unsigned char KEY_11_UPDATE[] = {
    /* M1 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 
    /* M2 */ 0x0B, 0x31, 0x92, 0x42, 0xAA, 0xC9, 0xDE, 0x87, 0x78, 0x69, 0xD2, 0x8C, 0x18, 0x61, 0x40, 0xE6, 0x0D, 0x5D, 0xE6, 0x8C, 0x12, 0xB9, 0xC6, 0x73, 0xA2, 0x73, 0xFB, 0xB1, 0xA4, 0x28, 0xAF, 0x45, 
    /* M3 */ 0x09, 0x72, 0xB9, 0xB2, 0xC0, 0xEC, 0x2B, 0xFD, 0xC1, 0xBB, 0x22, 0xCC, 0x05, 0x30, 0xFE, 0xC1, 
    /* M4 */ 0x9B, 0xEF, 0x7C, 0x05, 0x9E, 0x8C, 0xA5, 0xB8, 0xBA, 0x33, 0x4E, 0x87, 0x22, 0xD7, 0x17, 0x44, 0x89, 0x1C, 0xEF, 0x87, 0x9E, 0x82, 0x1D, 0x14, 0xF5, 0x48, 0x7F, 0xBC, 0x69, 0x09, 0xCE, 0x18, 
    /* M5 */ 0x10, 0x1B, 0x8A, 0xB9, 0x68, 0x09, 0xA6, 0xAA, 0x78, 0x52, 0x7D, 0xBA, 0x4B, 0x13, 0x3B, 0x44  
};

const unsigned char KEY_12_UPDATE[] = {
    /* M1 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 
    /* M2 */ 0x0B, 0x31, 0x92, 0x42, 0xAA, 0xC9, 0xDE, 0x87, 0x78, 0x69, 0xD2, 0x8C, 0x18, 0x61, 0x40, 0xE6, 0x0D, 0x5D, 0xE6, 0x8C, 0x12, 0xB9, 0xC6, 0x73, 0xA2, 0x73, 0xFB, 0xB1, 0xA4, 0x28, 0xAF, 0x45, 
    /* M3 */ 0x9A, 0x98, 0x22, 0xAF, 0xC7, 0x1C, 0x2F, 0x97, 0x90, 0xA7, 0x07, 0x27, 0x6D, 0xF7, 0x59, 0xC6, 
    /* M4 */ 0x9B, 0xEF, 0x7C, 0x05, 0x9E, 0x8C, 0xA5, 0xB8, 0xBA, 0x33, 0x4E, 0x87, 0x22, 0xD7, 0x17, 0x55, 0x89, 0x1C, 0xEF, 0x87, 0x9E, 0x82, 0x1D, 0x14, 0xF5, 0x48, 0x7F, 0xBC, 0x69, 0x09, 0xCE, 0x18, 
    /* M5 */ 0x7E, 0x5C, 0xD6, 0xC1, 0x9C, 0x67, 0xAA, 0x3F, 0xC6, 0x0C, 0xD2, 0x0C, 0x47, 0xD8, 0x93, 0x71  
};
#endif

#if 0
void Icus_Func(void)
{
      long err; 
      int result  =0xFF;

      Icus_Init();
      __EI();
#if 1
      err = Icus_Loadkey(KEY_1,KEY_1_UPDATE,TEST_ENC1);
      err = Icus_Loadkey(KEY_2,KEY_2_UPDATE,TEST_ENC1);
      err = Icus_Loadkey(KEY_11,KEY_11_UPDATE,TEST_ENC1);
      err = Icus_Loadkey(KEY_12,KEY_12_UPDATE,TEST_ENC1);
	  if(memcmp(&KEY_12_UPDATE[64],TEST_ENC1,32)==0)
	  {
			result =1;
	  }	
#endif      
}      
#endif




