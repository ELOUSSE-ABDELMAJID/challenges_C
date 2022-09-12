#include <stdio.h>

int add(int a, int b)
{
    return (a + b);
}

int main()
{
    int a, b, sum;

    printf("Enter a number (a): \n");
    scanf("%d", &a);
    printf("Enter a number (b): \n");
    scanf("%d", &b);
    sum = add(a, b);
    printf("Result : %d\n", sum);
    return (0);
}