/*
 * EEPROM.cpp
 * Author : NguyenChiNhon
 */ 
#include<EEPROM.h>
#include<avr/io.h>
#include<avr/sfr_defs.h>
void EEPROM_write(unsigned int address, uint8_t data)
{
	while(bit_is_set(EECR, EEWE)){}
	EEAR= address;
	EEDR= data;
	EECR= (1<< EEMWE);
	EECR|= (1<< EEWE);
}
unsigned char EEPROM_read(unsigned int address)
{
	while(bit_is_set(EECR, EEWE)){}
	EEAR= address;
	EECR|= (1<< EERE);
	return EEDR;
}
void EEPROM_Update(unsigned int address, uint8_t data)
{
	while(bit_is_set(EECR, EEWE)){}
	if (EEPROM_read(address) != data)
	{
		/* code */
		EEPROM_write(address,data);
	}
	

}