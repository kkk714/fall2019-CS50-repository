#include<cs50.h>
#include<stdio.h>
#include<ctype.h>

int main(void)
{
    char *s = get_string("s:");
    char *t = s;
    //相当于t去到了和s一样的地址

    t[0] = toupper(t[0]);
    //将t的第一个字符转换成大写的

    printf("%s\n",s);
    printf("%s\n",t);
}