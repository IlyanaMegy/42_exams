/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilymegy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 20:17:31 by ilymegy           #+#    #+#             */
/*   Updated: 2023/06/18 20:17:33 by ilymegy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char *str;
	if (argc == 2)
	{
		str = argv[1];
		while (*str && *str == 32 || *str == 9)
			str++;
		while (*str && *str != 32 && *str != 9)
		{
			write(1, str, 1);
			str++;
		}
	}
	write(1, "\n", 1);
	return (0);
}