/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilymegy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 22:01:23 by ilymegy           #+#    #+#             */
/*   Updated: 2023/06/18 22:01:25 by ilymegy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int strlen(char *s)
{
	int i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	char *str;
	int i;

	if (argc == 2)
	{
		str = argv[1];
		i = strlen(str) -1 ;
		while (i>=0)
		{
			write(1, &(str[i]), 1);
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}