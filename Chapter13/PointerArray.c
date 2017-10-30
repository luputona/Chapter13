#include <stdio.h>

void main7()
{
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	int *arr[3] = { &num1, &num2, &num3 };

	printf("%d \n", *arr[0]);
	printf("%d \n", *arr[1]);
	printf("%d \n", *arr[2]);

}