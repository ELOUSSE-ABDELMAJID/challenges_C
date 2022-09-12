#include <stdio.h>
#include <stdbool.h>

bool    isPremier(int nbr)
{
    int i = 2;
    while (nbr % i != 0)
        i++;
    if (i == nbr)
        return (true);
    else
        return (false);
}

int main()
{
    int     nbr;
    bool    res;

    printf("Enter a number : \n");
    scanf("%d", &nbr);
    res = isPremier(nbr);
    if (res == true)
        printf("This number is Prime.\n");
    else
        printf("This number is not Prime.\n");
    return (0);
}