#include <stdio.h>
/*
使用不同的声明形式创建两个指向const long的指针，一个指针指向一个long数组。
演示能让指针增加和减少，但不能改变它所指向的值。
*/

int main()
{
    const int *ptrLong1;
    int const *ptrLong2;
    int nAry[100] = { 1 };
    ptrLong1 = nAry;
    printf("%p", ptrLong1);
    //*ptrLong1 = 100;//不能改变值
    return 0;
}