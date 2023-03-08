/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:55:00 by cgross            #+#    #+#             */
/*   Updated: 2023/03/08 16:03:33 by cgross           ###   ########.fr       */
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
	init.nbs = (int *)malloc(sizeof(int) * init.j + 1);
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

int	sort(int argc, t_stack *a, t_stack *b)
{
	if (is_sorted(a) == 0)
		return (0);
	else if (a->size == 2)
		sort2(a);
	else if (a->size == 3)
		sort3(a);
	else if (a->size == 4)
		sort4(a, b);
	else if (a->size == 5)
		sort5(a, b);
	else
		sort_all(a, b);
	return (0);
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
	sort(argc, a, b);
	free_all(argc, argv, a, b);
	return (0);
}
