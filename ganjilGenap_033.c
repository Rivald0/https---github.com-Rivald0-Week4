#include <stdio.h>

int main (int argc, char * argv[])
{
    //Kamus
    int x;
    //algoritma
    printf("Masukkan Sebuah Bilangan Genap: ");
    scanf ("%d", &x);
    if (x%2==0)
        printf("%d bilangan genap\n", x);
    else
        printf("%d bilangan ganjil\n", x);
    getch();
    return 0;
}