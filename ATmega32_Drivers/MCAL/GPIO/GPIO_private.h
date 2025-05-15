/*
 *<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< GPIO_private.h >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 *      Author: Ahmed
 *      Layer : MCAL
 *		SWC   : GPIO/DIO
 */
/*
	 HOW TO GET THE ADDRESSES OF THE REGISTERS
	 1- OPEN THE DATASHEET section (Register summary)
	 2- EX: PORTA ==> $1B ($3B)
	 3- بتاخد العنوان اللى جوا القوس دا يخص لغة السى انما اللى برا القوس لو هتكتب اسمبلى
*/
#ifndef _GPIO_PRIVATE_H_
#define _GPIO_PRIVATE_H_

/* GROUP A */
#define PORTA *((volatile uint8 *)0x3B)
#define DDRA *((volatile uint8 *)0x3A)
#define PINA *((volatile uint8 *)0x39)

/* GROUP B */
#define PORTB *((volatile uint8 *)0x38)
#define DDRB *((volatile uint8 *)0x37)
#define PINB *((volatile uint8 *)0x36)

/* GROUP C */
#define PORTC *((volatile uint8 *)0x35)
#define DDRC *((volatile uint8 *)0x34)
#define PINC *((volatile uint8 *)0x33)

/* GROUP D */
#define PORTD *((volatile uint8 *)0x32)
#define DDRD *((volatile uint8 *)0x31)
#define PIND *((volatile uint8 *)0x30)

#define SFIOR *((volatile uint8 *)0x50)

#endif