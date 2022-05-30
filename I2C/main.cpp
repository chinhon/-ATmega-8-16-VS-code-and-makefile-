// MCU
#ifndef __AVR_ATmega8__
	#define __AVR_ATmega8__
#endif
#include<avr/io.h>
#include<util/delay.h>
#include<GPIO.h>
#include<I2C.h>

int main(void)
{
    GPIO_Init();
    I2C_Init();
    I2C_Start(0x00);
    I2C_Write(0X56);
    I2C_Start(0x02);
    I2C_Write(0X98);
    while (1)
    {
        
    }
    return 0;
}
