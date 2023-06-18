/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilymegy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 20:48:16 by ilymegy           #+#    #+#             */
/*   Updated: 2023/06/18 20:48:18 by ilymegy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_nb(int n)
{
	int	c;

	while (n >= 10)
	{
		c = n / 10 + 48;
		write(1, &c, 1);
		n = n % 10;
	}
	if (n < 10)
	{
		c = n + 48;
		write(1, &c, 1);
	}
}

int	main(void)
{
	int n;

	n = 1;
	while (n < 101)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			write(1, "fizzbuzz", 8);
		else if (n % 5 == 0)
			write(1, "buzz", 4);
		else if (n % 3 == 0)
			write(1, "fizz", 4);
		else
			print_nb(n);
		write(1, "\n", 1);
		n++;
	}
	return (0);
}