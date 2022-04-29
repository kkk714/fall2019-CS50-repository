#include <stdio.h>

int main(void)
{
    int x;
    printf("x: ");
    scanf("%i", &x);
    printf("x is %i\n",x);
    
    char s[5];
    printf("s: ");
    scanf("%s", s);
    printf("s is %s\n", s);
}
