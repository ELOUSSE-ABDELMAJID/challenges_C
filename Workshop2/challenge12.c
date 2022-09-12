#include <stdio.h>

char    *copy(char *dest, char *src)
{
    int i = 0;

    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}

int main()
{
    char *src, *dest;

    printf("Enter a word : ");
    scanf("%s", src);
    dest = copy(dest, src);
    printf("--> %s\n", dest);
    return (0);
}