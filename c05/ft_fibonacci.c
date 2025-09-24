#include <stdio.h>

int ft_fibonacci(int index)
{
    int ret = 0;
    
    if (index < 0)
        return -1;

    if (index == 0)
        return 0;
    
    if (index == 1)
        return 1;

    ret = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);

    return ret;
}

/*int main()
{
    int index = 1;

    int ret = ft_fibonacci(index);

    printf("The index %d is %d\n", index, ret);
}*/