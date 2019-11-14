#include <stdio.h>
#include <conio.h>

struct mahasiswa
{	
	int npm;
	float ipk;
};
typedef struct mahasiswa mhs;

int main()
{
	mhs data[5];
	data[0].npm = 111;
	data[0].ipk = 3.60; 	

	data[1].npm = 112;
	data[1].ipk = 3.50; 	

	data[2].npm = 113;
	data[2].ipk = 3.40;
	
	data[3].npm = 114;
	data[3].ipk = 4.00;
	
	data[4].npm = 115;
	data[4].ipk = 3.90;

	int i, pilihan;
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

	if(pilihan==1)
	{
		for(i=0;i<5;i++)
		{
			printf("\n\tNPM %d mendapatkan IPK %f\n", data[i].npm, data[i].ipk);
		}
	} 
	else if(pilihan==2)
	{
		for(i=4;i>=0;i--)
		{
			printf("\n\tNPM %d mendapatkan IPK %f\n", data[i].npm, data[i].ipk);
		}	
	}
	else if(pilihan==3)
	{
		int search;
		printf("Cari NPM : ");
		scanf("%d", &search);
		
		for(i=0;i<5;i++)
		{
			if(data[i].npm == search)
			{
				printf("NPM %d = IPK %f\n", data[i].npm, data[i].ipk);
			}
		}
	}
	else if(pilihan==4)
	{
		printf("\n\t====== Terimakasih telah menggunakan program sederhana ini ======");
		return 0;
	}
	else
	{
		printf("\n\tMasukkan Pilihan Yang Benar (1-4)");
		getch();
		system("cls");
		goto menu;
	}
}
