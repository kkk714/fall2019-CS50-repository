#include <cs50.h>
#include <stdio.h>
#include<string.h>

typedef struct
{
    string name;
    string number;
}
person; 

int main(void)
{
    person people[3]; //person 也是有一种类型
    
    people[0].name = "EMMA";
    people[0].number = "123";
    
    people[1].name = "DAVID";
    people[1].number = "234";
    
    people[2].name = "JOY";
    people[2].number = "345";
    
    for (int i = 0; i < 3; i++)
    {
        if(strcmp (people[i].name, "EMMA") == 0)
        {
            printf("%s\n", people[i].number);
            return 0;
        }
    }
}