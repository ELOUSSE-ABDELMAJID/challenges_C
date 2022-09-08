#include <stdio.h>

int main()
{
    int a;
    int b;
    int sum;

    printf("Give me two numbers : ");
    scanf("%d%d", &a,&b);
    sum = a + b;
    if (a != b)
        printf("Result : %d\n", sum);
    else
    {
        sum = sum * 3;
        printf("Result : %d\n", sum);
    } 
    return (0);
}