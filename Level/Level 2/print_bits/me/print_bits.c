/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilymegy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:02:22 by ilymegy           #+#    #+#             */
/*   Updated: 2023/06/21 18:02:26 by ilymegy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned char	mask;
	unsigned char	bit;
	int				i;

	i = 7;
	mask = 1;
	while (i >= 0)
	{
		bit = (((octet >> i) & mask) + '0');
		write(1, &bit, 1);
		i--;
	}
}
