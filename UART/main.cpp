// MCU
#ifndef __AVR_ATmega8__
	#define __AVR_ATmega8__
#endif
#include<avr/io.h>
#include<util/delay.h>
#include<GPIO.h>
#include<UART.h>
char data;

int main(void)
{   
    
    GPIO_Init();
    UART_init(19200);
    while (1)
    {
        data = UART_Read();
        _delay_ms(500);
        UART_Printf_char(data);
    }
    
    
    return 0;
}
