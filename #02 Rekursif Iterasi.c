#include<stdio.h>
#include <stdlib.h>
#include <conio.h>

int pilihan, i;
float a, n, hasil;
float perpangkatan(float n, float a)
{
	if(a == 1)
	{
		return n;
	}
	else if(a == 0)
	{
		return 1;
	}
	else if(a <=- 1)
	{
		return perpangkatan(n, a+1)/n;
	}
	else
	{
		return n * perpangkatan(n, a-1);
	}
}

float iterasi(float n, float a)
{
	hasil = 1;
	if (a==0)
	{
		return 0;
	}
	else if (a<=-1)
	{
	for(i=-1; i>=a; i--)
	{
		hasil = hasil * (1.0/n);
	}
	}
	else
	{
		for(i=1; i<=a ; i++)
		{
			hasil = hasil*n;
		}
	}
	return hasil;
}

main()
{

	printf("================================================\n");
	printf("              PEMPROGRAMAN LANJUT A             \n");
	printf("     TUGAS 2 PROGRAM SEDERHANA PERPANGKATAN     \n");
	printf("================================================\n");
	printf("           Nama : Dwi Wahyu Effendi\n");
	printf("           NPM  : 18081010017\n");
	printf("================================================\n\n");
	printf("Tekan terserah untuk memulai program!!!");
	getch();
	system("cls");
	
	menu:
	printf("\n\t============================================");
	printf("\n\t      Pilih Menu Opsi Perpangkatan\n");       
	printf("\t==============================================");   
	printf("\n\t1. Menggunakan Metode Rekursif\n");	
	printf("\t2. Menggunakan Metode Iterasi\n");
	printf("\t3. Keluar");
	printf("\n\tMasukkan Pilihan Opsi Menu = ");
	scanf("%d", &pilihan);
	getch();
	system("cls");
	
		switch(pilihan)
	{
		case 1 :
			printf("\n===== Metode Rekursif =====\n");
			printf("Masukan Angka       : ");  
			scanf("%f", &n);
			printf("Masukan Pangkat     : ");   
			scanf("%f", &a);
			printf("Hasil %.3f pangkat (%.3f) : %.3f", n, a,perpangkatan(n, a));
			printf("\nKembali Ke Menu Tekan Terserah\n");
			getch();
			system("cls");
			goto menu;
			break;
		case 2 :
			printf("\n==== Metode Iterasi ====\n");
			printf("Masukan Angka       : ");
			scanf("%f", &n);
			printf("Masukan Pangkat     : ");
			scanf("%f", &a);

			printf("Hasil %.3f pangkat (%.3f) : %.3f", n, a, iterasi(n,a));
			printf("\nKembali Ke Menu Tekan Terserah\n");
			getch();
			system("cls");
			goto menu;
			break;
		case 3 :
			printf("\n\t====== Terimakasih telah menggunakan program sederhana ini ======");
			return 0;
		default : 
			printf("\tMasukkan Pilihan Yang Benar (1-3)");
			goto menu;
			break;
	}
	
	return 0;
}
