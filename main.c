#include "reg51.h"
#include "led.h"
#include "delay.h"
#include "key.h"
#include "sys.h"
int main()
{
    while(1)
    {
        if(Time10msFlg)
        {
            Time10msFlg = 0;
            DoIndependentKey();
        }
        if(Time100msFlg)
        {
            Time100msFlg = 0;
        }
        if(Time1sFlg)
        {
            Time1sFlg = 0;
        }
        if(Time1mFlg)
        {
            Time1mFlg = 0;
        }
    }
}
