#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[3] = {"EMMA", "DAVID", "JOY"};

    for(int i = 0; i < 3; i++)
    {
        if (strcmp (names[i] , "EMMA") == 0)
        {
            printf("Found\n");
            printf("%s\n",names[i]);
            return 0;
        }
    }
    printf("Not Found\n");
}
