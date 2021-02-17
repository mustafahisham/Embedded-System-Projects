/*
 * TIMER0.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: yas
 */

#include"typed.h"
#include"Functions.h"
#include"TIMER0.h"
#include"TIMER_LOC.h"

//u16 u16Counter= 0;

void TIMER0_vidInit(void)
{
    /* CONFIGURE PRESCALAR --> CLK/8 */
	clr_bit(TCCR0_REGISTER, 0);    /* CS00 */
	set_bit(TCCR0_REGISTER, 1);    /* CS01 */
	clr_bit(TCCR0_REGISTER, 2);    /* CS02 */

	/* CONFIGURE TIMER MODE --> NORMAL MODE(INTERVAL/OVF) */
	clr_bit(TCCR0_REGISTER, 3);    /* WGM01 */
	clr_bit(TCCR0_REGISTER, 6);    /* WGM00 */

	/* DISCONNECT COMPARE MATCH MODE (NO OC0 At PORTB) */
	clr_bit(TCCR0_REGISTER, 4);    /* COM00 */
	clr_bit(TCCR0_REGISTER, 5);    /* COM01 */

	/* Clear TIMER0 Interrupt Flag */
	clr_bit(TIFR_REGISTER, 0);     /* TOV0 */

	/* Enable TIMER0 Over-Flow Interrupt */
	set_bit(TIMSK_REGISTER, 0);

	/* Recommended Enable The GIE At main-fun,
	 * After Calling All Peripherals Initialization That May Contains Interrupts Too.
	 * So, It isn't Correct To Enable GIE For Each Peripheral Interrupt */
}

void TIMER0_vidSetTimer(u8 u8Value)
{
	TCNT0_REGISTER= u8Value;
}

u8 TIMER0_vidGetTimer(void)
{
	return TCNT0_REGISTER;
}

/*
ISR(TIMER0_OVF_vect)
{
	u16Counter++;

	if(u16Counter==2605)
	{
		u16Counter=0;
		TIMER0_vidSetTimer(213);

	    App_TIMER0_OVF_IsCompleted();
	}
}
*/
