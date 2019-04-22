#include "stdmine.h"

//不能重复声名
extern const int nTemp;
int fun()
{
    const int nTemp = 999;
    int nValeue = 0;
    nValeue = nTemp;
    return nValeue;
}