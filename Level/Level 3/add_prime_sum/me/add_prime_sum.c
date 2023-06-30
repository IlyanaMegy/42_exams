#include <stdio.h>
#include <unistd.h>

int	is_prime(int n)
{
	int	i;

	i = 2;
	if (n <= 1)
		return (0);
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	print_nbr(int n)
{
	char	c;

	if (n > 9)
	{
		print_nbr(n / 10);
		print_nbr(n % 10);
	}
	else
	{
		c = n + 48;
		write(1, &c, 1);
	}
}

int	ft_atoi(char *nbr)
{
	int	res;

	res = 0;
	while (*nbr >= '0' && *nbr <= '9')
		res = res * 10 + *nbr++ - 48;
	return (res);
}

void	add_print(char *nbr)
{
	int	n;
	int	i;
	int	res;

	i = 2;
	res = 0;
	n = ft_atoi(nbr);
	if (n > 0)
	{
		while (i <= n)
		{
			if (is_prime(i))
				res += i;
			i++;
		}
		print_nbr(res);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		add_print(av[1]);
	write(1, "\n", 1);
	return (0);
}