/*
 * macros.h
 *
 * Created: 12/29/2018 9:16:35 AM
 *  Author: user
 */ 


#ifndef MACROS_H_
#define MACROS_H_

#define SET_BIT(reg,bit) (reg) |=(1<<bit)
#define CLEAR_BIT(reg,bit) (reg) &= ~(1<<bit)
#define READ_BIT(reg,bit) ((reg &(1<<bit))>>bit)


#endif /* MACROS_H_ */