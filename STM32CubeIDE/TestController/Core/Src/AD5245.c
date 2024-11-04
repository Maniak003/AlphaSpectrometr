/*
 * AD5245.c
 *
 *  Created on: Nov 4, 2024
 *      Author: ed
 */
#include <stdint.h>
#include <AD5245.h>

void AD5245level(uint8_t lev) {
	uint8_t cmdBuff[2];
	uint16_t cmd = AD5245_WRITE;
	cmdBuff[0] = lev;
	HAL_I2C_Mem_Write(&AD5245_I2C_PORT, AD5245_I2C_ADDR, cmd, 2, cmdBuff, 1, 100);
}

