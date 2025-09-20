int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i = 0;
    int x = 0;

    if (n == 0)
        return(0);

    while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
        i++;
    
    x = s1[i] - s2[i];

    return(x);
}