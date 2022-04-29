#include <stdio.h>

void swap (int a, int b);

int main (void)
{
    int x = 1;
    int y = 2;
    
    printf("x is %i and y is %i\n", x, y);
    
    swap(x, y);
    //因为这里的x和y是copy，而非x和y的
    printf("x is %i and y is %i\n", x, y);
}

void swap (int a, int b)
{
    int tmp = x;
     a = x;
     b = tmp;
    
}