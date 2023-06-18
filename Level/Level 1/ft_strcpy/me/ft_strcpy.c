/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilymegy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 21:20:56 by ilymegy           #+#    #+#             */
/*   Updated: 2023/06/18 21:21:00 by ilymegy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcpy(char *s1, char *s2)
{
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (s1);
}

// int	main(int argc, char **argv)
// {
// 	char	*s = malloc( 40 );

// 	if (argc > 1){
// 		ft_strcpy(s, argv[1]);
// 		printf("src = %s\ndest = %s\n", argv[1], s);
// 	}
// 	return (0);
// }