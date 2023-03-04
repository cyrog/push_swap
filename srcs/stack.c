/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 09:24:11 by cgross            #+#    #+#             */
/*   Updated: 2023/03/04 11:41:17 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_create(int *numbers, int size)
{
	t_stack	*newstack;

	newstack = (t_stack *)malloc(sizeof(t_stack));
	if (!newstack)
		return (0);
	stack_setsize(newstack, size);
	stack_setnumbers(newstack, numbers);
	return (newstack);
}

t_stack	*b_create(int size)
{
	int	i;
	int	*nbs;
	t_stack	*newstack;

	i = 0;
	newstack = (t_stack *)malloc(sizeof(t_stack));
	nbs = malloc(sizeof(int) * size + 1);
	if (!nbs)
		return (0);
	if (!newstack)
		return (0);
	while (i < size)
	{
		nbs[i] = 0;
		i++;
	}
	newstack = stack_create(nbs, size);
	free(nbs);
	return (newstack);
}

int	stack_getminpos(t_stack *stack)
{
	int	pos;
	int	min;
	int	i;

	i = 0;
	pos = i;
	min = stack->nb[0];
	while (i < stack->size)
	{
		if (stack->nb[i] < min)
		{
			min = stack->nb[i];
			pos = i;
		}
		else
			i++;
	}
	return (pos);
}

t_stack *stack_init2(int argc, char **argv)
{
	int		j = 0;
	int		i = 0;
	int		*nbs;
	char 	**res;
	t_stack	*stack;


	while (argv[stack->size])
		stack->size++;
	printf("size: %d", stack->size);
	nbs = (int*)malloc(sizeof(int) * stack->size + 1);
	if (!nbs)
		return (0);
	while (argv[j])
	{
		nbs[i] = atoi(argv[j]);
		j++;
		i++;
	}
	stack = stack_create(nbs, j);
	return (stack);
}

t_stack	*stack_init1(int argc, char **argv)
{
	int		i;
	int		j = 1;
	int		*nbs;
	char 	**res;
	t_stack	*stack;


	nbs = malloc(sizeof(int*) * argc);
	if (!nbs)
		return (0);
	else
	{
		i = 0;
		while (argv[j])
		{
			nbs[i] = atoi(argv[j]);
			j++;
			i++;
		}
	}
	stack = stack_create(nbs, argc - 1);
	return (stack);
}

