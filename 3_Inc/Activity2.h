#ifndef ACTIVITY2_H_INCLUDED
#define ACTIVITY2_H_INCLUDED
/**
*@file Activity2.c
*@authour DivyaSpandana
*@brief Header file for activity2
*
*/
#include <util/delay.h>
#include <avr/io.h>

void InitADC();
uint16_t ReadADC(uint8_t ch);
uint16_t acti2_GetADC(void);

#endif // ACTIVITY2_H_INCLUDED
