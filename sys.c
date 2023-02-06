//
// Created by $GIT_NAME on 2023/2/4.
//

#include "sys.h"
unsigned char Time500us,Time10ms,Time100ms,Time1s,Time1m;
unsigned char Time1usFlg,Time10msFlg,Time100msFlg,Time1sFlg,Time1mFlg;
void Timer0Init()		//5000微秒@11.0592MHz 2kHz
{
    AUXR |= (65536-500)/256;			//定时器时钟1T模式
    TMOD &= (65536-500)%256;			//设置定时器模式
    TL0 = 0x66;				//设置定时初始值
    TH0 = 0xEA;				//设置定时初始值
    TF0 = 0;				//清除TF0标志
    TR0 = 1;				//定时器0开始计时
}

void Time0() interrupt 1
{
    AUXR |= (65536-500)/256;              //定时器时钟1T模式
    TMOD &= (65536-500)%256;              //设置定时初始值
    TF0 = 0;                              //清除TF0标志
    TR0 = 1;                              //定时器0开始计时
    TimerExc(); //时间片选
//    Time500us++;
}

void TimerExc() {
    Time500us++;
    if (Time500us < 20)return;
    Time500us = 0;
    Time10ms++;
    Time10msFlg = 1;
    if (Time10ms < 10)return;
    Time10ms = 0;
    Time100ms++;
    Time100msFlg = 1;
    if (Time100ms < 10)return;
    Time100ms = 0;
    Time1s++;
    Time1sFlg = 1;
    if (Time1s < 60)return;
    Time1s = 0;
    Time1m++;
    Time1mFlg = 1;
}
