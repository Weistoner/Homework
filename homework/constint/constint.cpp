#include <stdio.h>
/*
1创建三个const int值，把它们加到一起得到一个值用来在一个数组中定义决定该数组的
大小。在C中编译一遍相同的代码，看看会出现什么情况
*/

int main()
{
    const int nNumber1 = 2;
    const int nNumber2 = 3;
    const int nNumber3 = 4;
    char cAry[nNumber1 + nNumber2 + nNumber3] = { 0 };
    return 0;
}

