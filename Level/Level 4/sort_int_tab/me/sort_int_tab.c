void	swap_it(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void sort_int_tab(int *tab, unsigned int size)
{
	int i;
	int j = 0;

	if (size <= 1)
		return;
	while (j < size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i+1])
				swap_it(&tab[i], tab[i+1]);
			i++;
		}
		j++;
	}
}