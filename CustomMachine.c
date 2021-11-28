#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int factorial();
int powerof();
int fibonacci();
void clrscr();
int main() {
	bool loop = true;
	while (loop) {
		clrscr();
		printf("Type index of your calculation:\n 1- power of x\n	2- factorial calculator\n	3- fibonacci calculator\n	0- Exit\n");
		int control = 0;
		scanf_s("%d", &control);
		if (control == 1) {
			powerof();
		}
		else if (control == 2) {
			factorial();
		}
		else if (control == 3) {
			fibonacci();
		}
		else if (control == 0) {
			loop = false;
		}
	}
}


int fibonacci() {

	bool continuecode = true;
	int number;
	int result = 1;

	while (continuecode) {
		clrscr();
		printf("Enter the number for which you want the Fibonacci value to be calculated: ");
		scanf_s("%d", &number);

		int t1 = 0, t2 = 1, nexterm;

		for (int i = 0; i <= number; i++)
		{
			printf("%d ", t1);
			nexterm = t1 + t2;
			t1 = t2;
			t2 = nexterm;

		}
		printf("\n");
		printf("Press 0 to main menu:");
		int controlx;
		scanf_s("%d", &controlx);
		if (controlx == 0) {
			continuecode = false;
		}
	}
	return 0;
}
int powerof() {
	bool continuecode = true;
	int number1, number2;
	int result = 1;

	while (continuecode) {
		clrscr();
		printf("Enter the number you want to power of: ");
		scanf_s("%d", &number1);
		printf("Enter the power:  ");
		scanf_s("%d", &number2);
		result = 1;

		for (int i = 0; i < number2; i++)
		{
			result = result * number1;
		}

		clrscr();
		printf("%d to the power of %d is: %d \n", number1, number2, result);
		printf("Press 0 to main menu:");
		int controlx;
		scanf_s("%d", &controlx);
		if (controlx == 0) {
			continuecode = false;
		}
	}
	return 0;
}
int factorial() {
	bool continuecode = true;
	int number;
	double result = 1;

	while (continuecode) {
		clrscr();
		printf("The number you want factorial to be taken (max 20): ");
		scanf_s("%d", &number);
		result = 1;
		for (int i = 2; i <= number; i++)
		{
			result = result * i;
		}
		clrscr();
		printf("%d's factorial : %.0lf \n", number, result);
		printf("Press 0 to main menu:  ");
		int controlx;
		scanf_s("%d", &controlx);
		if (controlx == 0) {
			continuecode = false;
		}
	}
	return 0;
}

// Ekran temizleme kodu
void clrscr()
{
	system("@cls||clear");
}