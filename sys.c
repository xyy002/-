//
// Created by $GIT_NAME on 2023/2/4.
//

#include "sys.h"
unsigned char Time500us,Time10ms,Time100ms,Time1s,Time10s,Time1m;

void Timer0Init(void)		//5000微秒@11.0592MHz 2kHz
{
    AUXR |= (65536-5000)/256;			//定时器时钟1T模式
    TMOD &= (65536-5000)%256;			//设置定时器模式
    TL0 = 0x66;				//设置定时初始值
    TH0 = 0xEA;				//设置定时初始值
    TF0 = 0;				//清除TF0标志
    TR0 = 1;				//定时器0开始计时
}

void Time0() interrupt 1
{
    AUXR |= (65536-5000)/256;              //定时器时钟1T模式
    TMOD &= (65536-5000)%256;              //设置定时初始值
    TF0 = 0;                              //清除TF0标志
    TR0 = 1;                              //定时器0开始计时
    Time500us++;
}

