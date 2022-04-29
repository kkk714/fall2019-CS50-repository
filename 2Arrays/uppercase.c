#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input:");
    printf("Output: ");
    
    for(int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z') //根据ASCII判断为小写
        {
            printf("%c", s[i] -32);//string 也是数组的一种，这里提取里面的元素（字母）
        }
        else
        {
            printf("%c",s[i]);
        }
    }
    
    printf("\n");
}