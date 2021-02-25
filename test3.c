#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i;
    int j;
    char *dest;
    i = 0;
    while (src[i] != '\0')
    {
        i++;
    }
    dest = (char *)malloc(sizeof(char) * i + 1);
    if (dest == NULL)
    {
        return NULL;
    }
    while (src[j] != '\0')
    {
        dest[j] = src[j];
        j++;
    }
    dest[j] = '\0';
    return (dest);
}
int     main(void)
{
    char *str = "hello";
    printf("%s\n", ft_strdup(str));
}