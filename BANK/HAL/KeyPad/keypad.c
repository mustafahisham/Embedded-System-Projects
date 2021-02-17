/*
 * keypad.c
 *
 *  Created on: 7 Sep 2018
 *      Author: musta
 */
#include "../../typed.h"
#include "../../MCAL/DIO.h"
#include "../../Functions.h"
#include "KeyPad_CHG.h"

//u8 key[12]= {1,2,3,4,5,6,7,8,9,0,'a','b'};

static u8 Columns[4] = {C1_PIN , C2_PIN , C3_PIN} ;
static u8 Rows[4] = {R1_PIN , R2_PIN , R3_PIN, R4_PIN} ;

void KEYPAD_vidInit(void)
{
   u8 u8PinNo;

   for(u8PinNo = 0; u8PinNo < 3; u8PinNo ++)
   {
	   DIO_vidSetPinDir(keyPad_PORT, Columns[u8PinNo], 1);
   }

   for(u8PinNo = 0; u8PinNo < 4; u8PinNo ++)
   {
	   DIO_vidSetPinDir(keyPad_PORT, Rows[u8PinNo], 0);
       DIO_vidSetPinval(keyPad_PORT, Rows[u8PinNo], 1);
   }
   DIO_vidSetPortDir(PORTA,LOW);
}

u8 KEYPAD_u8GetPressedKey(void)
{

	u8 u8ColNo , u8RowNo , u8RetVal = 0 ;

	for (u8ColNo = 0 ; u8ColNo < 3 ; u8ColNo ++)
	{
		/*Activate column*/
		DIO_vidSetPinval(keyPad_PORT, Columns[u8ColNo] , LOW) ;

		for(u8RowNo=0 ; u8RowNo < 4 ; u8RowNo++)
		{
			if (DIO_u8GetPinaValue(keyPad_PORT,Rows[u8RowNo]) == LOW)
				{
					u8RetVal =  ( (u8RowNo * 3) + u8ColNo + 1) ;
					/*wait to depress the key*/
					while(DIO_u8GetPinaValue(keyPad_PORT,Rows[u8RowNo] ) == LOW);
				}
		}

		/*Deactivate column*/
		DIO_vidSetPinval(keyPad_PORT , Columns[u8ColNo] , HIGH) ;

	}

	return u8RetVal ;
}
