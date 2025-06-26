/*
 * main.h
 *
 *  Created on: Jun 11, 2025
 *      Author: diego
 */

#ifndef MAIN_H_
#define MAIN_H_

#include <stdint.h>

typedef struct {
    uint32_t AFIO_EN    : 1;  // Bit 0
    uint32_t RESERVED0  : 1;  // Bit 1 (reserved)
    uint32_t IOPA_EN    : 1;  // Bit 2
    uint32_t IOPB_EN    : 1;  // Bit 3
    uint32_t IOPC_EN    : 1;  // Bit 4
    uint32_t IOPD_EN    : 1;  // Bit 5
    uint32_t IOPE_EN    : 1;  // Bit 6
    uint32_t IOPF_EN    : 1;  // Bit 7
    uint32_t IOPG_EN    : 1;  // Bit 8
    uint32_t ADC1_EN    : 1;  // Bit 9
    uint32_t ADC2_EN    : 1;  // Bit 10
    uint32_t TIM1_EN    : 1;  // Bit 11
    uint32_t SPI1_EN    : 1;  // Bit 12
    uint32_t TIM8_EN    : 1;  // Bit 13
    uint32_t USART1_EN  : 1;  // Bit 14
    uint32_t ADC3_EN    : 1;  // Bit 15
    uint32_t RESERVED1  : 1;  // Bit 16 (reserved)
    uint32_t TIM9_EN    : 1;  // Bit 17
    uint32_t TIM10_EN   : 1;  // Bit 18
    uint32_t TIM11_EN   : 1;  // Bit 19
    uint32_t RESERVED2  : 12; // Bits 20–31
} RCC_APB2ENR_t;


typedef struct {
    uint32_t MODE0 : 2;
    uint32_t CNF0  : 2;
    uint32_t MODE1 : 2;
    uint32_t CNF1  : 2;
    uint32_t MODE2 : 2;
    uint32_t CNF2  : 2;
    uint32_t MODE3 : 2;
    uint32_t CNF3  : 2;
    uint32_t MODE4 : 2;
    uint32_t CNF4  : 2;
    uint32_t MODE5 : 2;
    uint32_t CNF5  : 2;
    uint32_t MODE6 : 2;
    uint32_t CNF6  : 2;
    uint32_t MODE7 : 2;
    uint32_t CNF7  : 2;
} GPIOx_CRL_t;

typedef struct {
    uint32_t ODR0  : 1;
    uint32_t ODR1  : 1;
    uint32_t ODR2  : 1;
    uint32_t ODR3  : 1;
    uint32_t ODR4  : 1;
    uint32_t ODR5  : 1;
    uint32_t ODR6  : 1;
    uint32_t ODR7  : 1;
    uint32_t ODR8  : 1;
    uint32_t ODR9  : 1;
    uint32_t ODR10 : 1;
    uint32_t ODR11 : 1;
    uint32_t ODR12 : 1;
    uint32_t ODR13 : 1;
    uint32_t ODR14 : 1;
    uint32_t ODR15 : 1;
    uint32_t Reserved : 16;
} GPIOx_ODR_t;



#endif /* MAIN_H_ */
