//1.Accept radius of a circle from the user.Find the area of the circle.[Formula:area = PI * radius * radius]  Note: Declare PI as constant

#include<stdio.h>

int main() {
	int rds;
	printf("Enter the Radius of Circle = ");
	scanf_s("%d", &rds);

	const float pi = 3.1416;

	float area = pi * (rds * rds);

	printf("\nArea of Circle is %f \n",area);

	return 0;
}