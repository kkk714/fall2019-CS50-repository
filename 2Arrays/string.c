#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input:");
    printf("Output:");
    
    //for (int i = 0; s[i]!='\0';i++)
    //for (int i = 0; i < strlen(s); i++)
    //int n = strlen(s);
    for(int i = 0,n = strlen(s); i < n; i++)
    {  
        printf("%c",s[i]);//用%c输出string
    }
    printf("\n");
}