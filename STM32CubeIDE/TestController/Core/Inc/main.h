/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32g4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <AD5245.h>
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define AnalogIn_Pin GPIO_PIN_0
#define AnalogIn_GPIO_Port GPIOA
#define LED_Pin GPIO_PIN_3
#define LED_GPIO_Port GPIOA
#define AdjHV_Pin GPIO_PIN_4
#define AdjHV_GPIO_Port GPIOA
#define Comp_level_Pin GPIO_PIN_6
#define Comp_level_GPIO_Port GPIOA
#define PULSE_CLIBRATE_Pin GPIO_PIN_11
#define PULSE_CLIBRATE_GPIO_Port GPIOB
#define ADCsync_Pin GPIO_PIN_11
#define ADCsync_GPIO_Port GPIOA
#define SWD_Pin GPIO_PIN_13
#define SWD_GPIO_Port GPIOA
#define SWC_Pin GPIO_PIN_14
#define SWC_GPIO_Port GPIOA
#define TX_Pin GPIO_PIN_6
#define TX_GPIO_Port GPIOB
#define RX_Pin GPIO_PIN_7
#define RX_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */
#define SPECTER_SIZE 4096


extern uint32_t pulseCounter;
extern uint32_t pulseLevel[1];
extern ADC_HandleTypeDef hadc1;
extern bool reqToSpecter;
extern uint32_t specterBuffer[SPECTER_SIZE];

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
