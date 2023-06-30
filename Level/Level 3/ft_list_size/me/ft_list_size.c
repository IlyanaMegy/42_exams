#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_list_size(t_list *begin_lst)
{
	int	i;

	i = 0;
	while (begin_lst != NULL)
	{
		i++;
		begin_lst = begin_lst->next;
	}
	return (i);
}

t_list	*add_to_list(char *data)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (new = NULL);
	new->next = NULL;
	new->data = data;
	return (new);
}

int	main(void)
{
	t_list *first;
	t_list *second;
	t_list *third;
	t_list *fourth;

	first = add_to_list("hello");
	second = add_to_list("world");
	third = add_to_list("this is");
	fourth = add_to_list("meee");
	first->next = second;
	second->next = third;
	third->next = fourth;
	printf("len is %d\n", ft_list_size(first));
	return (0);
}