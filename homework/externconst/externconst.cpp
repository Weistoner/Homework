#include "stdmine.h"

//7.��һ���ļ��д���һ��extern const���������ļ���main()������Ӧextern const
//��ֵ��������һ���ļ��ж���extern const, Ȼ�����������������ļ���

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