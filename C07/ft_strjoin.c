#include <stdlib.h>

int ft_strlen(char *str)
{
    int len = 0;
    
    while (str[len])
        len++;
    
    return len;
}

int total_len(int size, char **strs, char *sep)
{
    int i = 0;
    int total = 0;

    if (size <= 0)
        return 1; // only for the terminating '\0'

    while (i < size && strs[i])
    {
        total += ft_strlen(strs[i]);
        i++;
    }
    total += (size - 1) * ft_strlen(sep);
    total += 1; // for '\0'

    return total;
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    char *strjoin;
    int len;
    int i = 0;
    int j;
    int pos;

    // Handle size == 0: return an allocated empty string that can be freed
    if (size == 0)
    {
        strjoin = malloc(1);
        if (!strjoin)
            return NULL;
        strjoin[0] = '\0';
        return strjoin;
    }

    len = total_len(size, strs, sep);

    strjoin = malloc(len * sizeof(char));
    if (!strjoin)
        return NULL;

    pos = 0;
    i = 0;
    while (i < size && strs[i])
    {
        j = 0;
        while (strs[i][j])
            strjoin[pos++] = strs[i][j++];

        if (i < size - 1)
        {
            j = 0;
            while (sep[j])
                strjoin[pos++] = sep[j++];
        }
        i++;
    }
    
    strjoin[pos] = '\0';
    
    return strjoin;
}