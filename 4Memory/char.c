#include <stdio.h>

int main(void)
{
    char *s = "EMMA";
    //s 是指向EMMA地址的指针,s的地址是EMMA第一个字符E的地址，因此叫指针
    printf("%s\n", s);
    //char *s                       %s是字符串的意思
    printf("%p\n",s); 
    //the value of s → 一串16位数字  %p是指针的意思
    printf("%p\n", &s[0]); 
    //字符串“EMMA”的第一个字符的地址
    printf("%c\n", *s);
    //what's at location s → E       %c是字符的意思
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
    printf("%c\n", *(s+3));
    //通过增加s地址，按单个字符显示EMMA 
}