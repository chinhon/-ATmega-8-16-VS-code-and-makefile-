// MCU
#ifndef __AVR_ATmega8__
	#define __AVR_ATmega8__
#endif
#include<avr/io.h>
#include<util/delay.h>
#include<GPIO.h>
#include<ADC.h>
#include<UART.h>
#include<stdlib.h>
uint16_t val ;
char i[10];
int main(void)
{
    GPIO_Init();
    ADC_Init(0);
    UART_init(9600);
    while (1)
    {
     val = ADC_Read();
     val = (5*val/1023);
     itoa(val,i,10);
     UART_Printf("Gia tri:");
     UART_Printf(i);
     UART_Printf_char(' V');
     UART_Printf_char('\n');
     UART_Printf_char('\r');
     _delay_ms(10000);
    }
    return 0;
}
