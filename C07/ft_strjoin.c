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
    int total_len = 0;

    while ((*strs)[i] && i < size)
    {
        total_len += ft_strlen(str[i]);
        i++;
    }
    total_len += (ft_strlen(sep) * (size - 1)) + 1;

    return total_len;
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    char *strjoin;
    int len;

    if (size == 0)
    {
        return NULL;
        free (strjoin);
    }

    len = total_len(size, strs, sep);

    strjoin = malloc(total_len * sizeof(char));
}