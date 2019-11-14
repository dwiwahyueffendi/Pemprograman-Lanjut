#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int i,j,k,l=0,sementara[18];
	float hasilakhir[6] = {0,0,0,0,0,0};
	int angka[3][3][3] = {{{5,1,5},{6,7,8},{1,2,1}},{{-3,2,5},{-4,3,4},{-5,7,8}},{{1,2,3},{4,-5,6},{2,3,4}}};	

	for(i=0;i<2;i++)
	{
		printf (" x | y | z\n");
		
		for(j=0;j<3;j++)
		{													
			for(k=0;k<3;k++)
				{
					printf(" %d",angka[i][j][k]);	
	
				}
			printf("\n");
		}
		printf("\n");	
	}

	for ( i = 0; i<=2; i++)
	{
		for ( j = 0; j<3; j++)
		{
			for ( k = 0; k<3; k++)
			{
				if(j<2)
				{
					sementara[l] = angka[i][j][k] - angka[i][j+1][k];
					printf(" %i",sementara[l]);
					l++;
				}
			}
			printf("\n");
		}
	}
	
	for (i = 0; i<=17; i++)
	{
		sementara[i] = pow(sementara[i],2);
		
		if(i<3)
		{
			hasilakhir[0] = hasilakhir[0] + sementara[i];
		}
		else if (i<6)
		{
			hasilakhir[1] = hasilakhir[1] + sementara[i];
		}
		else if (i<9)
		{
			hasilakhir[2] = hasilakhir[2] + sementara[i];
		}
		else if (i<12)
		{
			hasilakhir[3] = hasilakhir[3] + sementara[i];
		}	
		else if (i<15)
		{
			hasilakhir[4] = hasilakhir[4] + sementara[i];			
		}
		else
		{
			hasilakhir[5] = hasilakhir[5] + sementara[i];			
		}
	}
	
	hasilakhir[0] = sqrt(hasilakhir[0]);
	hasilakhir[1] = sqrt(hasilakhir[1]);
	hasilakhir[2] = sqrt(hasilakhir[2]);
	hasilakhir[3] = sqrt(hasilakhir[3]);
	hasilakhir[4] = sqrt(hasilakhir[4]);
	hasilakhir[5] = sqrt(hasilakhir[5]);

	float akhirsekali1 = (hasilakhir[0] + hasilakhir[1]);
	float akhirsekali2 = (hasilakhir[2] + hasilakhir[3]);
	float akhirsekali3 = (hasilakhir[4] + hasilakhir[5]);

	printf(" %lf\n", akhirsekali1);
	printf(" %lf\n", akhirsekali2);
	printf(" %lf\n", akhirsekali3);

}
