#include <stdio.h>

int main()
{
	int fah;
    int cel;

	printf("--> Donner la température en Fahrenheit :\n\n");
	scanf("%d", &fah);
    cel = (fah - 32) * 5/9; 
	printf("\n--> la température en Celsius : \n\n");
	printf("%d \n", cel);
	return (0);
}