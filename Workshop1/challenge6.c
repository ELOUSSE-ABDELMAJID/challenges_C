#include <stdio.h>

int main()
{
	int fah;
    int cel;

	printf("--> Donner la température en Fahrenheit :\n\n");
	scanf("%f", &fah);
    cel = (fah - 32) / 1.8; 
	printf("\n--> la température en Celsius : \n\n");
	printf("%.2f \n", cel);
	return (0);
}