#include <stdio.h>
/*
ʹ�ò�ͬ��������ʽ��������ָ��const long��ָ�룬һ��ָ��ָ��һ��long���顣
��ʾ����ָ�����Ӻͼ��٣������ܸı�����ָ���ֵ��
*/

int main()
{
    const int *ptrLong1;
    int const *ptrLong2;
    int nAry[100] = { 1 };
    ptrLong1 = nAry;
    printf("%p", ptrLong1);
    //*ptrLong1 = 100;//���ܸı�ֵ
    return 0;
}