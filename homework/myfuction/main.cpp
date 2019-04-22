#include <stdio.h>
/*
创建一个函数，它带有一个const值传递的参数，
然后在函数体中试图改变该参数。
*/

int main()
{
    const int nTemp = 10086;
    int nNumber = 0;
    nNumber = Fun(nTemp);
    return 0;
}

int Fun(const int _nTemp)
{
    int nValue = 0;
   /* _nTemp = 100; 无法修改*/
    nValue = _nTemp;
    return nValue;
}