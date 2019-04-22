#include "stdmine.h"
/*
5.在一个头文件中创建一个const定义，包含这个头文件在两个.cpp文件中，
然后编译这些文件并连接它们，再在c环境中尝试一遍。
*/


const int nTemp = 10086;
int main()
{
    int nNumber1 = 0;
    int nNumber2 = 0;
    nNumber1 = nTemp;
    nNumber2 = fun();
    return 0;
}