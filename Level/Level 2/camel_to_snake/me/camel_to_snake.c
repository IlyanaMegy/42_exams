/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilymegy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 13:02:45 by ilymegy           #+#    #+#             */
/*   Updated: 2023/06/21 13:02:47 by ilymegy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	c_s(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			write(1, "_", 1);
			*str += 32;
		}
		write(1, str, 1);
		str++;
	}
}

int	main(int ac, char **av)
{
	char	*res;

	if (ac == 2)
		c_s(av[1]);
	write(1, "\n", 1);
	return (0);
}
