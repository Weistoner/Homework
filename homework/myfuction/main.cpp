#include <stdio.h>
/*
����һ��������������һ��constֵ���ݵĲ�����
Ȼ���ں���������ͼ�ı�ò�����
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
   /* _nTemp = 100; �޷��޸�*/
    nValue = _nTemp;
    return nValue;
}