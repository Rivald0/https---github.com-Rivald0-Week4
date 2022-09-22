#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    printf("Masukkan nilai pertama: ");
    scanf("%d", &x);
    printf("Masukkan nilai kedua: ");
    scanf("%d", &y);
    printf("Masukkan nilai ketiga: ");
    scanf("%d", &z);

    if(x > y && x > z)
        printf("%d adalah nilai terbesar \n");
    else{
        if(y > x && y > z)
            printf("%d adalah nilai terbesar \n");
        else
            if( z > x && z > y)
            printf("%d adalah nilai terbesar \n");
            else
            printf("Oops, terdapat kesalahan pada input");
    }

    return 0;
}
