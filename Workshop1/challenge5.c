#include <stdio.h>

void    function_sensation(float cel)
{
    if (cel <= 0)
        printf("\nTres Froid \n");
    else if (cel < 25)
        printf("\nFroid \n");
    else if (cel >= 25 && cel < 45)
        printf("\nChaud\n");
    else
        printf("\nTres Chaud \n");
}

int main()
{
	float fah;
    float cel;

	printf("--> Donner la température en Fahrenheit :\n\n");
	scanf("%f", &fah);
    cel = (fah - 32) / 1.8;
    function_sensation(cel);
	return (0);
}