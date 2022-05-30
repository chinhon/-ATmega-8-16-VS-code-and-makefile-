/*
 * I2C.h
 * Author : NguyenChiNhon
 */ 
#ifndef __AVR_ATmega8__
	#define __AVR_ATmega8__
#endif
#ifndef _I2C_H_
#define _I2C_H_
#include <avr/io.h>

#define I2C_READ 0x01
#define I2C_WR 0x00

void I2C_Init(void);
uint8_t I2C_Start(uint8_t address);
uint8_t I2C_Write(uint8_t data);
uint8_t I2C_read_ack(void);
uint8_t I2C_read_nack(void);
uint8_t I2C_transmit(uint8_t address, uint8_t* data, uint16_t length);
uint8_t I2C_receive(uint8_t address, uint8_t* data, uint16_t length);
uint8_t I2C_writeReg(uint8_t devaddr, uint8_t regaddr, uint8_t* data, uint16_t length);
uint8_t I2C_readReg(uint8_t devaddr, uint8_t regaddr, uint8_t* data, uint16_t length);
void I2C_stop(void);

#endif