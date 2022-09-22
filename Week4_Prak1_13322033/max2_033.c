/*
Nama : Rivaldo Y.G Butarbutar
NIM : 13322033
Deskripsi : Membandingkan 2 angka dan menentukan nilai terbesar dari kedua angka tersebut.
Tanggal : 21 September 2022
*/


#include <stdio.h>
#include <stdlib.h>

int main (int argc, char*argv[])
{
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);


    printf("Nilai Yang Anda Masukkan adalah %d dan %d\n", x, y);

    printf("\n");
    if (x>y)
    {
        printf("Nilai  Terbesar  adalah %d\n\n", x);
        printf("Maka %d Lebih Besar dari %d\n", x, y);
    }
    else if (x<y)
    {
        printf("Nilai  Terbesar  adalah %d\n", y);
        printf("Maka %d Lebih Besar dari %d", y, x);
    }
    
    else
    {
        printf("%d sama dengan %d", x, y);
    }
    printf("\n");
    
}