#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = get_string("i:");
    char *t = get_string("j:");
    //获取的是地址，s和t存储的地址不同
    
    printf("%p\n", s);
    printf("%p\n",t);
}