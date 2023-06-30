/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilymegy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:43:19 by ilymegy           #+#    #+#             */
/*   Updated: 2023/06/22 13:43:23 by ilymegy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_atoi_base(const char *str, int str_base)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			res += *str - 48;
		else if (*str >= 'a' && *str <= 'f')
			res += *str - 'a' + 10;
		else if (*str >= 'A' && *str <= 'F')
			res += *str - 'A' + 10;
		str++;
	}
	return (res * sign);
}



//0123456789abcdef
int	main(void)
{
	printf("%d\n", ft_atoi_base("A", 16));
	printf("%d\n", ft_atoi_base("B", 16));
	printf("%d\n", ft_atoi_base("C", 16));
	printf("%d\n", ft_atoi_base("D", 16));
	printf("%d\n", ft_atoi_base("+e", 16));
	printf("%d\n", ft_atoi_base("0", 16));
	return (0);
}
