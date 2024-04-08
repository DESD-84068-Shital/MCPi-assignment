/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
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

#include <stdint.h>
#include <stdio.h>
#include "stm32f4xx.h"
#include "system_stm32f4xx.h"

#include "led.h"
#include "timer.h"
#include "i2c_lcd.h"
#include "i2c.h"


#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
	int ret;
		char str[32];
		SystemInit();
		LedInit(LED_BLUE);
		TimerInit(1000);
		ret = LcdInit();
		extern int count;
		if(ret) {
				LcdPuts(LCD_LINE1, "Beardo: \r\n");
				for(count = 1; count < 100; count++) {
					sprintf(str, "shital= %d", count);
					LcdPuts(LCD_LINE2, str);
					DelayMs(1000);
				}
			}
			while(1);
}