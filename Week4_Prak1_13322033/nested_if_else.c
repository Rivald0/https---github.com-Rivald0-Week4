#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main (int argc, char*argv[])
{
    int umur = atoi(argv[1]);
    float gaji = atof(argv[2]);

    bool statusApl = false;

    printf("Umur anda adalah %d\n", umur);
    printf ("Gaji anda adalah %.2f\n", gaji);
    

    if (umur > 60)
    {
        statusApl = false;
        printf("Aplikasi anda ditolak !\n");
    }
    else if (gaji <3000000)
    {
        statusApl = false;
        printf("Aplikasi anda ditolak!\n");
    }
    else
    {
        statusApl = true;
        printf("Aplikasi anda diterima");
    }
    
}