/*
9.写一个指向double类型的const指针，让它指向double数组。
显示能改变指针指向的内容，但不能增加或减小指针。
*/

int main()
{
    double dlbTempAry[40] = { 0 };
    double *const ptrTemp = dlbTempAry;
    *ptrTemp = 100;
    //指针自增会报错 ptrTemp = ptrTemp + 1;
    return 0;
}