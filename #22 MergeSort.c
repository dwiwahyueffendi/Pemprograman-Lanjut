#include <stdio.h>

void mergeSort(int data[], int low, int mid, int high);
void partition(int data[], int low, int high);

int main()
{
    int data[50];
    int i, banyak;
    
    printf("Berapa Banyak Data : ");
    scanf("%d", &banyak);
    
	
    
	for(i=0; i<banyak; i++)
    {
    	printf("Inputan Data %d: ", i+1);
        scanf("%d", &data[i]);
    }
    
	partition(data, 0, banyak - 1);
    printf("Setelah di Merge Sorting:\n");
    
	for(i = 0; i < banyak; i++)
    {
        printf("%d, ", data[i]);
    }
    
	return 0;
}

void partition(int data[],int low,int high)
{
    int mid;
    if(low < high)
    {
        mid = (low + high) / 2;
        partition(data, low, mid);
        partition(data, mid + 1, high);
        mergeSort(data, low, mid, high);
    }
}

void mergeSort(int data[],int low,int mid,int high)
{
    int i, mi, k, lo, temp[50];
    lo = low;
    i = low;
    mi = mid + 1;
    
	while ((lo <= mid) && (mi <= high))
	{
        if (data[lo] <= data[mi])
        {
            temp[i] = data[lo];
        	lo++;
        }
        else
        {
            temp[i] = data[mi];
            mi++;
        }
        i++;
    }
    
	if (lo > mid)
    {
        for (k = mi; k <= high; k++)
        {
            temp[i] = data[k];
            i++;
        }
    }
    else
    {
        for (k = lo; k <= mid; k++)
        {
            temp[i] = data[k];
            i++;
        }
    }
    
	for (k = low; k <= high; k++)
    {
        data[k] = temp[k];
    }
}
