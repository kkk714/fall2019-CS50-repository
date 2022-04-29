#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Missing command-line argument\n");
        return 1;
    }
    printf("hello,%s\n",argv[1]); //./exit中的exit作为程序名被存储在argv[0]中，因此要从argc[1]开始
    return 0;
    
}