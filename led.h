//
// Created by $GIT_NAME on 2022/12/27.
//

#ifndef LED_LED_H
#define LED_LED_H


void Init138(unsigned char channel); //选择锁存器通道
void AloneLed(unsigned char state);
void Y5c_573(unsigned char state); //控制继电器，buzz，motor
void init() //关闭其他设备
#endif //LED_LED_H
