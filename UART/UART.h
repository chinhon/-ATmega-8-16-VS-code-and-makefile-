/*
 * UART.h
 * Author : NguyenChiNhon
 */ 
#ifndef __AVR_ATmega8__
	#define __AVR_ATmega8__
#endif
#ifndef _UART_H_
#define _UART_H_
#include <avr/io.h>
#define BAUD_PR (((F_CPU/(UART_BAUD* 16UL))) - 1)

void UART_init(uint16_t UART_BAUD);
void UART_Printf_char(unsigned char chr);
unsigned char UART_Read();
void UART_Printf(char *str);

#endif