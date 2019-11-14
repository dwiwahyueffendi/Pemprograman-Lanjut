#include<stdio.h>

int pilihan, i, search;
char nama_mahasiswa [][10] = {"budi","tono","andre","ade","joko"};
int npm[5] = {111, 112, 113, 114, 115};
double ipk[5] = {4.00, 3.75, 3.00, 3.50, 3.65};
void tampilkan();
void reverse();
void cari();

int main()
{	
	printf("===========================================\n");
	printf("           PEMPROGRAMAN LANJUT A           \n");
	printf("      TUGAS 3 PROGRAM SEDERHANA ARRAY      \n");
	printf("===========================================\n");
	printf("         Nama : Dwi Wahyu Effendi\n");
	printf("         NPM  : 18081010017\n");
	printf("===========================================\n\n");
	printf("Tekan terserah untuk memulai program!!!");
	getch();
	system("cls");
	menu :
	printf("\n\t============================================");
	printf("\n\t          Pilih Menu Opsi \n");    
	printf("\t============================================");   
	printf("\n\t1. Tampilkan data Mahasiswa\n");
	printf("\t2. Tampilkan data Mahasiswa secara reverse\n");
	printf("\t3. Search Data Mahasiswa\n");
	printf("\t4. Keluar");
	printf("\n\tMasukkan Pilihan Opsi Menu = ");
	scanf("%d", &pilihan);
	system("cls");
	
	switch(pilihan)
	{
		case 1 :
			tampilkan();
			getch();
			system("cls");
			goto menu;
		case 2 :
			reverse();
			getch();
			system("cls");
			goto menu;
		case 3 :
			cari :
			printf("\n\tMasukkan NPM = ");
			scanf("%d", &search);
				
			for(i=0;i<5;i++)
			{
				if(npm[i] == search)
				{
					printf("\tNpm  = %d\n", npm[i]);
					printf("\tipk  = %.2lf\n", ipk[i]);
					getch();
					system("cls");
					goto menu;
					break;
				}
			}
		case 4 :
			printf("\n\t====== Terimakasih telah menggunakan program sederhana ini ======");
			return 0;
		default : 
			printf("\n\tMasukkan Pilihan Yang Benar (1-4)");
			getch();
			system("cls");
			goto menu;
	}
}

void tampilkan()
{
	int no=1;
	printf("\n\tDaftar IPK Mahasiswa\n");
	for (i=0; i<=4; i++)
	{	
		printf("\n\t%d . Nama  = %s\n", no++, nama_mahasiswa[i]); 
		printf("\t     NPM = %d\n", npm[i]);
		printf("\t     IPK  = %.2lf\n", ipk[i]);
	}	
}

void reverse()
{
	int no=5;
	printf("\n\tDaftar IPK Reverse\n");
	for(i=4; i>=0; i--)
	{
		printf("\n\t%d . Nama  = %s\n", no--, nama_mahasiswa[i]); 
		printf("\t      NPM = %d\n", npm[i]);
		printf("\t     IPK = %.2lf\n", ipk[i]);
	}
}

//void cari()
//{
//	printf("\n\tMasukkan NPM = ");
//	scanf("%d", search);
//				
//	for(i=0;i<5;i++)
//	{
//		if(npm[i] == search)
//		{
//			//printf("Nama = %s\n", nama[][i]);
//			printf("\nNpm  = %d\n", npm[i]);
//			printf("ipk  = %.2lf\n", ipk[i]);
//			break;
//		}
//		else
//		{
//			printf("\n\tMasukkan Inputan yang benar!!!");
//			getch();
//			break;
//		}
//	}
//}
