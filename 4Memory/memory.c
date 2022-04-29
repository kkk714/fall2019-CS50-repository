#include<stdlib.h>

void f(void)
{
    int *x = malloc(10 * sizeof(int));
    //以int为单位存储在int中
    //x[10] = 0;
    //line 7 是invalid的， 因为line 5 定义了存储10个单位。 x[10]一共有11个，不在分配的memory
    x[9] = 0;
    free(x);
}

int main(void)
{
    f();
    return 0;
}
