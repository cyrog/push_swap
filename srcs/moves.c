/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:21:17 by cgross            #+#    #+#             */
/*   Updated: 2023/03/06 16:34:43 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	int	tmp;

	tmp = stack->nb[0];
	stack->nb[0] = stack->nb[1];
	stack->nb[1] = tmp;
	write(1, "sa\n", 3);
}

void	rotate_a(t_stack *stack)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = stack->nb[0];
	while (i < stack->size - 1)
	{
		stack->nb[i] = stack->nb[i + 1];
		i++;
	}
	stack->nb[i] = tmp;
	write(1, "ra\n", 3);
}

void	revrotate_a(t_stack *stack)
{
	int	tmp;
	int	i;

	i = stack->size - 1;
	tmp = stack->nb[stack->size - 1];
	while (i > 0)
	{
		stack->nb[i] = stack->nb[i - 1];
		i--;
	}
	stack->nb[i] = tmp;
	write(1, "rra\n", 4);
}
