#include<stdio.h>
#include<math.h>
main()
{
	int a, b, c, d, e, f, g, h, i;
	float hasil1, hasil2, hasil;
	int data[2][3][3] = {{{5, 1, 5} , {6, 2, 8} , {1, 2, 1}} , {{-3, 2, 5} , {-4, 3, 4} , {-5, 7, 8}}};	
	
	for (a=0 ; a<2 ; a++)
	{
		for(b=0 ; b<3 ; b++ )
		{
			for(c=0 ; c<3 ; c++)
			{
				printf("Array %d baris %d kolom %d bernilai %d\n", a+1, b+1, c+1, data[a][b][c]);
			}
		}
	}
	
	printf("\nMasukkan Koordinat X1 = ");
	scanf("%d", &a);
	printf("Masukkan Koordinat Y1 = ");
	scanf("%d", &b);
	printf("Masukkan Koordinat Z1 = ");
	scanf("%d", &c);
	printf("\nMasukkan Koordinat X2 = ");
	scanf("%d", &d);
	printf("Masukkan Koordinat Y2 = ");
	scanf("%d", &e);
	printf("Masukkan Koordinat Z2 = ");
	scanf("%d", &f);
	printf("\nMasukkan Koordinat X3 = ");
	scanf("%d", &g);
	printf("Masukkan Koordinat Y3 = ");
	scanf("%d", &h);
	printf("Masukkan Koordinat Z3 = ");
	scanf("%d", &i);
	
	a = data[a];
	
	hasil1 = sqrt((pow((a-d),2)) + (pow((b-e),2)) + (pow((c-f),2)));
	hasil2 = sqrt((pow((d-g),2)) + (pow((e-h),2)) + (pow((f-i),2)));
	hasil = hasil1 + hasil2;
	printf("\nGaris 1 = %f\n", hasil1);
	printf("Garis 2 = %f\n", hasil2);
	printf("Total Panjang Garis = %f", hasil);
	
}
