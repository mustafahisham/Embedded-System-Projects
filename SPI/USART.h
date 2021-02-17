/*
 * USART.h
 *
 *  Created on: 6 Oct 2018
 *      Author: musta
 */

#ifndef USART_H_
#define USART_H_


void UART_vidInit(void);

void UART_vidSendChar(u8 u8SendChar);

u8 UART_u8GetChar(void);
#endif /* USART_H_ */
