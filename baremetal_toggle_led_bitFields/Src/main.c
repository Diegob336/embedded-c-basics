/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2025 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>

#include "main.h"

int main(void)
{
	RCC_APB2ENR_t *pClock = (RCC_APB2ENR_t *) 0x40021018; // RCC_APB2ENR
	GPIOx_CRL_t *pPortAMode = (GPIOx_CRL_t *) 0x40010800; // GPIOA_CRL
	GPIOx_ODR_t *pPortAOutput = (GPIOx_ODR_t *) 0x4001080C; // GPIOA_ODR

	// turn on clock
	pClock->IOPA_EN = 1;
	//clear bits
	pPortAMode->CNF5 = 0;
	pPortAMode->MODE5 = 0;
	//*pPortAMode &= ~(0xF << 20);   // Clear bits 23:20 (PA5)
	//*pPortAMode |=  (0x2 << 20);  // 0x2 = 0b0010 (output push-pull)

	pPortAMode->MODE5 = 2;
	// set bits
	//*pPortAOutput |= (0x20);  // turn on
	pPortAOutput->ODR5 = 1;

	//*pPortAOutput |=  0x20;


    /* Loop forever */
	for(;;);
}
