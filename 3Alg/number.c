#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number [6] = {4, 3, 14, 55, 78, 98};
    
    for (int i = 0; i < 6; i++)
    {
        if(number[i] == 50)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not founded\n");
    return 1;
}