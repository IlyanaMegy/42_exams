/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilymegy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:44:19 by ilymegy           #+#    #+#             */
/*   Updated: 2023/06/21 15:44:21 by ilymegy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	minus;
	int	res;

	minus = 1;
	res = 0;
	while (*str == 32 || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
		if (*str = '-')
		{
			minus = -minus;
			str++;
		}
	while (*str >= '0' && *str <= '9')
		res = res * 10 + *str++ - 48;
	return (res * minus);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d\n", ft_atoi(av[1]));
	return (0);
}
