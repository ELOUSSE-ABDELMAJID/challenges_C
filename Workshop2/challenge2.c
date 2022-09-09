#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;

    printf("Enter a Character : \n");
    scanf("%c", &c);
    c = tolower(c);
    switch (c)
    {
    case 'a':
        printf("This Character is a voyalle.\n");
        break;
    case 'e':
        printf("This Character is a voyalle.\n");
        break;
    case 'i':
        printf("This Character is a voyalle.\n");
        break;
    case 'o':
        printf("This Character is a voyalle.\n");
        break;
    case 'u':
        printf("This Character is a voyalle.\n");
        break;
    case 'y':
        printf("This Character is a voyalle.\n");
        break;
    default:
        printf("This Character is not a voyalle.\n");
    }
    return (0);
}