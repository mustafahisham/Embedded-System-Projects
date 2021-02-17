/*
 * Rtos.c
 *
 *  Created on: 20 Oct 2018
 *      Author: musta
 */

#include "typed.h"
#include "Functions.h"
#define NO_OF_TASKS 3

typedef struct
{
	u8 periodicety;
	void (*Fptr) (void);
}Task;

Task arr[NO_OF_TASKS];

void TASKS_CREATION(u8 priority, u8 periodicety, void (*Fptr) (void))
{
	arr[priority].periodicety = periodicety;
	arr[priority].Fptr = Fptr;
}

void SChEDULER(void)
{
	u8 i ,Tick_Counts;
	for (i = 0; i < NO_OF_TASKS; i ++)
	{
		if (Tick_Counts % arr[i].periodicety == 0)
		{
			arr[i].Fptr();
		}

		else
		{
			// do nothing
		}
	}
}
