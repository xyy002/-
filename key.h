//
// Created by $GIT_NAME on 2023/2/3.
//

#ifndef LED_KEY_H
#define LED_KEY_H

#include "delay.h"

//行扫描
sbit s1 = P3^0;
sbit s2 = P3^1;
sbit s3 = P3^2;
sbit s4 = P3^3;
//列扫描
sbit l1 = P3^4;
sbit l2 = P3^5;
sbit l3 = P4^2;
sbit l4 = P4^4;

unsigned char ReadIndependentKey();  //独立按键扫描
void ReadMatrixKey(); //矩阵按键扫描

#endif //LED_KEY_H
