#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *copy(char *dest, char *src)
{
    int i = 0;
    int len = 0;

    while (src[len])
        len++;
    dest = malloc(sizeof(char) * (len + 1));
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main()
{
    char *src, *dest;

    printf("Enter a word : ");
    scanf("%s", src);
    dest = copy(dest, src);
    printf("%s\n", dest);
    return (0);
}