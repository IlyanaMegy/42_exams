/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilymegy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:26:44 by ilymegy           #+#    #+#             */
/*   Updated: 2023/06/21 15:26:46 by ilymegy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

void	do_op(char *num1, char op, char*num2)
{
	int	n1;
	int n2;

	n1 = atoi(num1);
	n2 = atoi(num2);
	if (op == '+')
		printf("%d\n", (n1 + n2));
	else if (op == '-')
		printf("%d\n", (n1 - n2));
	else if (op == '*')
		printf("%d\n", (n1 * n2));
	else if (op == '/')
		printf("%d\n", (n1 / n2));
	else if (op == '%')
		printf("%d\n", (n1 % n2));
}

int	main(int ac, char **av)
{
	if (ac == 4 && !(av[2][1]))
		do_op(av[1], av[2][0], av[3]);
	return 0;
}