#include <stdio.h>

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        return 1;
    }
    
    FILE *file = fopen(argv[1], "r");
    if(file == NULL)
    {
        return 1;
    }
    
    unsigned char byte[3];
    fread (byte, 3, 1, file);
    
    if(byte[0] == 0xff && byte[1] == 0xd8 && byte[2] == 0xff)
    {
        printf("maybe\n");
    }
    else
    {
        printf("no\n");
    }
}
