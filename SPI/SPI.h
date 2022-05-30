/*
 * SPI.h
 * Author : NguyenChiNhon
 */
#ifndef __AVR_ATmega8__
	#define __AVR_ATmega8__
#endif
#ifndef _SPI_H_
#define _SPI_H_
#include <avr/io.h>

void SPI_Init();
void SPI_Send(uint8_t data);
uint8_t SPI_Read();



#endif