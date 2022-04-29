#include <stdio.h>
#include <stdlib.h>

//represent a node
typedef struct node
{
    int number;
    struct node *next;
    //a pointer to another node structure
}
node;

int main(void)
{
    //list of zero 0
    node *list = NULL;
    
    //add number to the list
    node *n = malloc(sizeof(node));
    if(n == NULL)
    {
        return 1;
    }
    n -> number = 1;
    n -> next = NULL;
    list = n;
    //n is again pointing at this new node
    
    //add number to the list
    n = malloc(sizeof(node));
    if(n == NULL)
    {
        return 1;
    }
    n -> number = 2;
    n -> next = NULL;
    list -> next = n;
    
    //add number to the list
    n = malloc(sizeof(node));
    if(n == NULL)
    {
        return 1;
    }
    n -> number = 3;
    n -> next = NULL;
    list -> next -> next = n;
    
    
    //print list
    for(node *tmp = list; tmp != NULL; tmp = tmp -> next)
    {
        printf("%i\n", tmp -> number);
    }
    
    //free list which behind of it
    while (list != NULL)
    {
        node *tmp = list -> next;
        free(list);
        list = tmp;
    }
}