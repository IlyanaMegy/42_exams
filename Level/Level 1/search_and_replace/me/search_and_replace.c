/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilymegy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:01:52 by ilymegy           #+#    #+#             */
/*   Updated: 2023/06/21 12:01:55 by ilymegy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	in_str(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

void	s_r(char *str, char s, char r)
{
	if (in_str(str, s))
		while (*str)
		{
			if (*str == s)
				*str = r;
			write(1, str, 1);
			str++;
		}
}

int	main(int ac, char **av)
{
	if (ac == 4 && !av[2][1] && !av[3][1])
	{
		s_r(av[1], av[2][0], av[3][0]);
	}
	write(1, "\n", 1);
	return (0);
}
