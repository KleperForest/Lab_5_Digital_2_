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
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Player_1_Pin GPIO_PIN_0
#define Player_1_GPIO_Port GPIOC
#define Player_2_Pin GPIO_PIN_1
#define Player_2_GPIO_Port GPIOC
#define Start_F_Pin GPIO_PIN_2
#define Start_F_GPIO_Port GPIOC
#define Sem_2_Pin GPIO_PIN_5
#define Sem_2_GPIO_Port GPIOC
#define S_3_Pin GPIO_PIN_1
#define S_3_GPIO_Port GPIOB
#define Control_Pin GPIO_PIN_2
#define Control_GPIO_Port GPIOB
#define S_0_Pin GPIO_PIN_13
#define S_0_GPIO_Port GPIOB
#define S_1_Pin GPIO_PIN_14
#define S_1_GPIO_Port GPIOB
#define S_2_Pin GPIO_PIN_15
#define S_2_GPIO_Port GPIOB
#define Sem_3_Pin GPIO_PIN_6
#define Sem_3_GPIO_Port GPIOC
#define Sem_1_Pin GPIO_PIN_8
#define Sem_1_GPIO_Port GPIOC
#define Winner_2_Pin GPIO_PIN_11
#define Winner_2_GPIO_Port GPIOA
#define Winner_1_Pin GPIO_PIN_12
#define Winner_1_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
