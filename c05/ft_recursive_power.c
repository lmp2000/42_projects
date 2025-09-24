#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    int res = 0;
    
    if (power < 0)
        return 0;
    
    if (power == 0)
    return 1;

    res = nb * ft_recursive_power(nb, power - 1);

    return res;
}

/*int main(void)
{
    int a = 2;
    int power = 3;

    int res = ft_recursive_power(2, 3);

    printf("%i to the power of %i --> %i\n", a, power, res);
}*/