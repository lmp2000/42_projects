/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:32:38 by lude-jes          #+#    #+#             */
/*   Updated: 2025/10/14 18:34:46 by lude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	char	*ptr;

	if (argc < 1)
		return (0);
	argv++;
	while (*argv)
	{
		ptr = *argv;
		while (*ptr)
			ft_putchar(*ptr);
		ft_putchar('\n');
		argv++;
	}
}
