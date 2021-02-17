/*
 * LCD.h
 *
 *  Created on: 1 Sep 2018
 *      Author: musta
 */

#ifndef HAL_LCD_H_
#define HAL_LCD_H_

void LCD_vidSendCMD(u8 u8CMD);
void LCD_vidWriteChar(u8 u8character);
void LCD_vidWriteStr (u8* u8String, u8 u8Index);
void LCD_Custom_Char (unsigned char loc, unsigned char *msg);
void LCD_vidWriteCustomChar(u8 *u8character);

#endif /* HAL_LCD_H_ */
