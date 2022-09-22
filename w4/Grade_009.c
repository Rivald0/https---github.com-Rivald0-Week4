//Nama:  Josua Sembiring//
//NIM:   13321009//
//Kelas: 31TK1//

#include <stdio.h>
int main()
{
    float x;
    char ch;

    printf("Masukan nilai kuliah anda: ");
    scanf("%f", &x);
    if(x > 80) ch = 'A';
    else if(x >= 65) ch = 'B';
    else if(x >= 50) ch = 'C';
    else if(x >= 35) ch = 'D';
    else ch = 'E';
    printf("Anda mendapatkan grade %c\n", ch);
    getchar();

    return 0;
}