/*
 * PWM.h
 *
 * Author : NguyenChiNhon
 */ 
#ifndef __AVR_ATmega8__
	#define __AVR_ATmega8__
#endif
#ifndef _PWM_H_
#define _PWM_H_
#include <avr/io.h>

void PWM_Init(uint16_t Time_pr);
void PWM_channel_A(uint16_t Duty_A);
void PWM_channel_B(uint16_t Duty_B);

#endif