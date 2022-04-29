#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int *list = malloc(3 * sizeof(int));
    
    if(list == NULL)
    {
        return 1;
    }
    //通常分配完内存后都要写一段return， 防止电脑的内存不够分配的
    
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    
    for(int i = 0; i < 3; i++)
    {
        printf("%i\n",list[i]);
    }
}
