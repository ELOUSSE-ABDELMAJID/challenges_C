#include <stdio.h>

void    function_sensation(int cel)
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
	int fah;
    int cel;

	printf("--> Donner la température en Fahrenheit :\n\n");
	scanf("%d", &fah);
    cel = (fah - 32) / 1.8;
    function_sensation(cel);
	return (0);
}