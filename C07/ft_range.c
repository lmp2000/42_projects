#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *range;
    int i;
    int len;

    if (min >= max)
        return NULL;
    
    len = max - min;

    range = malloc(len * sizeof(int));
    if (!range)
        return NULL;

    i = 0;
    while (i < len)
    {
        range[i] = min + i;
        i++;
    }

    return (range);
}