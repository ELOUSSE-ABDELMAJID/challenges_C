#include <stdio.h>

void    echanger(int a, int b)
{
    int tmp;

    tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int a, b;

    printf("Enter a number (a): \n");
    scanf("%d", &a);
    printf("Enter a number (b): \n");
    scanf("%d", &b);
    echanger(a, b);
    printf("Result : %d\t%d\n", a, b);
    return (0);
}