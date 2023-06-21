/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilymegy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:19:29 by ilymegy           #+#    #+#             */
/*   Updated: 2023/06/21 12:19:34 by ilymegy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ulstr(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		else if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		write(1, str, 1);
		str++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ulstr(av[1]);
	write(1, "\n", 1);
	return 0;
}
