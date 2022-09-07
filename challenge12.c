#include <stdio.h>

int main()
{
	char nbr[3];

    printf("Entrez un nombre de trois chiffre : \n");
    scanf("%s",nbr);
    printf("Le nombre inversee est : %c%c%c\n", nbr[2],nbr[1],nbr[0]);
	return (0);
}