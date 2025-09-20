#include <unistd.h>

void ft_putnbr(int nb)
{
    char c;
    long n = nb;
    
    if(nb < 0)
    {
        write(1, "-", 1);
        n = -n;
    }

    if(nb > 9)
        ft_putnbr(nb / 10);
        
    c = '0' + (n % 10);
    write(1, &c, 1);
}