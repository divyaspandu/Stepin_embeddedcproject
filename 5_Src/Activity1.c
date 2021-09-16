/**
*@file Activity1.c
*@authour DivyaSpandana
*@brief User defined utilities, to define pins and ports to Blink an LED ON/OFF
*
*/
#include <avr/io.h>
#include "Activity1.h"

void Checking_Seat(void)
{
    DDRD |= (1<<PD2);
    DDRD &=~ (1<<PD0);
    DDRD |= (1<<PD0);
    DDRD &=~ (1<<PD1);
    DDRD |= (1<<PD1);
}
void Led_ON()
{
    DDRD |= (1<<PD2);
}
void Led_OFF()
{
    DDRD &=~ (1<<PD2);
}
int act1=0;
int Activity1_Led(void)
{
    Checking_Seat();
    if(!(PIND&(1<<PD0))&&!(1<<PD1))
    {
        act1=1;
    }
    else
    {
        act1=0;
    }
    return act1;
}
