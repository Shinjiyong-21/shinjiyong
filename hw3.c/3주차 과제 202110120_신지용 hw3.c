#include<stdio.h>
int main(void)
{
	int a, b;
	for (a = 0; a <=5; a++)
	{ 
		for (b =0; b <=4-a ; b++)
		{
			printf(" ");
		}
		for (b = 0; b < 2 * a + 1; b++)
		{
			printf("*");
		}
		printf("\n");
	
	}
		
	return 0;
}