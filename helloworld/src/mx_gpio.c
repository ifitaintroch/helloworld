/*
 * mx_gpio.c
 *
 *  Created on: Feb 9, 2018
 *      Author: homik
 */

#include "mx_gpio.h"

void mx_gpio_init(void){


	//init struct for defining gpio
	GPIO_InitTypeDef init_struct;

	/* GPIO Ports Clock Enable */
	__HAL_RCC_GPIOE_CLK_ENABLE();
	__HAL_RCC_GPIOG_CLK_ENABLE();
	__HAL_RCC_GPIOB_CLK_ENABLE();
	__HAL_RCC_GPIOD_CLK_ENABLE();
	__HAL_RCC_GPIOC_CLK_ENABLE();
	__HAL_RCC_GPIOA_CLK_ENABLE();
	__HAL_RCC_GPIOJ_CLK_ENABLE();
	__HAL_RCC_GPIOI_CLK_ENABLE();
	__HAL_RCC_GPIOK_CLK_ENABLE();
	__HAL_RCC_GPIOF_CLK_ENABLE();
	__HAL_RCC_GPIOH_CLK_ENABLE();

	//configure bank A

	init_struct.Pin = GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4
						| GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7 | GPIO_PIN_8 | GPIO_PIN_9
						| GPIO_PIN_10 | GPIO_PIN_11 | GPIO_PIN_12
						| GPIO_PIN_15;
	init_struct.Mode = GPIO_MODE_ANALOG;
	init_struct.Pull = GPIO_PULLUP;
	HAL_GPIO_Init(GPIOA, &init_struct);

	//configure bank B

	init_struct.Pin = GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4
						| GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7 | GPIO_PIN_8 | GPIO_PIN_9
						| GPIO_PIN_10 | GPIO_PIN_11 | GPIO_PIN_12 | GPIO_PIN_13
						| GPIO_PIN_14 | GPIO_PIN_15;
	init_struct.Mode = GPIO_MODE_ANALOG;
	init_struct.Pull = GPIO_PULLUP;
	HAL_GPIO_Init(GPIOB, &init_struct);

	//configure bank C

	init_struct.Pin = GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4
						| GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7 | GPIO_PIN_8 | GPIO_PIN_9
						| GPIO_PIN_10 | GPIO_PIN_11 | GPIO_PIN_12 | GPIO_PIN_13;
	init_struct.Mode = GPIO_MODE_ANALOG;
	init_struct.Pull = GPIO_PULLUP;
	HAL_GPIO_Init(GPIOC, &init_struct);

	//configure bank D

	init_struct.Pin = GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4
						| GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7 | GPIO_PIN_8 | GPIO_PIN_9
						| GPIO_PIN_10 | GPIO_PIN_11 | GPIO_PIN_12 | GPIO_PIN_13
						| GPIO_PIN_14 | GPIO_PIN_15;
	init_struct.Mode = GPIO_MODE_ANALOG;
	init_struct.Pull = GPIO_PULLUP;
	HAL_GPIO_Init(GPIOD, &init_struct);

	//configure bank E

	init_struct.Pin = GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4
						| GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7 | GPIO_PIN_8 | GPIO_PIN_9
						| GPIO_PIN_10 | GPIO_PIN_11 | GPIO_PIN_12 | GPIO_PIN_13
						| GPIO_PIN_14 | GPIO_PIN_15;
	init_struct.Mode = GPIO_MODE_ANALOG;
	init_struct.Pull = GPIO_PULLUP;
	HAL_GPIO_Init(GPIOE, &init_struct);

	//configure bank F

	init_struct.Pin = GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4
						| GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7 | GPIO_PIN_8 | GPIO_PIN_9
						| GPIO_PIN_10 | GPIO_PIN_11 | GPIO_PIN_12 | GPIO_PIN_13
						| GPIO_PIN_14 | GPIO_PIN_15;
	init_struct.Mode = GPIO_MODE_ANALOG;
	init_struct.Pull = GPIO_PULLUP;
	HAL_GPIO_Init(GPIOF, &init_struct);

	//configure bank G

	init_struct.Pin = GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4
						| GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7 | GPIO_PIN_8 | GPIO_PIN_9
						| GPIO_PIN_10 | GPIO_PIN_11 | GPIO_PIN_12 | GPIO_PIN_13
						| GPIO_PIN_14 | GPIO_PIN_15;
	init_struct.Mode = GPIO_MODE_ANALOG;
	init_struct.Pull = GPIO_PULLUP;
	HAL_GPIO_Init(GPIOG, &init_struct);

	//configure bank H

	init_struct.Pin = GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4
						| GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7 | GPIO_PIN_8 | GPIO_PIN_9
						| GPIO_PIN_10 | GPIO_PIN_11 | GPIO_PIN_12 | GPIO_PIN_13
						| GPIO_PIN_14 | GPIO_PIN_15;
	init_struct.Mode = GPIO_MODE_ANALOG;
	init_struct.Pull = GPIO_PULLUP;
	HAL_GPIO_Init(GPIOH, &init_struct);

	//configure bank I

	init_struct.Pin = GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4
						| GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7 | GPIO_PIN_8 | GPIO_PIN_9
						| GPIO_PIN_10 | GPIO_PIN_11 | GPIO_PIN_12 | GPIO_PIN_13
						| GPIO_PIN_14 | GPIO_PIN_15;
	init_struct.Mode = GPIO_MODE_ANALOG;
	init_struct.Pull = GPIO_PULLUP;
	HAL_GPIO_Init(GPIOI, &init_struct);

	//configure bank J

	init_struct.Pin = GPIO_PIN_3 | GPIO_PIN_4
						| GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;
	init_struct.Mode = GPIO_MODE_ANALOG;
	init_struct.Pull = GPIO_PULLUP;
	HAL_GPIO_Init(GPIOJ, &init_struct);

	//configure bank K

	init_struct.Pin = GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4
						| GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7 | GPIO_PIN_8 | GPIO_PIN_9
						| GPIO_PIN_10 | GPIO_PIN_11 | GPIO_PIN_12 | GPIO_PIN_13
						| GPIO_PIN_14 | GPIO_PIN_15;
	init_struct.Mode = GPIO_MODE_ANALOG;
	init_struct.Pull = GPIO_PULLUP;
	HAL_GPIO_Init(GPIOK, &init_struct);
}


