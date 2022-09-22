/*
Nama : Rivaldo Y.G Butarbutar
NIM : 13322033 
Deskripsi : Menentukan Grade mahasiswa secara otomatis hanya dengan memasukkan nilainya.
Tanggal : 21 September 2022
*/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
    float x = atof(argv[1]);
    char ch;

    if (x>80)
    {
        ch='A';
    }
    else if (x>=65)
    {
        ch='B';
    }
    else if (x>=50)
    {
        ch='C';
    }
    else if (x>=35)
    {
        ch='D';
    }
    else 
    {
        ch='E';
    }

    printf("Anda mendapatkan grade %c\n", ch);

    return 0;
}