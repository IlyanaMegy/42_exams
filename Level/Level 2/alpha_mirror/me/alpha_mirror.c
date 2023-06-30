/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilymegy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:28:17 by ilymegy           #+#    #+#             */
/*   Updated: 2023/06/21 12:28:19 by ilymegy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	am(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'm')
			*str = 'm' + ('m' - *str) + 1;
		else if (*str >= 'A' && *str <= 'M')
			*str = 'M' + ('M' - *str) + 1;
		else if (*str >= 'm' && *str <= 'z')
			*str = 'm' - (*str - 'm') + 1;
		else if (*str >= 'M' && *str <= 'Z')
			*str = 'M' - (*str - 'M') + 1;
		write(1, str, 1);
		str++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		am(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}