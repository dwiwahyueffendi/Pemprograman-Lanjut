#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int i = 0;

void buatdata();
void tampilkan_semua();
void tampilkan_nama();
void cek_total();
void cari_umur();
void saldomaxmin();
void kota();

struct alamat
{
	char jalan[50];
	char kecamatan[20];
	char kelurahan[20];
	char kota[20];
	char provinsi[20];
};

struct tanggallahir
{
	int tanggal;
	int bulan;
	int tahun;
};

struct nasabah
{
	char nama[20];	
	char norekening[20];
	char bank[20];
	int umur;
	int saldo;	
	struct alamat alt;	
	struct tanggallahir ttl;
}norek[50];


	
main()
{
	int pilihan;
	printf("\n\t===========================================\n");
	printf("\t           PEMPROGRAMAN LANJUT A           \n");
	printf("\t      TUGAS 5 PROGRAM SEDERHANA STRUCT     \n");
	printf("\t===========================================\n");
	printf("\t         Nama : Dwi Wahyu Effendi\n");
	printf("\t         NPM  : 18081010017\n");
	printf("\t===========================================\n\n");
	printf("\tTekan terserah untuk memulai program!!!");
	getch();
	system("cls");
	menu:
	printf("\n\t============================================");
	printf("\n\t          Pilih Menu Opsi Biodata\n");    
	printf("\t============================================");   
	printf("\n\t1. Buat Data Nasabah\n");
	printf("\t2. Tampilkan semua data nasabah\n");
	printf("\t3. Akumulasi saldo total nasabah\n");
	printf("\t4. Tampilkan Nasabah dengan umur tertentu\n");
	printf("\t5. Tampilkan Nasabah dengan saldo terbanyak dan saldo tersedikit\n");
	printf("\t6. Tampilkan Nasabah berdasarkan kota\n");
	printf("\t7. Keluar\n");
	printf("\n\tMasukkan Pilihan Opsi Menu = ");
	scanf("%d", &pilihan);
	system("cls");
	
	switch(pilihan)
	{
		case 1 :
			buatdata();
			getch();
			system("cls");
			goto menu;
			break;
		case 2 :
			tampilkan_semua();
			getch();
			system("cls");
			goto menu;
			break;
//		case 3 :
//			tampilkan_nama();
//			getch();
//			system("cls");
//			goto menu;
//			break;
		case 3 :
			cek_total();
			getch();
			system("cls");
			goto menu;
			break;
		case 4 :
			cari_umur();
			getch();
			system("cls");
			goto menu;
			break;
		case 5 :
			saldomaxmin();
			getch();
			system("cls");
			goto menu;
			break;
		case 6 :
		kota();
		getch();
		system("cls");
		goto menu;
		break;
		case 7 :
			printf("\n\t====== Terimakasih telah menggunakan program sederhana ini ======");
			getch();
			return 0;
		default : 
			system("cls");
			printf("\n\tMasukkan Pilihan Yang Benar (1-7)");
			getch();
			system("cls");
			goto menu;
			break;
	}
	return 0;
}

