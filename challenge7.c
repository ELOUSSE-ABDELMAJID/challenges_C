#include <stdio.h>

int main()
{
	int a, b;

    printf("Entrez le variable a et b : \n");
    scanf("%d \t %d", &a,&b);
    printf("La Somme : %d \n", a+b);
    printf("La Soustraction : %d\n", a-b);
    printf("La Multiplication : %d\n", a*b);
    if (b != 0)
        printf("La Division : %d\n", a/b);
    else
        printf("La Division est Impossible");
    printf("Le Modulo : %d\n", a%b);
	return (0);
}