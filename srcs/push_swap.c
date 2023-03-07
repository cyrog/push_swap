/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:55:00 by cgross            #+#    #+#             */
/*   Updated: 2023/03/07 19:07:49 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_init(int argc, char **argv)
{
	t_init	init;
	t_stack	*stack;

	init.size = 0;
	init.i = 1;
	init.j = 1;
	if (argc == 2)
	{
		init.j = 0;
		init.i = 0;
	}
	while (argv[init.j])
		init.j++;
	init.nbs = (int *)malloc(sizeof(int) * init.j);
	if (!init.nbs)
		return (0);
	while (argv[init.i])
	{
		init.nbs[init.size] = normalize(argc, argv, argv[init.i], init.j);
		init.i++;
		init.size++;
	}
	stack = stack_create(init.nbs, init.size);
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
	t_stack	*a;
	t_stack	*b;

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
		error(argc, argv);
		return (-1);
	}
	a = stack_init(argc, argv);
	b = b_create(a->size);
	a = sort(argc, a, b);
	free_all(argc, argv, a, b);
	return (0);
}
