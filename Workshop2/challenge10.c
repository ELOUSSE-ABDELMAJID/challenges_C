#include <stdio.h>

int divededby(int n, int a)
{
    return (n / a);
}

int main()
{
    int n, a;
    int result;
    int i = 2;

    printf("Enter a number (n): \n");
    scanf("%d", &n);
    printf("Enter a number (a): \n");
    scanf("%d", &a);
    result = divededby(n, a);
    while (result % i != 0)
        i++;
    if (i == result)
        printf("true\n");
    else
        printf("false\n");
    return (0);
}