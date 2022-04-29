#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n; //p变量是一个指针，用来存储n的地址
    // &：get the address;  *: go to the address 
    printf("%p\n", p);
}