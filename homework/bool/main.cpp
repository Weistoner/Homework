#include <stdio.h>
#include <stdlib.h>

/*
写代码验证bool和BOOL的区别;
*/

#define BOOL int
#define TRUE 1
#define FALSE 0

BOOL MyFun1(int _nNumber1);//大布尔
bool MyFun2(int _nNumber2);//小布尔
int main()
{
    int nNumber1 = 1;
    int nNumber2 = 1;
    printf("BOOL:%d\r\n", sizeof(MyFun1(nNumber1)));
    printf("bool:%d\r\n", sizeof(MyFun2(nNumber2)));
    system("pause");
    return 0;
}



BOOL MyFun1(int _nNumber1)
{
    if (_nNumber1)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

bool MyFun2(int _nNumber2)
{
    if (_nNumber2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
