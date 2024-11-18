#include<stdio.h>
#include <math.h>
double standarddeviation(double arr[], int n)
{
	double sum = 0.0, mean, sd = 0.0;

	for (int i = 0; i < n; i++)
		sum += arr[i];
	mean = sum / n;
	for (int i = 0; i < n; i++)
	
		sd += pow(arr[i] - mean, 2);
	return sqrt(sd / n);
	
}
int main(void)
{
	double num[5];

	printf("Enter 5 real numbers: ");
	for(int i=0;i<5;i++)
		scanf_s("%lf", &num[i]);
	
	printf("Standard Devication=%.3f \n", standarddeviation(num, 5));

	return 0;
}
