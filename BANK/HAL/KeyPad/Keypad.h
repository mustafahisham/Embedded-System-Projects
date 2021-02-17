/*
 * Keypad.h
 *
 *  Created on: 7 Sep 2018
 *      Author: musta
 */

#ifndef HAL_KEYPAD_KEYPAD_H_
#define HAL_KEYPAD_KEYPAD_H_

//u8 key[12]= {'1','2','3','4','5','6','7','8','9','a','b'};

void KEYPAD_vidInit(void);

u8 KEYPAD_u8GetPressedKey(void);


#endif /* HAL_KEYPAD_KEYPAD_H_ */