void buatdata()
{
	int pilih;
	int sekarang = 2019;
	buat:
	printf("\n\t========== Buat Data Nasabah ==========");
	printf("\n\tPilih Bank yang akan di gunakan :");
	printf("\n\t1. BCA");
	printf("\n\t2. BTPN");
	printf("\n\t3. BNI");
	printf("\n\t4. BRI");
	printf("\n\tMasukkan pilihan bank yang di inginkan = ");
	scanf("%d", &pilih);
	
	switch(pilih)
	{
		case 1:
		{
			strcpy(norek[i].bank,"BCA");
			system("cls");
			printf("\n\tBuat Data Nasabah BCA");
			printf("\n\tMasukkan Nama			 : ");
			scanf("%s",&norek[i].nama);
			printf("\tMasukkan No rek			 : ");
			scanf("%s",&norek[i].norekening);
			break;
		}
		//break;
		case 2:
		{
			strcpy(norek[i].bank,"BTPN");
			system("cls");
			printf("\n\tBuat Data Nasabah BTPN");
			printf("\n\tMasukkan Nama			 : ");
			scanf("%s",&norek[i].nama);
			printf("\tMasukkan No rek			 : ");
			scanf("%s",&norek[i].norekening);	
			break;
		}
		//break;
		case 3:
		{
			strcpy(norek[i].bank,"BNI");
			system("cls");
			printf("\n\tBuat Data Nasabah BNI");
			printf("\n\tMasukkan Nama			 : ");
			scanf("%s",&norek[i].nama);
			printf("\tMasukkan No rek			 : ");
			scanf("%s",&norek[i].norekening);
			break;
		}
		//break;
		case 4:
		{
			strcpy(norek[i].bank,"BRI");
			system("cls");
			printf("\n\tBuat Data Nasabah BRI");
			printf("\n\tMasukkan Nama			 : ");
			scanf("%s",&norek[i].nama);
			printf("\tMasukkan No rek			 : ");
			scanf("%s",&norek[i].norekening);
			break;
		}
		//break;
		default :
		{		
			system("cls");
			printf("\n\tMasukkan Pilihan Yang Benar (1-4)");
			getch();
			system("cls");
			goto buat;
			break;
		}
	}
	
	printf("\tMasukkan Tanggal Lahir		 : ");
	scanf("%d",&norek[i].ttl.tanggal);
	fflush(stdin);
	printf("\tMasukkan Bulan Lahir		 : ");
	scanf("%d",&norek[i].ttl.bulan);
	fflush(stdin);
	printf("\tMasukkan Tahun Lahir	 	 : ");
	scanf("%d",&norek[i].ttl.tahun);
	norek[i].umur = sekarang - norek[i].ttl.tahun;
	fflush(stdin);
	printf("\tMasukkan Nama Jalan		 : ");
	gets(norek[i].alt.jalan);
	fflush(stdin);
	printf("\tMasukkan Nama Kelurahan		 : ");
	gets(norek[i].alt.kelurahan);
	fflush(stdin);
	printf("\tMasukkan Nama Kecamatan		 : ");
	gets(norek[i].alt.kecamatan);
	fflush(stdin);
	printf("\tMasukkan Nama Kota		 : ");
	gets(norek[i].alt.kota);
	fflush(stdin);
	printf("\tMasukkan Nama Provinsi		 : ");
	gets(norek[i].alt.provinsi);
	fflush(stdin);
	printf("\tMasukkan Jumlah Saldo		 : ");
	scanf("%d",&norek[i].saldo);
	fflush(stdin);
	printf("\n\n\tTekan untuk kembali ke menu!");
	i++;	
	getch();
	system("cls");
}

void tampilkan_semua()
{
	int a = 0;
	if(i!=0){
    	printf("\nData Semua Nasabah");
		while(a<i){
			printf("\n\n| Nasabah %s \n",norek[a].nama);
			printf("\n Bank			: %s", norek[a].bank);
	    	printf("\n No rekening		: %s", norek[a].norekening);
	        printf("\n Umur			: %d", norek[a].umur);
	        printf("\n tanggal lahir		: %d-%d-%d", norek[a].ttl.tanggal, norek[a].ttl.bulan, norek[a].ttl.tahun);
	        printf("\n Alamat			: Jalan %s", norek[a].alt.jalan);
	    	printf("\n Kelurahan		: %s ", norek[a].alt.kelurahan);
	    	printf("\n Kecamatan		: %s ", norek[a].alt.kecamatan);
	    	printf("\n Kota			: %s ", norek[a].alt.kota);
	    	printf("\n Provinsi		: %s ", norek[a].alt.provinsi);
		    printf("\n Saldo			: Rp %d", norek[a].saldo);
	        printf("\n\n Tekan untuk kembali ke menu!");
	        a++;
	    }
		
	}
	
	else if(i==0){
		printf("\n\tData Tidak di temukan");
		printf("\n\nTekan untuk kembali ke menu!");
	}
	getch();
	system("cls");
}		

void cek_total()
{
	int a;
	int jumlah=0;
	
	for(a=0;a<i;a++)
	{
		jumlah = jumlah + norek[a].saldo;
	}
	
	printf("\n\tTotal Jumlah Nasabah %d", i);
	printf("\n\tTotal Saldo adalah %d", jumlah);
	printf("\n\n\tTekan untuk kembali ke menu!");
	getch();
	system("cls");
	
}

