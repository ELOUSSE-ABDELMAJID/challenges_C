#include <stdio.h>

int main()
{
	int fah;
    int cel;

	printf("--> Donner la température en Celsius :\n\n");
	scanf("%d", &cel);
    fah = (cel * 9/5) + 32; 
	printf("\n--> la température en Fahrenheit : \n\n");
	printf("%d \n", fah);
	return (0);
}