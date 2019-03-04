/*
 * module_config.h
 *
 *  Created on: Oct 26, 2016
 *      Author: Bumsik Kim
 */

#ifndef BSP_STM32F446XX_NUCLEO64_KB_MODULE_CONFIG_H_
#define BSP_STM32F446XX_NUCLEO64_KB_MODULE_CONFIG_H_

// Push button settings
#define B1_PORT 		GPIOC
#define B1_PIN 			GPIO_PIN_13

// LED1 settings
#define LED1_PORT	GPIOA		//LD2
#define LED1_PIN	GPIO_PIN_5

// Terminal settings
#define TERMINAL_UART			USART2
#define TERMINAL_BAUD_RATE		115200 // or 9600, 115200, 921600
#define TERMINAL_TX_PORT 		GPIOA
#define TERMINAL_TX_PIN 		GPIO_PIN_2
#define TERMINAL_RX_PORT 		GPIOA
#define TERMINAL_RX_PIN 		GPIO_PIN_3

// HCMS_290X settings
#define HCMS_290X_SPI			SPI2
#define HCMS_290X_RS_PORT		GPIOC
#define HCMS_290X_RS_PIN		GPIO_PIN_4
#define HCMS_290X_RESET_PORT 	GPIOC
#define HCMS_290X_RESET_PIN		GPIO_PIN_5
#define HCMS_290X_CE_PORT		GPIOA
#define HCMS_290X_CE_PIN		GPIO_PIN_4
#define HCMS_290X_MOSI_PORT 	GPIOC
#define HCMS_290X_MOSI_PIN		GPIO_PIN_1
#define HCMS_290X_SCK_PORT		GPIOB
#define HCMS_290X_SCK_PIN		GPIO_PIN_10

// TCA9545A
#define TCA9545A_I2C		I2C1
#define TCA9545A_SDA_PORT	GPIOB
#define TCA9545A_SDA_PIN	GPIO_PIN_9
#define TCA9545A_SCL_PORT	GPIOB
#define TCA9545A_SCL_PIN	GPIO_PIN_8
#define TCA9545A_RESET_PORT	GPIOC
#define TCA9545A_RESET_PIN	GPIO_PIN_9

// ADC for range sensors
#define RECV_ADC            KB_ADC1
#define RECV_FR_PORT        GPIOC
#define RECV_FR_PIN         GPIO_PIN_0
#define RECV_R_PORT         GPIOC
#define RECV_R_PIN          GPIO_PIN_1
#define RECV_L_PORT         GPIOC
#define RECV_L_PIN          GPIO_PIN_2
#define RECV_FL_PORT        GPIOC
#define RECV_FL_PIN         GPIO_PIN_3

#endif /* BSP_STM32F446XX_NUCLEO64_KB_MODULE_CONFIG_H_ */
