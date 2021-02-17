/*
 * APP.C
 *
 *  Created on: 31 Aug 2018
 *      Author: musta
 */

#include "typed.h"
#include "MCAL/DIO.h"
#include "MCAL/DIO_LOC.h"

void main(void)
{
	DIO_vidSetPortDir(PORTA, PORTDIR_OUTPUT);
	DIO_vidSetPortVal(PORTA , PORTDIR_OUTPUT) ;
	while(1)
	{
	}
}
