/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f7xx.h"
#include "stm32f769i_discovery.h"


int main(void)
{
	//configure system clocks
	SystemClock_Config();

	//initialize RTOS
	MX_FREERTOS_Init();

	//start the kernel
	osKernelStart();

	while(1);
}
