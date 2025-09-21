#include <unistd.h>

int isspace(char c)
{
    if(c == 32 || (c > 8 && c < 14))
        return 1;
    return 0;
}

int issign(char c)
{
    if(c == '+')
        return 1;
    else if (c == '-')
        return -1;
    return 0;
}

int isdigit(char c)
{
    if(c >= '0' && c <= '9')
        return 1;
    return 0;
}

int ft_atoi(char *str)
{
    int n = 0;
    int sign = 1;
    
    while(isspace(*str))
        str++;
    
    while(issign(*str))
    {
        if(*str == '-')
            sign *= -1;
        str++;
    }

    while(isdigit(*str))
    {
        n = n * 10 + (*str - '0');
        str++;
    }

    return (n * sign);
}