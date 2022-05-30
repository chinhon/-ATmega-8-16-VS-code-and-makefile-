/*
 * ADC.cpp
 * Author : NguyenChiNhon
 */ 
#include<ADC.h>
#include<avr/io.h>
#include<avr/sfr_defs.h>
void ADC_Init(unsigned char ADC_CHANNEL) // Chon kenh
    // Mac dinh AREF
{
	ADMUX|= (1<<REFS0); // Dung dien ap AVCC, chan AREF noi tu loc
//  ADMUX|= (1<<REFS0)|(1<<REFS1); // Dien ap noi 2.56V, chan AREF noi tu loc
//  ADMUX|= (1<<ADLAR); //Ket qua hieu chinh trai (ADCH 8 bit cao)
	ADMUX|= ADC_CHANNEL; 

//  ADCSRA= (1<< ADEN)| (1<< ADPS0);                // He so chia 2
//  ADCSRA= (1<< ADEN)| (1<< ADPS1);                // He so chia 4
//  ADCSRA= (1<< ADEN)| (1<< ADPS1)| (1<< ADPS0);   // He so chia 8
//  ADCSRA= (1<< ADEN)| (1<< ADPS2);                // He so chia 16
//  ADCSRA= (1<< ADEN)| (1<< ADPS2)| (1<< ADPS0);   // He so chia 32
//  ADCSRA= (1<< ADEN)| (1<< ADPS2)| (1<< ADPS1);   // He so chia 64
	ADCSRA= (1<< ADEN)| (1<< ADPS2)| (1<< ADPS1)| (1<< ADPS0); // he so chia 128 125KHz 
}
uint16_t ADC_Read(void)
{		
	ADCSRA|= (1<< ADSC); 
	loop_until_bit_is_set(ADCSRA,ADIF); //cho qua trinh chuyen doi ket thuc
	return ADCW; // tra ve gia tri ADCL va ADCH
}
