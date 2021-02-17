/*
 * Master_Slave.c
 *
 *  Created on: 12 Oct 2018
 *      Author: musta
 */
#include "../typed.h"
#include "../Functions.h"
#include "Master_Slave_LOC.h"

void SPI_SlaveInit(void)
{
	//Enable SPI
	set_bit(SPCR,6);
	// Enable to use LSB'least seg bit'
	set_bit(SPCR,5);
	// Slave
	clr_bit(SPCR,4);
	//Clock Polarity
	clr_bit(SPCR,3);
	// Clock Phase
	set_bit(SPCR,2);
	// Pre-scaler f/4 "SPI2X, SPR1 and SPR0 = 0"

}

u8 SPI_SlaveReceive(void)
{
	u8 flag;
	flag = get_bit(SPSR,7);
	// Wait until finish reciving
	while(flag != 1)
	{flag = get_bit(SPSR,7);}

	// return SPDR
	return SPDR;
}

void SPI_MasterSend(u8 CHAR)
{
	u8 flag;
	SPDR = CHAR;
	flag = get_bit(SPSR,7);
	// Wait until transmission completed
	while(flag != 1)
	{flag = get_bit(SPSR,7);}
}