void cari_umur()
{
	int umur, umurmax, umurmin, a=0;
	
	printf("\n\t=========== Cari dengan range umur ===========");
	fflush(stdin);
	printf("\nBatas umur tertua		: ");
	scanf("%d",&umurmax);
	printf("\nBatas umur termuda		: ");
	scanf("%d",&umurmin);
		
	while(a<i)
	{
		if(norek[a].umur <= umurmax && umurmin <= norek[a].umur)
		{
			printf("\n\n| Nasabah dengan umur antara %d dan %d\n", umurmin,umurmax);
			printf("\n\n| Nasabah %s \n",norek[a].nama);
			printf("\n Bank			: %s", norek[a].bank);
			printf("\n No rekening		: %s", norek[a].norekening);
	    	printf("\n Umur			: %d", norek[a].umur);
			printf("\n tanggal lahir		: %d-%d-%d", norek[a].ttl.tanggal, norek[a].ttl.bulan, norek[a].ttl.tahun);
	    	printf("\n Alamat			: Jalan %s", norek[a].alt.jalan);
    		printf("\n Kelurahan		: %s ", norek[a].alt.kelurahan);
    		printf("\n Kecamatan		: %s ", norek[a].alt.kecamatan);
    		printf("\n Kota			: %s ", norek[a].alt.kota);
    		printf("\n Provinsi		: %s ", norek[a].alt.provinsi);
			printf("\n Saldo			: Rp %d", norek[a].saldo);
        	printf("\n\n Tekan untuk kembali ke menu!");
		}
		a++;
	}	
		if(i == 0)
		{
			printf("\n\tData tidak di temukan");
			printf("\n\n\tTekan untuk kembali ke menu!");
		}
		getch();
		system("cls");

}

void saldomaxmin()
{
	int max = norek[0].saldo;
	int min = norek[0].saldo;
	int a;

	for(a=0;a<i;a++)
	{
		if(max < norek[a].saldo)
		{
			max = norek[a].saldo;
		}
	}

	for(a=0;a<i;a++)
	{
		if(min > norek[a].saldo)
		{
			min = norek[a].saldo;
		}
	}
	
	for(a=0;a<i;a++)
	{
	if(norek[a].saldo==min)
	{
	printf("\n\n Saldo minimal dimiliki oleh nasabah %s \n",norek[a].nama);
	printf("\n Bank			: %s", norek[a].bank);
	printf("\n No rekening		: %s", norek[a].norekening);
   	printf("\n Umur			: %d", norek[a].umur);
	printf("\n tanggal lahir		: %d-%d-%d", norek[a].ttl.tanggal, norek[a].ttl.bulan, norek[a].ttl.tahun);
   	printf("\n Alamat			: Jalan %s", norek[a].alt.jalan);
   	printf("\n Kelurahan		: %s ", norek[a].alt.kelurahan);
 	printf("\n Kecamatan		: %s ", norek[a].alt.kecamatan);
   	printf("\n Kota			: %s ", norek[a].alt.kota);
    printf("\n Provinsi		: %s ", norek[a].alt.provinsi);
	printf("\n Saldo			: Rp %d", norek[a].saldo);
	}
	if(norek[a].saldo==max)
	{
	printf("\n\n Saldo maksimal dimiliki oleh nasabah %s \n",norek[a].nama);
	printf("\n Bank			: %s", norek[a].bank);
	printf("\n No rekening		: %s", norek[a].norekening);
   	printf("\n Umur			: %d", norek[a].umur);
	printf("\n tanggal lahir		: %d-%d-%d", norek[a].ttl.tanggal, norek[a].ttl.bulan, norek[a].ttl.tahun);
   	printf("\n Alamat			: Jalan %s", norek[a].alt.jalan);
   	printf("\n Kelurahan		: %s ", norek[a].alt.kelurahan);
 	printf("\n Kecamatan		: %s ", norek[a].alt.kecamatan);
   	printf("\n Kota			: %s ", norek[a].alt.kota);
    printf("\n Provinsi		: %s ", norek[a].alt.provinsi);
	printf("\n Saldo			: Rp %d", norek[a].saldo);
	}
}
	if(i == 0)
	{
		printf("\n\tData tidak di temukan");
		printf("\n\nTekan untuk kembali ke menu!");
	}	
	getch();
	system("cls");	
}

void kota()
{
	int a, salah = 0;
	char milih[20];
	printf("\n\t========== Cari Data berdasarkan Kota ==========");
	printf("\n\tMasukkan kota : ");
	scanf("%s",&milih);
	fflush(stdin);
			
	for(a=0;a<i;a++)
	{
		if(strcmp(norek[a].alt.kota,milih)==0)
		{
			printf("\n\tNama %s ada pada kota %s\n",norek[a].nama,milih);
		}
	}
	if(salah == 0)
	{
		printf("\n\tData Nasabah tidak di temukan");
	}
}
