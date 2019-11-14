#include<stdio.h>

char nama[20], agama[20], alamat[20], goldar[20];
int npm, umur, nohp, pilihan;
void buat();
void lihat();

main()
{
	printf("===========================================\n");
	printf("           PEMPROGRAMAN LANJUT A           \n");
	printf("     TUGAS 1 PROGRAM SEDERHANA BIODATA     \n");
	printf("===========================================\n");
	printf("         Nama : Dwi Wahyu Effendi\n");
	printf("         NPM  : 18081010017\n");
	printf("===========================================\n\n");
	printf("Tekan terserah untuk memulai program!!!");
	getch();
	system("cls");
	menu:
	printf("\n\t============================================");
	printf("\n\t          Pilih Menu Opsi Biodata\n");    
	printf("\t============================================");   
	printf("\n\t1. Buat Biodata Mahasiswa\n");
	printf("\t2. Lihat Biodata Mahasiswa\n");
	printf("\t3. Keluar");
	printf("\n\tMasukkan Pilihan Opsi Menu = ");
	scanf("%d", &pilihan);
	getch();
	system("cls");
	
	switch(pilihan)
	{
		case 1 :
			buat();
			getch();
			system("cls");
			goto menu;
			break;
		case 2 :
			lihat();
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

void buat()
{
	printf("\n\t===== Silahkan Isi Kuisoner Biodata ini =====");
	printf("\n\tMasukkan Nama = ");
	scanf("%s", &nama);
	printf("\tMasukkan NPM = ");
	scanf("%d", &npm);
	printf("\tMasukkan Umur = ");
	scanf("%d", &umur);
	printf("\tMasukkan Agama = ");
	scanf("%s", &agama);	
	printf("\tMasukkan Alamat = ");
	scanf("%s", &alamat);
	printf("\tMasukkan Nomer Hp = ");
	scanf("%d", &nohp);
	printf("\tMasukkan Golongan Darah = ");
	scanf("%s", &goldar);
	printf("\n\tData Telah di Simpan");
}

void lihat()
{	
	printf("\n==== Data Mahasiswa Yang Di Simpan ====");
	printf("\nNama	= %s\n", &nama);
	printf("NPM	= %d\n", npm);
	printf("Umur	= %d\n", umur);
	printf("Agama	= %s\n", &agama);
	printf("Alamat	= %s\n", &alamat);
	printf("No HP	= %d\n", nohp);
	printf("Goldar	= %s\n", &goldar);
	
}
