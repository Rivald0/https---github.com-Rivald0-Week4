//Nama:  Josua Sembiring//
//NIM:   13321009//
//Kelas: 31TK1//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main (int argc, char*argv[])
{
	float pokok_utang=atof(argv[1]);
	int masa_tunggak=atoi(argv[2]);
	char peringkat_kredit=atol(argv[3]);
	bool statusApl=false;

	printf("Masukkan pokok utang: %.2f\n",pokok_utang);

	if(pokok_utang <= 100000000)
	{
		printf("Masukkan masa tunggak:%d\n",masa_tunggak);
    }
	if(masa_tunggak <= 6)
    {
		printf("Peringkat utang anda Jadwalkan\n\n");
    }	
    else
    {
		printf("Peringkat utang anda Gagal\n\n");
	}
	if (pokok_utang > 100000000)
	{
		printf("Masukkan masa tunggak:%d\n",masa_tunggak);
    }
    if(masa_tunggak <= 12)
	{
    	printf("Peringkat utang anda Jadwalkan\n\n");
    }	
    else
	{
    	printf("Peringkat utang anda Gagal\n\n");
	}

	return 0;

}
