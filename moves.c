/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:21:17 by cgross            #+#    #+#             */
/*   Updated: 2023/01/20 14:31:29 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack *stack)
{
	int	tmp = 0;

	//if (!(stack->nb[0]|| stack->nb[1])) //consider a zero needs fix
	//	return (stack->nb);
	
	tmp = stack->nb[0];
	stack->nb[0] = stack->nb[1];
	stack->nb[1] = tmp;
	printf("sa\n");
}

//int	*swap_b(t_stack *stack)			/sb

//int	*swap_both			/ss

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
	printf("rra\n");
}
