//
// Created by $GIT_NAME on 2022/12/27.
//

#include "delay.h"


void Delay100ms()		//@11.0592MHz
{
    unsigned char i, j, k;

    _nop_();
    _nop_();
    i = 5;
    j = 52;
    k = 195;
    do
    {
        do
        {
            while (--k);
        } while (--j);
    } while (--i);
}

void Delay1ms()		//@11.0592MHz
{
    unsigned char i, j;

    _nop_();
    _nop_();
    _nop_();
    i = 11;
    j = 190;
    do
    {
        while (--j);
    } while (--i);
}

void Delay10ms()		//@11.0592MHz
{
    unsigned char i, j;

    _nop_();
    _nop_();
    i = 1;
    j = 245;
    do
    {
        while (--j);
    } while (--i);
}


void DelayMs(unsigned int ms)
{
    while(ms--)
    {
        Delay1ms();
    }
}



