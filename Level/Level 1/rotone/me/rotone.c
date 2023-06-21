/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilymegy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:52:01 by ilymegy           #+#    #+#             */
/*   Updated: 2023/06/21 11:52:06 by ilymegy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rotone(char *str)
{
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'y') || (*str >= 'A' && *str <= 'Y'))
			(*str)++;
		else if (*str == 'z')
			*str = 'a';
		else if (*str == 'Z')
			*str = 'A';
		write(1, str, 1);
		str++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	write(1, "\n", 1);
	return (0);
}
