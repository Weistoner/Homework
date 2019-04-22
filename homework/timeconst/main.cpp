#include <time.h>
#include <stdio.h>

/*
6.创建一个const，当程序运行时，通过读时间决定它的值（使用<ctime>）,
然后再这个程序中读时间的第二个值，并赋给const，看看会有什么结果。
*/

int main()
{
    time_t timeTemp = 0;
    time(&timeTemp);
    const char szTemp = (const char)ctime(&timeTemp);
    time(&timeTemp);
    //szTemp = (const char)ctime(&timeTemp);不能二次赋值
    return 0;
}
