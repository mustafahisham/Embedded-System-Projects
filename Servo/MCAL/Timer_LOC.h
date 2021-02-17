/*
 * Timer_LOC.h
 *
 *  Created on: 29 Sep 2018
 *      Author: musta
 */

#ifndef TIMER_LOC_H_
#define TIMER_LOC_H_

#define TCCR1B *((volatile u8*)0x4E)
#define CS11 1
#define WGN12 3
#define WGN13 4

#define TCCR1A *((volatile u8*)0x4F)
#define WGN11 1
#define COM1A1 7

#define ICR1 *((volatile u16*)0x46)
#define OCR1A *((volatile u16*)0x4A)

#endif /* TIMER_LOC_H_ */
