#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int ao,bo;
	int aa,ba;
	
	printf("---------------------------\n");
	printf("Mencari titik tengah\n\n");
	
	printf("Masukan X kordinat A :");scanf("%d",&aa);
	printf("Masukan Y kordinat A :");scanf("%d",&ao);
	printf("Masukan X kordinat B :");scanf("%d",&ba);
	printf("Masukan Y kordinat B :");scanf("%d",&bo);
	printf("\n\n");
	
	int absis,ordinat,pencerminan;
	
	absis=(aa+bo)/2;
	ordinat=(ao+bo)/2;
	
	printf("Absis     :%d",absis);
	printf("\n");
	printf("Ordinat   :%d",ordinat);
	printf("\n\n");
	
	pencerminan=(absis+ordinat)/2;
	
	printf("perceminan sumbu X dan Y  :%d",pencerminan);printf("\n\n");
	
	return 0;
}

