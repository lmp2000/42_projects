/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpais <lpais@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:35:00 by lpais             #+#    #+#             */
/*   Updated: 2025/03/18 10:35:00 by lpais            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

static void	puterr(const char *s)
{
	while (*s)
		write(2, s++, 1);
}

int	main(int argc, char **argv)
{
	int     fd;
	ssize_t n;
	char    buf[4096];

	if (argc < 2)
		return (puterr("File name missing.\n"), 1);
	if (argc > 2)
		return (puterr("Too many arguments.\n"), 1);
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return (puterr("Cannot read file.\n"), 1);
	while ((n = read(fd, buf, sizeof(buf))) > 0)
		if (write(1, buf, (size_t)n) < 0)
			return (close(fd), puterr("Cannot read file.\n"), 1);
	if (n < 0)
		return (close(fd), puterr("Cannot read file.\n"), 1);
	close(fd);
	return (0);
}