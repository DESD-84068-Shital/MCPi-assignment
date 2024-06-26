/*
 * uart.h
 *
 *  Created on: Apr 2, 2024
 *      Author: shital
 */

#ifndef UART_H_
#define UART_H_

#include "stm32f4xx.h"
#include "stm32f407xx.h"

#define BAUD_9600   9600
#define BAUD_38400  38400
#define BAUD_115200 115200


#define BAUD_BRR_9600    0X683
#define BAUD_BRR_38400   0X1A1
#define BAUD_BRR_115200  0X8B

void UartInit(uint32_t baud);
void UartPutch(uint8_t cnt);
uint8_t UartGetch(void);
void UartPuts(char str[]);
void UartGets(char str[]);


#endif /* UART_H_ */
