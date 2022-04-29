#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[]) // argc 是命令行传递参数总数； argv 是命令行传递的每个参数值
{
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
}