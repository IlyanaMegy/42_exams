/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilymegy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:19:30 by ilymegy           #+#    #+#             */
/*   Updated: 2023/06/22 14:19:34 by ilymegy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	abso(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	*ft_range(int start, int end)
{
	int	*res;
	int	i;
	int	len;

	i = 0;
	len = abso(start - end);
	res = malloc(sizeof(int) * (len + 1));
	if (!res)
		return (0);
	while (start < end)
	{
		res[i] = start;
		start++;
		i++;
	}
	res[i] = start;
	while (start > end)
	{
		res[i] = start;
		start--;
		i++;
	}
	res[i] = start;
	return (res);
}

#include <stdio.h>

int	main(void)
{
	int	*tab;
	int	idx;
	int	start;
	int	end;
	int	size;

	idx = 0;
	start = -5;
	end = 5;
	tab = ft_range(start, end);
	size = abso(end - start) + 1;
	while (idx < size)
	{
		printf(" [%i] ", tab[idx]);
		idx++;
	}
	printf("\n");
}
