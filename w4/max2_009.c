#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("Masukkan nilai pertama: ");
    scanf("%d", &x);
    printf("Masukkan nilai kedua: ");
    scanf("%d", &y);

    if(x > y)
        printf("%d adalah nilai terbesar \n");
    else{
        if(y > x)
            printf("%d adalah nilai terbesar \n");
        else
            printf("Oops, sepertinya terdapat kesalahan");
    }

    return 0;
}
