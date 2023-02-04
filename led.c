//
// Created by $GIT_NAME on 2022/12/27.
//

#include "led.h"


void Init138(unsigned char channel) //选择锁存器通道
{
    if (channel != 0) //选择通道
    {
        switch (channel)
        {
            case 4:
                P2 = (P2 & 0x1f) | 0x80; //led channel 4
                break;
            case 5:
                P2 = (P2 & 0x1f) | 0xc0; //
                break;
            case 6:
                P2 = (P2 & 0x1f) | 0xe0;
                break;
            case 7:
                P2 = (P2 & 0x1f) | 0xf0;
                break;
        }
        P2= P2 & 0x1f; //锁存器锁存
    }
}

void AloneLed(unsigned char state) //控制单独LED
{
    Init138(4);
    P0 = 0x01<<state;
}

void Y5c_573(unsigned char state) //控制继电器，buzz，motor
{
    Init138(5);//选择锁存器通道5
    if(state!=0)
    {
        switch(state)
        {
            case 1:P0=0x10;break; //继电器
            case 2:P0=0x20;break; //motor
            case 3:P0=0x40;break;//buzz
        }
//        P0=0x00; //关闭
    }else
    {
        P0=0x00; //关闭
    }
}
void init()
{
    Init138(5);
    Y5c_573(0);
}