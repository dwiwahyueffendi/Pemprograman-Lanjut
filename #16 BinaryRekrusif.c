#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void cetak();
void urutkan();

main()
{	
	int data[8] = {2, 11, 24, 3, 18, 5, 46, 7};
	int i, j, jumlahdata, cari, posisi;

	printf("\nData Sebelum di Urutkan\n");
    cetak(i, data);

    printf("\nData Setelah di Urutkan\n");
    urutkan(i,j,data);

	jumlahdata = sizeof(data)/sizeof(data[0]);
	printf("\n\nJumlah data : %d", jumlahdata);

	printf("\n\nMasukkan Angka Yang Di Cari : "); 
	scanf("%d", &cari);
    
	posisi = BinarySearch(data, 0, jumlahdata-1, cari);
    
    if(posisi < 0)
	{
      printf("Angka %d pada data array tidak ditemukan", cari);
    }
	
	else 
	{
      printf("Angka %d ditemukan pada indeks ke %d", cari, posisi+1);
    }
    getch();
    return 0;
}

void cetak(int i, int data[])
{
    for(i=0; i<8; i++)
	{
        printf("%d, ", data[i]);
    }
}

void urutkan(int i, int j, int data[])
{
	int x, nilai;
    for (i = 0; i < 8 - 1; i++)
	{
    	for (j = 8 - 1; j > i; j--)
		{
        	if (data[i] > data[j])
			{
          	int temp = data[j];
          	data[j] = data[i];
          	data[i] = temp;
        	}
    	}
	}
    
    x=8;
    for(i=0;i<x;i++)
	{	
		nilai = data[i];
        printf("%d, ", nilai);
    }
        printf("\n");
}

int BinarySearch(int data[], int a, int b, int c)
{
    int nilaitengah = (a+b)/2;
    
	if(a>b)
	{
      return -1;
    } 
    
	else if(data[nilaitengah] == c)
	{
      return nilaitengah;
    }
    
	else if(data[nilaitengah] < c)
	{
      return BinarySearch(data, nilaitengah+1, b, c);
    } 
    
	else 
	{
      return BinarySearch(data, a, nilaitengah-1, c);
    }
}
