// MCU
#ifndef __AVR_ATmega8__
	#define __AVR_ATmega8__
#endif
#include<avr/io.h>
#include<util/delay.h>
#include<GPIO.h>
#include<EEPROM.h>

int main(void)
{
    GPIO_Init();
    unsigned char data = 0x00;
    for (unsigned char i = 0; i < 10; i++)
    {   
         /* code */
        EEPROM_Update(i,data);
        data++;
    }
    EEPROM_Update(7,0x12);
    EEPROM_Update(9,0x09);
    EEPROM_Update(2,0x0F);
    EEPROM_Update(1,0x01);
    
    while (1)
    {
        /* code */
    }
    return 0;
}
