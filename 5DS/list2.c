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
    
    
    int *tmp = realloc(list, 4 * sizeof(int));
    //realloc();
    
    if(tmp == NULL)
    {
        return 1;
    }
   
   tmp[3] = 4;
   
   list = tmp;
   //由于line18，此时的list有足够的空间

    for(int i = 0; i < 4; i++)
    {
        printf("%i\n",list[i]);
    }
    free(list);
}
