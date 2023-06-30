/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilymegy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:58:25 by ilymegy           #+#    #+#             */
/*   Updated: 2023/06/21 15:58:27 by ilymegy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	if (*s1 && *s2)
	{
		while (*s1 && *s2)
		{
			if (*s1 != *s2)
				return (*s1 - *s2);
			s1++;
			s2++;
		}
		return (*s1 - *s2);
	}
	return (*s1 - *s2);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%d\n", ft_strcmp(av[1], av[2]));
	return (0);
}
