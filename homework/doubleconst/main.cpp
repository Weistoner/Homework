/*
9.дһ��ָ��double���͵�constָ�룬����ָ��double���顣
��ʾ�ܸı�ָ��ָ������ݣ����������ӻ��Сָ�롣
*/

int main()
{
    double dlbTempAry[40] = { 0 };
    double *const ptrTemp = dlbTempAry;
    *ptrTemp = 100;
    //ָ�������ᱨ�� ptrTemp = ptrTemp + 1;
    return 0;
}