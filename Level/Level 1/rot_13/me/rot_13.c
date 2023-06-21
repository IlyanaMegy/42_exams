/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilymegy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:19:52 by ilymegy           #+#    #+#             */
/*   Updated: 2023/06/21 11:20:03 by ilymegy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	up_or_low(char c)
{
	if (c >= 65 && c <= 90)
		return (2);
	else if (c >= 97 && c <= 122)
		return (3);
	else
		return (0);
}

void	rot(char *str)
{
	while (*str)
	{
		if (up_or_low(*str))
		{
			if (up_or_low(*str) == 2)
			{
				if (*str + 13 > 90)
					*str -= 13;
				else
					*str += 13;
			}
			else
			{
				if (*str + 13 > 122)
					*str -= 13;
				else
					*str += 13;
			}
		}
		write(1, str, 1);
		str++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rot(av[1]);
	write(1, "\n", 1);
	return (0);
}
