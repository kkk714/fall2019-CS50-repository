ation#include<cs50.h>
#include<stdio.h>

float average (int length, int array[]);
int main(void)
{
    int n = get_int("Number of your scores:"); //n是数组的
    
    int score[n];  //这是一个数组的名称，下面的for循环是数组的元素
    
    for(int i = 0; i < n ; i++)
    {
        score[i] = get_int("Score %i:",i+1);
    }
    printf("Average:%.1f\n", average (n,score));
}

float average (int length, int array[])
{
    int sum = 0;
    for (int i = 0; i<length; i++)
    {
        sum += array[i];
    }
    return (float) sum / (float) length;
}