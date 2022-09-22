/*
Nama : Rivaldo Y.G Butarbutar
NIM : 13322033
Deskripsi : Membandingkan 3 angka dan menentukan nilai terbesar dari ketiga angka tersebut.
Tanggal : 21 September 2022
*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char*argv[])
{
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    int z = atoi(argv[3]);


    printf("Nilai yang anda masukkan adalah %d, %d, %d\n", x, y, z);

    if(x >= y && x >= z)
    {
        printf("%d Nilai Terbesar", x);
    }
    else if(y >= x && y >= z)
    {
    printf("%d Nilai Terbesar", y);
    }
    else if( z >= x && z >= y)
    {
        printf("%d Nilai Terbesar", z);
    }
    return 0;
}