// MCU
#ifndef __AVR_ATmega8__
	#define __AVR_ATmega8__
#endif
#include<avr/io.h>
#include<util/delay.h>
#include<GPIO.h>
#include<LCD.h>

int main(void)
{
    GPIO_Init();
    LCD_Init();							/* Initialization of LCD*/
    LCD_Clear();
	LCD_String("hhhhhhhhhhhhhhh");		/* Write string on 1st line of LCD*/
	LCD_Command(0xc0);					/* Go to 2nd line*/
	LCD_String("Hello World");			/* Write string on 2nd line*/
    while (1)
    {
    }
    return 0;
}
