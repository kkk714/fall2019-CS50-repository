#include <cs50.h>
#include <stdio.h>

int main (void)
{
    //open file
    FILE *file = fopen("phonebook.csv", "a");
    //"a" append "r" read "w" w
    
    //get strings from users
    char *name = get_string("Name: ");
    char *number = get_string("Number: ");
    
    //print (write) strings to file
    fprintf(file, "%s, %s\n", name, number);
    
    //close file
    fclose(file);
}