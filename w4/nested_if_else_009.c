//Nama:  Josua Sembiring//
//NIM:   13321009//
//Kelas: 31TK1//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int umur;
    float gaji;
    bool statusApl = false;
    umur = atoi(argv[1]);
    gaji = atoi(argv[2]);

    printf("Umur anda; %d\n", umur);
    scanf("%d", &umur);
    printf("Gaji anda; %.2f\n", gaji);
    scanf("%f\n", &gaji);

    if(umur>60){
        statusApl = false;
        printf("Aplikasi anda ditolak:\n");
    }
    else if (gaji<300000){
        statusApl = false;
        printf("Aplikasi anda ditolak!\n");
    }
    else
    {
        statusApl = true;
        printf("Aplikasi anda diterima! \n");
    }

}
