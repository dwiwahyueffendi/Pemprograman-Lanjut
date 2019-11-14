#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void Ascending();
void Descending();

int data[20] = {1,2,3,4,2,4,6,4,8,6,5,4,3,4,5,6,7,8,3,2};

main()
{

	int jumlahdata, i;
		
	printf("Data Sebelum Sorting : \n");
	
	for(i=0; i<20; i++)
	{
		printf("%d ", data[i]);
	}
	
	jumlahdata = sizeof(data)/sizeof(data[0]);	
	
	printf("\n\nJumlah Data = %d", jumlahdata);
	
	Ascending();
	
	printf("\n\nData Setelah Sorting Ascending : \n");
	for(i=0; i<20; i++)
	{
		printf("%d ", data[i]);
	}
	Descending();
	printf("\n\nData Setelah Sorting Descending : \n");
	for(i=0; i<20; i++)
	{
		printf("%d ", data[i]);
	}
	
	getchar();
	return 0;
}

void Ascending()
{
	int i, j;
	
	for(i=0; i<20-1; i++)
	{
		for(j=0; j<20-1; j++)
		{
			if(data[j+1] < data[j])
			{
				int temp=data[j];
				data[j]=data[j+1];
				data[j+1]=temp;
			}
		}
	}
}

void Descending()
{
	int i, j;
	for(i=0; i<20-1; i++)
	{
		for(j=0; j<20-1; j++)
		{
			if(data[j+1]>data[j])
			{
				int temp=data[j];
				data[j]=data[j+1];
				data[j+1]=temp;
			}
		}
	}
}
