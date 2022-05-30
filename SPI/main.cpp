// MCU
#ifndef __AVR_ATmega8__
	#define __AVR_ATmega8__
#endif
#include<avr/io.h>
#include<util/delay.h>
#include<GPIO.h>
#include<SPI.h>

int main(void)
{
    GPIO_Init();
    SPI_Init();
    SPI_Send(0x23);
    while (1)
    {
    
    }
    return 0;
}
