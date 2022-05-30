/*
 * ADC.h
 * Author : NguyenChiNhon
 */ 
#ifndef __AVR_ATmega8__
	#define __AVR_ATmega8__
#endif
#ifndef _ADC_H_
#define _ADC_H_
#include <avr/io.h>

void ADC_Init(unsigned char ADC_CHANNEL); // Chon kenh
uint16_t ADC_Read(void);

#endif