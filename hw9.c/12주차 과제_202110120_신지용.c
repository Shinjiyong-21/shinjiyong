#include<stdio.h>
#include <string.h>
int convcase(int str)
{
	const int diff = 'a' - 'A';
	if (str >= 'A' && str <= 'Z')
		return str + diff;
	else if (str >= 'a' && str <= 'z')
		return str - diff;
	else
		return str;
}
int main(void)
{
	char str[1000];
	printf("�����Է�: ");
	fgets(str, sizeof(str), stdin);
	for (int i = 0; i < sizeof(str); i++)
		str[i]=convcase(str[i]);
	printf("%s", str);
	return 0;
}