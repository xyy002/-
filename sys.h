//
// Created by $GIT_NAME on 2023/2/4.
//

#ifndef LED_SYS_H
#define LED_SYS_H


extern unsigned char Time500us,Time10ms,Time100ms,Time1s,Time1m;
extern unsigned char Time1usFlg,Time10msFlg,Time100msFlg,Time1sFlg,Time1mFlg;

void TimerExc();
void Timer0Init();

#endif //LED_SYS_H
