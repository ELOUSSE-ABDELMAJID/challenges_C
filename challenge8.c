#include <stdio.h>

float func_somme(float a, float b, float c, float d)
{
    float somme;
    somme = a + b + c + d;
    return somme;
}

float func_moyenne(float somme)
{
    float moyenne;
    moyenne = somme / 4;
    return moyenne;
}

int main()
{
	float a, b, c, d;
    float somme, moyenne;

    printf("Entrez 4 variables : \n");
    scanf("%f %f %f %f", &a,&b,&c,&d);
    somme = func_somme(a,b,c,d);
    printf("La Somme est : %.2f\n", somme);
    moyenne = func_moyenne(somme);
    printf("La Moyenne est : %.2f\n", moyenne);
	return (0);
}