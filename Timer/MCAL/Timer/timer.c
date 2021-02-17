/*
 * timer.c
 *
 *  Created on: 22 Sep 2018
 *      Author: musta
 */
#include "../../typed.h"
#include "../DIO/DIO.h"
#include "../../Functions.h"
#include "timer.h"

#define INT0_VECT __vector_1

#define TIMEROVF_VECT __vector_11

#define ISR(vector, ...) \
	void vector (void) __attripute     \
	void vector (void)

void TIMER_vidinit()
{

}
