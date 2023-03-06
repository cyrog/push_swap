/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:55:00 by cgross            #+#    #+#             */
/*   Updated: 2023/03/06 16:39:24 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_init(int argc, char **argv)
{
	int		size;
	int		i;
	int		j;
	int		*nbs;
	t_stack	*stack;

	size = 0;
	i = 1;
	j = 1;
	if (argc == 2)
	{
		j = 0;
		i = 0;
	}
	while (argv[j])
		j++;
	nbs = (int *)malloc(sizeof(int) * j);
	if (!nbs)
		return (0);
	while (argv[i])
	{
		nbs[size] = normalize1(argc, argv, argv[i], j);
		i++;
		size++;
	}
	stack = stack_create(nbs, size);
	return (stack);
}

t_stack	*sort(int argc, t_stack *a, t_stack *b)
{
	if (is_sorted(a) == 0)
		return (a);
	else if (a->size == 2)
		a = sort2(a);
	else if (a->size == 3)
		a = sort3(a);
	else if (a->size == 4)
		a = sort4(a, b);
	else if (a->size == 5)
		a = sort5(a, b);
	else
		a = sort_all(a, b);
	return (a);
}

int	main(int argc, char **argv)
{
	t_stack *a;
	t_stack *b;

	if (argc == 1 || argv[1] == NULL)
		return (0);
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		if (argv[0] == NULL)
		{
			free_argv(argv);
			return (0);
		}
	}
	if (check_error(argc, argv) == 0 || check_doubles(argc, argv) == 0)
	{
		error();
		if (argc == 2)
			free_argv(argv);
		return (-1);
	}
	a = stack_init(argc, argv);
	b = b_create(a->size);
//	print_stack(a->size,  a);
	a = sort(argc, a, b);
//	print_stack(a->size,  a);
	free_all(argc, argv, a, b);
	return (0);
}
