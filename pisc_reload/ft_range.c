#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	len;
	int	i;

	if (min >= max)
		return (NULL);

	len = max - min;
	arr = (int *)malloc(sizeof(int) * len);
	if (!arr)
		return (NULL);

	i = 0;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}