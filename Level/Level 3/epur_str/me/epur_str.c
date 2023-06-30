#include <unistd.h>

void	clean_me(char *str)
{
	while (*str == '\t' || *str == 32)
		str++;
	while (*str)
	{
		if (*str != '\t' && *str != 32)
		{
			write(1, str, 1);
			str++;
		}
		if (*str == '\t' || *str == 32)
		{
			write(1, " ", 1);
			while (*str == '\t' || *str == 32)
			str++;
		}
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		clean_me(av[1]);
	write(1, "\n", 1);
	return 0;
}