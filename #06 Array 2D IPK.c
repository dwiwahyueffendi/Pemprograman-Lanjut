#include<stdio.h>

int main()
{

	printf("\n\t===========================================\n");
	printf("\t            PEMPROGRAMAN LANJUT A            \n");
	printf("\t       TUGAS 6 PROGRAM ARRAY 2 DIMENSI       \n");
	printf("\t===========================================\n");
	printf("\t         Nama : Dwi Wahyu Effendi\n");
	printf("\t         NPM  : 18081010017\n");
	printf("\t===========================================\n\n");
	printf("\tTekan terserah untuk memulai program!!!");
	getch();
	system("cls");
	
	int i, j, nilai, jumlahsemester, jumlahmatkul, sks[50][30], jumlahnilai = 0, skssmt[14], jumlahsks, totalsks=0;
	char mk[30], nilaihuruf[50][30], matkul[50][50][30];
	float ipk, nr[14], totalnr=0, a;
	
	printf("\n\t==============================================\n");
	printf("\tProgram Menghitung IPK Mahasiswa\n");
	printf("\t==============================================\n");
	printf("\tMasukkan Jumlah Semester: ");
	scanf("%d", &jumlahsemester);

    	for (i = 0; i < jumlahsemester; i++)
		{
    		jumlahnilai = 0;
    		jumlahsks = 0;
    		printf("\tMasukkan Jumlah Mata Kuliah Semester %d: ", i + 1);
    		scanf("%d", &jumlahmatkul);

        	for (j = 0; j < jumlahmatkul; j++)
			{
        		printf("\n\tMasukkan mata kuliah ke %d\n", j + 1);
        		printf("\tMasukkan nama matkul: ");
        		scanf(" %s", matkul[i][j]);
        		printf("\tMasukkan jumlah sks matkul: ");
        		scanf("%d", &sks[i][j]);
        		printf("\tMasukkan nilai matkul: ");
        		scanf(" %c", &nilaihuruf[i][j]);
          
				if (nilaihuruf[i][j] == 'A')
				{
            		nilai = 4 * sks[i][j];
          		}
          		else if (nilaihuruf[i][j] == 'B') 
				{
	            	nilai = 3 * sks[i][j];
	          	}
	          	else if (nilaihuruf[i][j] == 'C')
				{
	            	nilai = 2 * sks[i][j];
	          	}
	          	else if (nilaihuruf[i][j]=='D') 
				{
	            	nilai = 1 * sks[i][j];
	          	}
	          	else if (nilaihuruf[i][j]=='E')
				{
	            	nilai = 0 * sks[i][j];
	          	}
	          	else
				{
	            	printf("Input salah!\n");
	            	return 0;
	          	}
	          		jumlahnilai = jumlahnilai + nilai;
	          		jumlahsks = jumlahsks + sks[i][j];
        	}
        
        	if(jumlahsks > 24)
			{
        		printf("\tJumlah SKS Semester Lebih dari 24\n");
        		return 0;
        	}
			else
			{
        		skssmt[i] = jumlahsks;
        		a = jumlahnilai / jumlahsks;
        		nr[i] = a;
        	}   
    	}


printf("\n\t==============================================\n");
printf("\t\tTranskrip Nilai\n");
printf("\t==============================================\n");

for(i = 0; i < jumlahsemester; i++)
{
    printf("\nHasil Semester %d :\n", i+1);
    printf("\n%12s%12s%12s","Mata Kuliah", "SKS", "Nilai\n");
    
	for(j = 0; j < jumlahmatkul; j++)
	{
    	printf("%12s%12d%12c\n",matkul[i][j],sks[i][j],nilaihuruf[i][j]);
    }
    
	printf("\nSKS\t: %d\n", skssmt[i]);
    printf("Nilah Rata\t: %f\n", nr[i]);
    totalsks = totalsks + skssmt[i];
    totalnr = totalnr + nr[i];
    printf("--------------------------------------------\n");
}

	ipk = totalnr/jumlahsemester;
	printf("\nTotal SKS\t: %d\n", totalsks);
	printf("IPK\t\t: %f\n", ipk);
	printf("==============================================\n");
	return 0;
}
