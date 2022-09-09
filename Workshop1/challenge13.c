#include <stdio.h>

int main()
{
	int nbr;

    printf("Entrez un nombre entier : \n");
    scanf("%d", &nbr);
    printf("La valeur en octale : %o\n", nbr);
    printf("La valeur en hexadecimal : %x\n", nbr);
	return (0);
}