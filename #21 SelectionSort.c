#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>



void main()
{
	int data[]={1,3,2,10,20,7,6,5,4,8,9,13,14,12,11,15,17,16,18,19};	
	
	int jumlahdata, i, j, temp, nilaiterkecil;

    jumlahdata = sizeof(data)/sizeof(data[0]);
	
	printf("\n Data sebelum di urutkan\n ");
	
	for(i=0; i<jumlahdata ; i++)
	{
		printf("%d, ", data[i]);
	}
	
	printf("\n\nJumlah data = %d", jumlahdata);
	
	for(i=0; i<jumlahdata; i++)
	{
		nilaiterkecil=i;
		
		for(j=i; j<jumlahdata; j++)
		{
			if(data[j]<data[nilaiterkecil])
			{
				nilaiterkecil = j;
			}
		}
		
		temp = data[i];
		data[i] = data[nilaiterkecil];
		data[nilaiterkecil] = temp;
	}
	
	printf("\n\n Data setelah di urutkan\n ");
	
	for(i=0; i<jumlahdata; i++)
	{
		printf("%d, ", data[i]);
	}
	getchar();
}
