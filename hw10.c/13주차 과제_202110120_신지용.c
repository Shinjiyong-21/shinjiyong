#include<stdio.h>
#include<math.h>
#include<string.h>

struct cities
{
	char name[20];
	char country[20];
	int population;
};
void removeline(char arr[])
{
	int len = strlen(arr);
	arr[len - 1]=0;
}
int main(void)
{
	struct cities arr[20];
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("Name> ");
		fgets(arr[i].name, sizeof(arr[i].name), stdin);
		removeline(arr[i].name);
		printf("Country> ");
		fgets(arr[i].country, sizeof(arr[i].country), stdin);
		removeline(arr[i].country);
		printf("Population > ");
		scanf("%d", &arr[i].population);
		while (getchar() != '\n');
	}
	for (i = 0; i < 3; i++)
	{
		printf("%d. %s in %s with a population of %d people\n", i+1, arr[i].name, arr[i].country, arr[i].population);
	}
	return 0;

}
