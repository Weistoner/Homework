#include <time.h>
#include <stdio.h>

/*
6.����һ��const������������ʱ��ͨ����ʱ���������ֵ��ʹ��<ctime>��,
Ȼ������������ж�ʱ��ĵڶ���ֵ��������const����������ʲô�����
*/

int main()
{
    time_t timeTemp = 0;
    time(&timeTemp);
    const char szTemp = (const char)ctime(&timeTemp);
    time(&timeTemp);
    //szTemp = (const char)ctime(&timeTemp);���ܶ��θ�ֵ
    return 0;
}
