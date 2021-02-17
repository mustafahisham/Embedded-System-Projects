/*
 * Rtos.h
 *
 *  Created on: 20 Oct 2018
 *      Author: musta
 */

#ifndef RTOS_H_
#define RTOS_H_

void TASKS_CREATION(u8 priority, u8 periodicety, void (*Fptr) (void));
void SChEDULER(void);

#endif /* RTOS_H_ */
