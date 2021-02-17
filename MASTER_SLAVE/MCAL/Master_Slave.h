/*
 * Master_Slave.h
 *
 *  Created on: 12 Oct 2018
 *      Author: musta
 */

#ifndef MCAL_MASTER_SLAVE_H_
#define MCAL_MASTER_SLAVE_H_

void SPI_MasterSend(u8 CHAR);

u8 SPI_SlaveReceive(void);

void SPI_SlaveInit(void);

#endif /* MCAL_MASTER_SLAVE_H_ */
