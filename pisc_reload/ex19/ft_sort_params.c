/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:43:46 by lude-jes          #+#    #+#             */
/*   Updated: 2025/10/14 18:46:14 by lude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ascii_score(char *str1, char *str2)
{
	while (*str1 && (*str1 == *str2))
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

void	sort(char **argv, int argc)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ascii_score(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	*ptr;

	if (argc < 1)
		return (0);
	argv++;
	sort(argv, argc - 1);
	while (*argv)
	{
		ptr = *argv;
		while (*ptr)
		{
			ft_putchar(*ptr);
			ptr++;
		}
		ft_putchar('\n');
		argv++;
	}
	return (0);
}
