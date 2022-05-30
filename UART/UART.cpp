/*
 * UART.cpp
 * Author : NguyenChiNhon
 */ 
#include<GPIO.h>
#include<UART.h>
#include<avr/io.h>
#include<avr/sfr_defs.h>
/*  Baud Rate
#   2400
#   4800
#   9600
#   14400
#   19200
#   28800
#   38400
#   57600
#   76800
#   115200
#   230400
#   250000
#   500000
#   1000000
*/
void UART_init(uint16_t UART_BAUD) 
{	
	UBRRH= (BAUD_PR >> 8);
	UBRRL= BAUD_PR;
	//chon thanh ghi dieu khien, khung 8 bit
	UCSRC= (1<< URSEL)| (1<< UCSZ1)| (1<< UCSZ0);
	UCSRB= (1<< RXEN)| (1<< TXEN);
}
void UART_Printf_char(unsigned char chr)
{
	while(bit_is_clear(UCSRA,UDRE)){};
	UDR= chr;
}
unsigned char UART_Read()
{
	while(bit_is_clear(UCSRA,RXC)){};
	return UDR;
}
void UART_Printf(char *str)
{
	int i;
	for(i=0;str[i]!=0;i++)
	{
		UART_Printf_char(str[i]);
	}
}