/*
 * TIMER0.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: yas
 */

#ifndef TIMER0_H_
#define TIMER0_H_\

#include"typed.h"

/* TIMER0 Overflow ISR */
/*
#define TIMER0_OVF_vect		__VECTOR_11

#define ISR(TIMER0_OVF_vect)            \
   void TIMER0_OVF_vect (void) __attribute__ ((signal,used)); \
   void TIMER0_OVF_vect (void)
*/

void TIMER0_vidInit(void);
void TIMER0_vidSetTimer(u8 u8Value);
u8 TIMER0_vidGetTimer(void);

#endif /* TIMER0_H_ */
