#include <cs50.h>
#include <stdio.h>

const int n = 3;
int main(void)
{
    //int n = 3;
    int scores[n];
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;
    
    printf("Average:%i\n",(scores[1] + scores[2] +scores[0])/3);
}