char *ft_strstr(char *str, char *to_find)
{
    int i, j;

    i = 0;
    j = 0;

    if (to_find[0] == '\0')
        return (str)
    
    while (str[i] && to_find[j])
    {
        if (str[i] != to_find[j])
        {
            i++;
            continue;
        }
        
        if (str[i] == to_find[j])
        {
            
        }
    }
}