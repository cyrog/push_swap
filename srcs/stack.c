/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 09:24:11 by cgross            #+#    #+#             */
/*   Updated: 2023/03/10 17:28:02 by cgross           ###   ########.fr       */
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
	int		i;
	int		*nbs;
	t_stack	*newstack;

	i = 0;
	nbs = (int *)malloc(sizeof(int) * size + 100000000);
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
		if (stack->nb[i] < min && stack->nb[i] != 0)
		{
			min = stack->nb[i];
			pos = i;
		}
		else
			i++;
	}
	return (pos);
}
