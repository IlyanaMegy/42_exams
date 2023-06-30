/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilymegy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 17:32:17 by ilymegy           #+#    #+#             */
/*   Updated: 2023/06/21 17:32:20 by ilymegy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
// #include <stdio.h>
#include <stddef.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char *res;
	int i;

	i = 0;
	res = malloc(sizeof(char) * (ft_len(src) + 1));
	if (!res)
		return (NULL);
	while (src[i])
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 		printf("%s\n", ft_strdup(av[1]));
// 	return (0);
// }