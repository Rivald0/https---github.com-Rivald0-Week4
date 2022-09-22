
#include <stdio.h>
int main()
{
    int x;

    printf("Masukan sebuah bilangan bulat: ");
    scanf("%d", &x);
    if (x % 2 == 0);
        printf("%d adalah bilangan genap", x);
    else 
        printf("%d adalah bilangan ganjil", x);
    getch();
    return 0;
    
}