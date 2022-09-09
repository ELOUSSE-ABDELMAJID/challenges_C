#include <stdio.h>

int main()
{
	int fah;
    int cel;

	printf("--> Donner la température en Celsius :\n\n");
	scanf("%f", &cel);
    fah = (cel * 1.8) + 32; 
	printf("\n--> la température en Fahrenheit : \n\n");
	printf("%.2f \n", fah);
	return (0);
}