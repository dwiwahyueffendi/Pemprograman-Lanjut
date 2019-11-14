#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//========================================================

struct node {
	 int data;
    struct node *next;
};
typedef struct node node;

node *createNode(void);
void tambahAwal(node **head);
void tambahData(node **head);
void tranverse(node *head);
void insertNode(node **head, node *pPre, node *pNew);
void deleteNode(node **head, node *pPre, node *pCur);
void hapusData(node **head);
void deleteList(node *head);
void tambahAkhir(node **head);
void hapusDataAkhir(node **head);
void hapusDataAwal(node **head);
//========================================================

int main()
{
  node *head;
  char pilih;

  head = NULL;
  do{
    //untuk membersihkan tampilan
    //untuk windows
    system("cls");
    //untuk linux
     //system("clear");
     
     printf("Masukkan pilihan\n");
     printf("\t1. Tambah data di awal\n");
     printf("\t2. Tambah data di akhir\n");
     printf("\t3. Tambah data di tengah list\n");
     printf("\t4. Hapus data sesuai input\n");//
     printf("\t5. Hapus data sesuai akhir\n");//
     printf("\t6. Hapus data sesuai awal\n");//
     printf("\t7. Tampilkan isi list dan jumlah data\n");//
     printf("\nMasukkan Pilihan (0 untuk keluar) : ");
     fflush(stdin);
     scanf("%c", &pilih);
     if (pilih == '1')
     		tambahAwal(&head);
     else if (pilih == '2')
			tambahAkhir(&head);
     else if (pilih == '3')
			tambahData(&head);
     else if (pilih == '4')
     		hapusData(&head);
     else if (pilih == '5')
     		hapusDataAkhir(&head);
     else if (pilih == '6')
     		hapusDataAwal(&head);
     else if (pilih == '7'){
     		tranverse(head);
         getch();
     }
  } while (pilih != '0');
  deleteList(head);
}

//========================================================

node *createNode(void){
  node *ptr;

  ptr = (node *)malloc(sizeof(node));
  return(ptr);
}

//========================================================

void hapusDataAkhir(node **head){
	node *pCur,*pPre;
	system("cls");
	;
	if(*head == NULL){
		printf("Mohon untuk mengisi data terlebih dulu");
		getch();
		return;
	}
	tranverse(*head);
	pCur = *head;
	pPre = NULL;
	while(pCur -> next != NULL){
		pPre = pCur;
    	pCur = pCur -> next;
	}
	free(pCur);
	pPre -> next = NULL;
	getch();
}

//==================================================

void hapusDataAwal(node **head){
	node *pCur,*pPre;
	system("cls");
	if(*head == NULL){
		printf("Mohon untuk mengisi data terlebih dulu");
		getch();
		return;
	}
	tranverse(*head);
	pCur = *head; //menghapus head
	*head = pCur -> next;
	free(pCur);
	getch();
}

//=======================================================

void tambahAwal(node **head){
  int bil;
  node *pTemp;

  //untuk membersihkan tampilan
  //untuk windows
  system("cls");
  //untuk linux
  //system("clear");
  fflush(stdin);
  printf("Masukkan Bilangan : ");
  fflush(stdin);
  scanf("%d", &bil);
  pTemp = (node *)malloc(sizeof(node));

  if (pTemp != NULL){
  	pTemp->data = bil;
      pTemp->next = NULL;
      insertNode(head, NULL, pTemp);
  }
  else{
      printf("Alokasi memori gagal");
      getch();
  }
}

//========================================================

void tambahAkhir(node **head){
	int bil;
  	node *pCur,*pTemp;
 	system("cls");
  	pCur = *head;
  	fflush(stdin);
  	printf("Masukkan bilangan : ");
 	fflush(stdin);
 	scanf("%d", &bil);
  	pTemp = (node *)malloc(sizeof(node));
  	if (pTemp == NULL){
	  	    printf("\nAlokasi memori gagal");
		    getch();
		    return ;
	}
  	
  	else{
  		while(pCur != NULL && pCur -> next != NULL){
  		pCur=  pCur->next;
	    }
	  	pTemp->data = bil;
      	pTemp->next = NULL;
      	insertNode(head, pCur, pTemp);
  	}
}

//=======================

void tambahData(node **head){
  int pos, bil;
  node *pTemp, *pCur;

  //untuk membersihkan tampilan
  //untuk windows
  system("cls");                 
  //untuk linux
  //system("clear");
  
  tranverse(*head);
  printf("\nposisi penyisipan setelah data bernilai : ");
  fflush(stdin);
  scanf("%d", &pos);
  printf("\nData yang disisipkan : ");
  fflush(stdin);
  scanf("%d", &bil);

  pCur = *head;
  while (pCur != NULL && pCur -> data != pos) {
    pCur = pCur -> next;
  }

  pTemp = (node *)malloc(sizeof(node));

  if (pCur == NULL){
     printf("\nnode tidak ditemukan");
     getch();
  }
  else if (pTemp == NULL){
     printf("\nalokasi memeori gagal");
     getch();
  }
  else{
     pTemp->data = bil;
     pTemp->next = NULL;
     insertNode(head, pCur, pTemp);
  }
}

//========================================================

void tranverse(node *head){
   //traverse linked list
	node *pWalker;

    system("cls");
	pWalker = head;
	while (pWalker != NULL){
   	printf("%d->", pWalker -> data);
   	pWalker = pWalker -> next;
	}
   printf("NULL");
}

//========================================================

void insertNode(node **head, node *pPre, node *pNew){
    if (pPre == NULL){
       //menambahkan diawal atau pada empty list
	    pNew -> next = *head;
       *head = pNew;
    }
    else {
       //menambahkan node di tengah atau di akhir
       pNew -> next = pPre -> next;
       pPre -> next = pNew;
   }
}

//========================================================

void deleteNode(node **head, node *pPre, node *pCur)
{
	if (pPre == NULL)
	   *head = pCur -> next;
	else
       pPre -> next = pCur -> next;
	free(pCur);
}

//========================================================

void hapusData(node **head)
{
  int pos;
  node *pCur, *pPre;
	system("cls");
  		tranverse(*head);
  		printf("\nData yang akan dihapus : ");
 		fflush(stdin);
 		scanf("%d", &pos);

  		pPre = NULL;
  		pCur = *head;
  		//cari target value sampai ditemukan atau sampai pada akhir list
  		while (pCur != NULL && pCur -> data != pos) {
    	pPre = pCur;
    	pCur = pCur -> next;
  		}

  		if (pCur == NULL){
    		printf("\nNode tidak ditemukan");
    		getch();
  		}
  		else
    		deleteNode(head, pPre, pCur);
   			getch();

  //clrscr();
  
}

//========================================================

void deleteList(node *head){
  node *pTemp;


  while(head != NULL){
     pTemp = head;
     head = head->next;
     free(pTemp);
  }
}
