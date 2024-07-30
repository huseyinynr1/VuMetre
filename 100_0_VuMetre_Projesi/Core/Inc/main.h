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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Yesil_LED_1_Pin GPIO_PIN_2
#define Yesil_LED_1_GPIO_Port GPIOE
#define Mavi_LED_1_Pin GPIO_PIN_3
#define Mavi_LED_1_GPIO_Port GPIOE
#define Sar__LED_1_Pin GPIO_PIN_4
#define Sar__LED_1_GPIO_Port GPIOE
#define Beyaz_LED_1_Pin GPIO_PIN_5
#define Beyaz_LED_1_GPIO_Port GPIOE
#define K_rm_z__LED_2_Pin GPIO_PIN_6
#define K_rm_z__LED_2_GPIO_Port GPIOE
#define Sistem_Baslatma_Butonu_Pin GPIO_PIN_1
#define Sistem_Baslatma_Butonu_GPIO_Port GPIOB
#define Sistem_Devam_Ettirme_Butonu_Pin GPIO_PIN_2
#define Sistem_Devam_Ettirme_Butonu_GPIO_Port GPIOB
#define Yesil_LED_2_Pin GPIO_PIN_7
#define Yesil_LED_2_GPIO_Port GPIOE
#define Mavi_LED_2_Pin GPIO_PIN_8
#define Mavi_LED_2_GPIO_Port GPIOE
#define Sar__LED_2_Pin GPIO_PIN_9
#define Sar__LED_2_GPIO_Port GPIOE
#define Beyaz_LED_2_Pin GPIO_PIN_10
#define Beyaz_LED_2_GPIO_Port GPIOE
#define Buzzer_Pin GPIO_PIN_6
#define Buzzer_GPIO_Port GPIOB
#define K_rm_z__LED_1_Pin GPIO_PIN_1
#define K_rm_z__LED_1_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
