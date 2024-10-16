#include <stdio.h>

void recursive(int num)
{
	if (num > 1)
		recursive(num / 2);
	printf("%d", num % 2);
}
int main(void)
{
	int num;
	printf("please enter a number: ");
	scanf_s("%d", &num);
	recursive(num);
	return 0;
}