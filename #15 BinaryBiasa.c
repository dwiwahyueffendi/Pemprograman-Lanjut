#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main() 
{
	int i, j, x, nilai, c, awal, akhir, tengah, n, cari;
   
	int data[10] = {13, 7, 10, 16, 27, 29, 36, 48, 60, 20};
	int jum = 10;
 
 	printf("\nData Sebelum di Urutkan\n");
 	for(i=0; i<10; i++)
	{
        printf("%d, ", data[i]);
    }
    
    printf("\n\nData Setelah di Urutkan\n");
    for (i = 0; i < 9; i++)
	{
    	for (j = 10 - 1; j > i; j--)
		{
        	if (data[i] > data[j])
			{
          	int temp = data[j];
          	data[j] = data[i];
          	data[i] = temp;
        	}
    	}
	}
    
    x=10;
    for(i=0;i<x;i++)
	{	
		nilai = data[i];
        printf("%d, ", nilai);
    }
        printf("\n");

	printf("\n\nMasukkan Data yang ingin dicari = \n");
	scanf("%d", &cari);
 
	awal = 0;
	akhir = jum - 1;
	tengah = (awal+akhir)/2;
 
	for(awal = 0; awal<=akhir ; awal++)
	{
    	if (data[tengah] < cari)
    	{
    		awal = tengah + 1;    
    	}
		else if (data[tengah] == cari) 
		{
        	printf("Angka %d berada pada array indeks ke %d.\n", cari, tengah+1);
        	break;
      	}
      	else
        	akhir = tengah - 1;
    		tengah = (awal + akhir)/2;
   }
   
	if (awal > akhir)
		printf("Tidak Ketemu %d.\n", cari);
	return 0;  
}
