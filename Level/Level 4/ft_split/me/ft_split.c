/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilymegy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:42:11 by ilymegy           #+#    #+#             */
/*   Updated: 2023/06/22 14:42:19 by ilymegy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stddef.h>

int	sep(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int	len_word(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i])
	{
		if (!sep(str[i]))
		{
			len++;
			i++;
		}
		else
			i++;
	}
	return (len);
}

char *add_word(char *str)
{
	int i = 0;
	char *word;

	while (str[i] && !sep(str[i]))
		i++;
	word = malloc(sizeof(char) * (i+1));
	if (!word)
		return NULL;
	i = 0;
	while (str[i] && !sep(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}	

char	**ft_split(char *str)
{
	int i = 0;
	char **res;

	res = malloc(sizeof(char*) * (len_word(str) + 1));
	if (!res)
		return NULL;
	while (*str)
	{
		while(*str && sep(*str))
			str++;
		if( *str && !sep(*str))
		{
			res[i] = add_word(str);
			i++;
			str++;
		}
		while (*str && !sep(*str))
			str++;
	}
	res[i] = NULL;
	return (res);
}

#include <stdio.h>

int	main(void)
{
	int		idx;
	char	**tab;

	idx = 0;
	tab = ft_split("The prophecy is true");
	while (idx < 4)
	{
		printf("String %d : %s\n", idx, tab[idx]);
		idx++;
	}
	return (0);
}
//free later
