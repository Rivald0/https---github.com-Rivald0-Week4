/*
Nama : Rivaldo Y.G Butarbutar
NIM : 13322033 
Deskripsi : Menentukan Bilangan ganjil dan genap dengan menggunakan if.
Tanggal : 21 September 2022
*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * argv[])
{
    int x = atoi(argv[1]);

    if (x%2==0)
    {
        printf("%d bilangan genap\n", x);
    }
    else
    {
        printf("%d bilangan ganjil\n", x);
    }
    return 0;
}