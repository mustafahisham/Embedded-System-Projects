/*
 * IIC.h
 *
 *  Created on: 19 Oct 2018
 *      Author: musta
 */

#ifndef MCAL_IIC_H_
#define MCAL_IIC_H_

#define TW_MT_ARB_LOST   0x38
#define TW_MR_ARB_LOST   0x38
#define TW_START         0x08
#define TW_REP_START     0x10
#define TW_MT_SLA_ACK    0x18
#define TW_MT_DATA_ACK   0x28
#define TW_MR_DATA_NOT_ACK  0x58
#define TW_MR_SLA_NOT_ACK   0x48
#define TW_MT_SLA_NOT_ACK   0x20
#define TW_MT_DATA_NOT_ACK  0x30
#define TW_MR_DATA_ACK   0x50
#define TW_MR_SLA_ACK    0x40

void IIC_InIt(void);
void TWIStart(void);
void TWIStop(void);
void TWIWrite(u8 data);
u8 TWIReadNACK(void);
u8 TWIGetStatus(void);

#endif /* MCAL_IIC_H_ */
