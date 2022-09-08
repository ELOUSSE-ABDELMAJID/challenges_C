#include <stdio.h>

int main()
{
    int nbr;

    printf("Give me a number : ");
    scanf("%d", &nbr);
    if (nbr % 2 == 0)
        printf("This number is Pair\n");
    else
        printf("This number is Inpair\n");
    return (0);
}