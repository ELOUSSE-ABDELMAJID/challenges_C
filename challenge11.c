#include <stdio.h>

int main()
{
	float longeur, largeur;
    float result;

    printf("Entrez la longeur du rectangle : \n");
    scanf("%f",&longeur);
    printf("Entrez la largeur du rectangle : \n");
    scanf("%f",&largeur);
    result = 2 * (longeur + largeur);
    printf("la circonférence du rectangle : %.2f\n", result);
	return (0);
}