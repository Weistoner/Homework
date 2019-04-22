#include <stdio.h>

/*
10.创建一个const字符数组和一个指向该数组开始点的指针，使用这个指针
修改数组中的元素，看看编译器是否会报错，应当出错吗？如果没有，
为什么会认为出错？
*/

int main()
{
    const char szArt[] = { "Helloworld" };
    const char *ptr = szArt;
    //*ptr = 'b';会报错，因为定义的字符数组是常量，常量无法被修改
    return 0;
}