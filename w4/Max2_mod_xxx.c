#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    printf("Nilai Yang Anda Masukkan %d \n",a);
    printf("Nilai Yang Anda Masukkan %d \n",b);
    
    if(a > b)
    {
    printf("Nilai Yang Terbesar Adalah = %d",a);
    }
    else if(a < b)
    {
    printf("Nilai Yang Terbesar Adalah = %d",b);
    }
    return 0;
}