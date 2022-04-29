#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int *list = malloc(3 * sizeof(int));
    
    if(list == NULL)
    {
        return 1;
    }
    
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    
    //copy integers from old arry into new array
    int *tmp = malloc(4 * sizeof(int));
    
    if(tmp == NULL)
    {
        return 1;
    }
    
    for(int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }
    
    tmp[3] = 4;
   
    free(list);
    //先要free完list才有足够空间给tmp[]
    list = tmp;
    
    //注意最后两行顺序

    for(int i = 0; i < 4; i++)
    {
        printf("%i\n",list[i]);
    }
    
        free(list);
        //free the new 4 size momory
}

