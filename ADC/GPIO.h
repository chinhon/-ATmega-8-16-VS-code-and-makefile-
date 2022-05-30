/*
 * GPIO.h
 * Author : NguyenChiNhon
 */ 
#ifndef __AVR_ATmega8__
	#define __AVR_ATmega8__
#endif
#ifndef _GPIO_H_
#define _GPIO_H_
#include <avr/io.h>
/* Cau hinh thach anh
#         F_CPU = 8000000
#         F_CPU =  1000000
#         F_CPU =  1843200
#         F_CPU =  2000000
#         F_CPU =  3686400
#         F_CPU =  4000000
#         F_CPU =  7372800
#         F_CPU =  8000000
#         F_CPU = 11059200
#         F_CPU = 14745600
#         F_CPU = 16000000
#         F_CPU = 18432000
#         F_CPU = 20000000
 */
#define F_CPU 16000000UL
// Cl bit
#define cbi(port, bit){port &=  ~(1 << (bit));}
// Set bit
#define sbi(port, bit){port |= (1 << (bit));}
// Dao bit
#define tbi(port, bit){port ^=   (1 << (bit));}

void GPIO_Init();

#endif