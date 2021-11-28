#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int faktoriyel();
int powerof();
void clrscr();
int main() {
	bool loop = true;
	while (loop) {
		clrscr();
		printf("Yapmak istediginiz islemi yaziniz:\n	1- power of x\n	2- factorial calculator\n	0- Exit\n");
		int control=0;
		scanf_s("%d", &control);
		if (control == 1) {
		powerof();
		}
		else if (control == 2) {
		faktoriyel();
		}
		else if (control == 0) {
			loop = false;
		}
	}
}

int powerof() {
	bool continuecode = true;
	int sayi1, sayi2;
	int sonuc = 1;

	while (continuecode) {
		clrscr();
		printf("Kuvvetinin alinmasini istediginiz sayiyi girin: ");
		scanf_s("%d", &sayi1);
		printf("Kuvveti girin:  ");
		scanf_s("%d", &sayi2);
		sonuc = 1;

		for (int i = 0; i < sayi2; i++)
		{
			sonuc = sonuc * sayi1;
		}

		clrscr();
		printf("%d sayisinin %d. kuvveti : %d \n", sayi1, sayi2, sonuc);
		printf("Press 0 to main menu:");
		int controlx;
		scanf_s("%d", &controlx);
		if ( controlx == 0) {
			continuecode = false;
		}
	}
}
int faktoriyel() {
	bool continuecode = true;
	int sayi;
	double sonuc = 1;
	
	while (continuecode) {
		clrscr();
		printf("Faktoriyel alinmasini istediginiz sayi (max 20 giriniz): ");
		scanf_s("%d", &sayi);
		sonuc = 1;
		for (int i = 2; i <= sayi; i++)
		{
			sonuc = sonuc * i;
		}
		clrscr();
		printf("%d sayisinin faktoriyeli : %.0lf \n", sayi, sonuc);
		printf("Press 0 to main menu:  ");
		int controlx;
		scanf_s("%d", &controlx);
		if (controlx == 0) {
			continuecode = false;
		}
	}
	
}

// Ekran temizleme kodu
void clrscr()
{
	system("@cls||clear");
}			