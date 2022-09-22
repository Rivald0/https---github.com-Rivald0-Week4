#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Masukkan Suhu Zat:  ");
    scanf("%d", &x);

    if(x < 0)
        printf("Wujud air adalah padat");

    else{
        if (x < 100)
            printf("Wujud air adalah cair");
        else
            printf("Wujud air adalah gas");
        }
    return 0;

}
