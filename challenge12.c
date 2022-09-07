#include <stdio.h>

int main()
{
	int *nbr;

    printf("Entrez un nombre de trois chiffre : \n");
    scanf("%d",nbr);
    printf("Le nombre inversee est : %d%d%d\n", nbr[2],nbr[1],nbr[0]);
	return (0);
}