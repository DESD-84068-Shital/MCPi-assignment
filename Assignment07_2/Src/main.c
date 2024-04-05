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
#include "uart.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
	char ch = 0 ;
		SystemInit();
		LedInit(LED_GREEN);
		LedInit(LED_BLUE);
		LedInit(LED_RED);
		LedInit(LED_ORANGE);
		UartInit(BAUD_9600);
		//UartPuts("Enter your choice \r\n1.LED red on\r\n2.LED red off\r\n3.LED Blue on\r\n4.LED blue off\r\n");
			while(1) {
				UartPuts("Enter your choice \r\n1.LED red on\r\n2.LED red off\r\n3.LED Blue on\r\n4.LED blue off\r\n");
				ch = UartGetch();
		        switch(ch)
		        {
		           case '1':
		        	   LedOn(LED_RED);
		        	     break;
		           case '2':
		        	    LedOff(LED_RED);
		        	     break;
		           case '3':
		        	   LedOn(LED_BLUE) ;
		        	     break;
		           case '4':
		        	   LedOff(LED_BLUE);
		        	     break;
		        }
		        ch = 0;
			}
	return 0;
}
