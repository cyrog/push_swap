/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:21:17 by cgross            #+#    #+#             */
/*   Updated: 2023/02/20 17:30:10 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	int	tmp = 0;

	//if (!(stack->nb[0]|| stack->nb[1])) //consider a zero needs fix
	//	return (stack->nb);
	
	tmp = stack->nb[0];
	stack->nb[0] = stack->nb[1];
	stack->nb[1] = tmp;
	printf("sa\n");
}

void	rotate_a(t_stack *stack)
{
	int tmp;
	int	i;

	i = 0;
	tmp = stack->nb[0];
	while (i < stack->size - 1)
	{
		stack->nb[i] = stack->nb[i + 1];
		i++;
	}
	stack->nb[i] = tmp;
	printf("ra\n");
}

void	revrotate_a(t_stack *stack)
{
	int	tmp;
	int	i;

	i = stack->size;
	tmp = stack->nb[stack->size - 1];
	while (i > 0)
	{
		stack->nb[i] = stack->nb[i - 1];
		i--;
	}
	stack->nb[i] = tmp;
	write(1, "rra\n", 4);
}
