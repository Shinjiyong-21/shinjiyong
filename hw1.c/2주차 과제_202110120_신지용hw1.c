#include<stdio.h>

int main(void)
{
	int num1 = 10;
	int num2 = 15;
	int result1 = num1 & num2;
	int result2 = num1 | num2;
	int result3 = num1 ^ num2;
	printf("%d & %d = %d \n", num1, num2, result1);
	printf("%d | %d = %d \n", num1, num2, result2);
	printf("%d ^ %d = %d \n", num1, num2, result3);


	return 0;
}