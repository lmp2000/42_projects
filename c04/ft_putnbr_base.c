#include <unistd.h>

int base_is_valid(char *base)
{
    int i;
    int j;
    int len;

    i = 0;
    len = 0;

    while (base[len])
        len++;

    if(len < 2)
        return 0;
    
    while(base[i])
    {
        if(base[i] == '+' || base[i] == '-' || base[i] == ' ' || (base[i] >= 9 && base[i] <= 13)) // check for + - and whitespaces
            return 0;

        j = i + 1;
        while(base[j]) // check for duplicates
        {
            if(base[i] == base[j])
                return 0;
            j++;
        }
        i++;
    }
    return 1;
}

void ft_putnbr_base(int nbr, char *base)
{
    long nb;
    int len;

    if (!base_is_valid(base))
        return;

    nb = nbr;
    len = 0;
    while (base[len])
        len++;

    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }

    if (nb >= len)
        ft_putnbr_base(nb / len, base);
    write(1, &base[nb % len], 1);
}