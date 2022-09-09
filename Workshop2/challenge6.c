#include <stdio.h>

int funct_checkdouble(char string[4])
{
    int i, j;
    int count = 0;

    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            if (string[i] == string[j])
                count++;
        }
    }
    return (count);
}

int main()
{
    char stringA[4];
    char stringB[4];
    int count = 0;
    int c;
    int i, j;

    printf("Enter the first string : \n");
    scanf("%s", stringA);
    printf("Enter the second string : \n");
    scanf("%s", stringB);
    c = funct_checkdouble(stringA) + funct_checkdouble(stringB);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (stringA[i] == stringB[j])
                count++;
        }
    }
    count = count - c;
    if (count == 4)
        printf("The Strings are Anagrames!!\n");
    else
        printf("The Strings are not Anagrames!!\n");
    return (0);
}