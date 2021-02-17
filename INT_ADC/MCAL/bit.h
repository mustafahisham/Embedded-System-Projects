/*
 * bit.h
 *
 *  Created on: Sep 1, 2018
 *      Author: haitham
 */

#ifndef BIT_H_
#define BIT_H_

#define Set_Bit(Var,No) Var|=(1<<(No))
#define Clr_Bit(Var,No) Var=Var&(~(1<<No))
#define Toogle_Bit(Var,No) Var^=(1<<No)
#define Rotate_Right(Var,No) Var=(Var>>No)|(Var<<(8-No))
#define Rotate_Left(Var,No) Var=(Var<<No)|(Var>>(8-No))
#define Shift_Left(Var,No) Var=(Var<<No)
#define Shift_Right(Var,No) Var=(Var>>No)
#define Get_Bit(Var,No) ((Var>>(No) & 0X01))

#endif /* BIT_H_ */
