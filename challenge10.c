#include <stdio.h>

int main()
{
	float rayon, pi;
    float result;

    pi = 3.14;
    printf("Entrez le rayon du cercle : \n");
    scanf("%f",&rayon);
    result = 2 * pi * rayon;
    printf("la circonférence du cercle : %.2f\n", result);
	return (0);
}