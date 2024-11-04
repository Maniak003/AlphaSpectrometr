/*
 * AD5245.h
 *
 *  Created on: Nov 4, 2024
 *      Author: ed
 */

#ifndef INC_AD5245_H_
#define INC_AD5245_H_
#include <stdio.h>
#include "stm32g4xx_hal.h"
extern I2C_HandleTypeDef hi2c2;

void AD5245level(uint8_t lev);
#define AJUST_DELAY 0
#define AD5245_I2C_ADDR (0x2C << 1)
#define AD5245_WRITE    0x00
#define AD5245_RESET    0x40
#define AD5245_SHUTDOWN 0x20
#define AD5245_I2C_PORT hi2c2


#endif /* INC_AD5245_H_ */
