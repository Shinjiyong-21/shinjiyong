#include<stdio.h>

int main(void)
{
	int num;
	int i = 2;
	printf("Please enter a number: ");
	scanf_s("%d", &num);
	if ( num %i  == 0 || num==1)
	{
		printf("It is not prime number");
	}
	else
		printf("It is a prime number\n");
	return 0;
}
		