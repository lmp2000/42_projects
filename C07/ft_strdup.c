#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int len = 0;
    int i = 0;

    while (src[len])
        len++;
    len++;
    char *dup = malloc(len * sizeof(char));
    if (dup == NULL)
        return NULL;
    while (src[i])
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}