#include <stdio.h>

/*
10.����һ��const�ַ������һ��ָ������鿪ʼ���ָ�룬ʹ�����ָ��
�޸������е�Ԫ�أ������������Ƿ�ᱨ��Ӧ�����������û�У�
Ϊʲô����Ϊ����
*/

int main()
{
    const char szArt[] = { "Helloworld" };
    const char *ptr = szArt;
    //*ptr = 'b';�ᱨ����Ϊ������ַ������ǳ����������޷����޸�
    return 0;
}