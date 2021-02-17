/*
 * TIMER_LOC.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: yas
 */

#ifndef TIMER_LOC_H_
#define TIMER_LOC_H_

/* STATUS REGISTER CONTROL FOR GLOBAL ENABLE INTERRUPT */
#define SREG_REGISTER *((volatile u8*)0x5F)

/* TIMER */
#define TCCR0_REGISTER *((volatile u8*)0x53)
#define TCNT0_REGISTER *((volatile u8*)0x52)
#define OCR0_REGISTER *((volatile u8*)0x5C)
#define TIMSK_REGISTER *((volatile u8*)0x59)
#define TIFR_REGISTER *((volatile u8*)0x58)

#define TCCR1A_REGISTER *((volatile u8*)0x4F)
#define TCCR1B_REGISTER *((volatile u8*)0x4E)
#define ICR1L_REGISTER *((volatile u8*)0x46)
#define ICR1H_REGISTER *((volatile u8*)0x47)

#define OCR1AL_REGISTER *((volatile u8*)0x4A)
#define OCR1AH_REGISTER *((volatile u8*)0x4B)

/* 1- WATCH_DOG */
#define WDTCR_REGISTER *((volatile u8*)0x41)

#endif /* TIMER_LOC_H_ */
