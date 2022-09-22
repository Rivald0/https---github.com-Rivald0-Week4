
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    int z = atoi(argv[3]);

    printf("Nilai pertama: %d \n",x);
    printf("Nilai kedua: %d \n",y);
    printf("Nilai ketiga: %d \n",z);
 

    if(x > y && x > z)
    {
        printf("%d adalah nilai terbesar \n");
    }    
    else if(y > x && y > z)
    {
        printf("%d adalah nilai terbesar \n");
    }
    else if( z > x && z > y)
    {
        printf("%d adalah nilai terbesar \n");
    }        

    return 0;
}
