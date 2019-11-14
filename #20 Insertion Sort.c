#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void main()
{
	int data[] = {2,1,3,4,5,9,8,6,0,7};
	int i, j;
	
	for(i=1; i<10; i++)
	{
		for(j=i; j>0 && data[j]<data[j-1]; j--)
		{
			int temp=data[j-1];
			data[j-1]=data[j];
			data[j]=temp;
		}
	}

	printf("\n");
	for(i=0; i<10; i++)
	{
		printf("%d ", data[i]);
	}
	getchar();

}
