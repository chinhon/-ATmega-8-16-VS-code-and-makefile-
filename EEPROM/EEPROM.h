/*
 * EEPROM.h
 * Author : NguyenChiNhon
 */ 
#ifndef __AVR_ATmega8__
	#define __AVR_ATmega8__
#endif
#ifndef _EEPROM_H_
#define _EEPROM_H_
#include <avr/io.h>

void EEPROM_write(unsigned int address, uint8_t data);
unsigned char EEPROM_read(unsigned int address);
void EEPROM_Update(unsigned int address, uint8_t data);


#endif