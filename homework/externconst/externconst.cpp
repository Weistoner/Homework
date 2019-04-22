#include "stdmine.h"

//7.在一个文件中创建一个extern const声明，该文件的main()函数答应extern const
//的值，在另外一个文件中定义extern const, 然后编译和连接这两个文件。

extern const int nTemp;
int main()
{
    int nNumber1 = 0;
    int nNumber2 = 0;
    const int nTemp = 10086;
    nNumber1 = nTemp;
    nNumber2 = fun();
    return 0;
}