#include <unistd.h>

int	len_res(long int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	long int n = (long int)nb;
	int len = len_res(n);
	char *res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	if (n == 0)
		res[0] = '0';
	else if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	res[len] = 0;
	len--;
	while (n)
	{
		res[len--] = n % 10 + '0';
		n /= 10;
	}
	return (res);
}