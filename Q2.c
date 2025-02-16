//2.Write a program that accepts two numbers as numerator and denominator from the user and display the quotient and remainder.

#include<stdio.h>

int main() {
	int n1, n2;

	printf("Enter 2 No. = ");
	scanf_s("%d%d",&n1,&n2);

	int quotient = n1 / n2;
	int remainder = n1 % n2;

	printf("\n\nQuotient = %d\n\nRemainder = %d\n\n", quotient, remainder);

	return 0;
}