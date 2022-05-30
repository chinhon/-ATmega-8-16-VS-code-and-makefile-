/*
 * SP.cpp
 *
 * Author : NguyenChiNhon
 */ 


#include <avr/sfr_defs.h>
#include <SPI.h>
#include <GPIO.h>
#define MOSI 3  // MOSI
#define Clk 5   // Clk
#define SS 2    // SS
#define MISO 4  // MISO

void SPI_Init()
{	
		/* Cau hinh chan SPI*/
    sbi(DDRB,MOSI); // MOSI
	sbi(DDRB,Clk); // Clk
	sbi(DDRB,SS);cbi(PORTB,SS); // SS
	cbi(DDRB,MISO); // MISO
	
	/*(MSB gui truoc)
	  MSTR bang 1 Master 
	  CPOL-CPHA bang 0 mode 0 */
	SPCR|= (1<< SPE)| (1<< MSTR)| (1<< SPR0) ; // He so f/16
//	SPCR|= (1<< SPE)| (1<< MSTR)| (1<< SPR1) ; // He so f/64	
//	SPCR|= (1<< SPE)| (1<< MSTR)| (1<< SPR1)| (1<< SPR0) ; // He so f/128		
}
void SPI_Send(uint8_t data)
{	
	SPDR= data;
	while(bit_is_clear(SPSR,SPIF)){}
}
uint8_t SPI_Read()
{	
	uint8_t data;
	data= SPDR;
	while(bit_is_clear(SPSR,SPIF)){}
	return data;
}