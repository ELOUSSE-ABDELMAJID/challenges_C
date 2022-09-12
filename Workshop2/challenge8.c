#include <stdio.h>

void    echanger(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int *a, *b;

    printf("Enter la valeur de 'a': \n");
    scanf("%d", a);
    printf("Enter la valeur de 'b': \n");
    scanf("%d", b);
    echanger(a, b);
    printf("Echange : %d\t%d\n", *a, *b);
    return (0);
}