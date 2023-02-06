//
// Created by $GIT_NAME on 2023/2/3.
//

#include "key.h"

unsigned char KeyNum,KeyType;

unsigned char ReadIndependentKey()  //独立按键扫描
{
    unsigned char dat;
    dat = 0;
    if (s1 == 0) {
        DelayMs(5);
        if (s1 == 0) {
            while (s1 == 0);
            dat = 1;
        }
    }
    if (s2 == 0) {
        DelayMs(5);
        if (s2 == 0) {
            while (s2 == 0);
            dat = 2;
        }
    }
    if (s3 == 0) {
        DelayMs(5);
        if (s3 == 0) {
            while (s3 == 0);
            dat = 3;
        }
    }
    if (s4 == 0) {
        DelayMs(5);
        if (s4 == 0) {
            while (s4 == 0);
            dat = 4;
        }
    }
    return (dat);
}

void DoIndependentKey()
{
    KeyType = ReadIndependentKey();
    if(KeyType == 0)return;
    switch(KeyType)
    {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
    }

}

void ReadMatrixKey() //矩阵按键扫描
{
    s1 = 0;
    s2 = s3 = s4 = 1;
    l1 = l2 = l3 = l4 = 1;
    if (l1 == 0) {
        DelayMs(5);
        if (l1 == 0) {
            while (l1 == 0);
            KeyNum = 0;
        }
    } else if (l2) {
        DelayMs(5);
        if (l2 == 0) {
            while (l2 == 0);
            KeyNum = 1;
        }
    } else if (l3) {
        DelayMs(5);
        if (l3 == 0) {
            while (l3 == 0);
            KeyNum = 2;
        }
    } else if (l4) {
        DelayMs(5);
        if (l4 == 0) {
            while (l4 == 0);
            KeyNum = 3;
        }
    }

    s2 = 0;
    s1 = s3 = s4 = 1;
    l1 = l2 = l3 = l4 = 1;
    if (l1 == 0) {
        DelayMs(5);
        if (l1 == 0) {
            while (l1 == 0);
            KeyNum = 4;
        }
    } else if (l2) {
        DelayMs(5);
        if (l2 == 0) {
            while (l2 == 0);
            KeyNum = 5;
        }
    } else if (l3) {
        DelayMs(5);
        if (l3 == 0) {
            while (l3 == 0);
            KeyNum = 6;
        }
    } else if (l4) {
        DelayMs(5);
        if (l4 == 0) {
            while (l4 == 0);
            KeyNum = 7;
        }
    }
    s3 = 0;
    s2 = s1 = s4 = 1;
    l1 = l2 = l3 = l4 = 1;
    if (l1 == 0) {
        DelayMs(5);
        if (l1 == 0) {
            while (l1 == 0);
            KeyNum = 8;
        }
    } else if (l2) {
        DelayMs(5);
        if (l2 == 0) {
            while (l2 == 0);
            KeyNum = 9;
        }
    } else if (l3) {
        DelayMs(5);
        if (l3 == 0) {
            while (l3 == 0);
            KeyNum = 10;
        }
    } else if (l4) {
        DelayMs(5);
        if (l4 == 0) {
            while (l4 == 0);
            KeyNum = 11;
        }
    }
    s4 = 0;
    s1 = s3 = s2 = 1;
    l1 = l2 = l3 = l4 = 1;
    if (l1 == 0) {
        DelayMs(5);
        if (l1 == 0) {
            while (l1 == 0);
            KeyNum = 12;
        }
    } else if (l2) {
        DelayMs(5);
        if (l2 == 0) {
            while (l2 == 0);
            KeyNum = 13;
        }
    } else if (l3) {
        DelayMs(5);
        if (l3 == 0) {
            while (l3 == 0);
            KeyNum = 14;
        }
    } else if (l4) {
        DelayMs(5);
        if (l4 == 0) {
            while (l4 == 0);
            KeyNum = 15;
        }
    }

}