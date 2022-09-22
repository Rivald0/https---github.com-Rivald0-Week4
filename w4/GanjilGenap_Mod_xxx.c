
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    int x;
    x = atoi(argv[1]);  
    if ((x % 2) == 0)
    {
        printf("%d adalah bilangan genap", x);    
    }
    else
    {
        printf("%d adalah bilangan ganjil", x);
    }
    return 0;
    
}