#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[3] = {"EMMA", "DAVID", "JOY"};
    string numbers[3] = {"12345", "23456", "34567"};
    
    for(int i = 0; i < 3; i++)
    {
        if (strcmp (numbers[i] , "EMMA") == 0)
        {
            printf("%s\n", numbers[0]);
            return 0;
        }
    }
    printf("Not found\n");
        return 1;
}