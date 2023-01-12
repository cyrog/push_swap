/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:21:17 by cgross            #+#    #+#             */
/*   Updated: 2023/01/12 14:12:17 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*swap_a(t_stack *stack)
{
	int	tmp = 0;

	if (!stack->numbers[0] || !stack->numbers[1])
		return (stack->numbers);
	tmp = stack->numbers[0];
	stack->numbers[0] = stack->numbers[1];
	stack->numbers[1] = tmp;
	//printf("sa:		");
	return (stack->numbers);
}

//int	*swap_b(t_stack *stack)			/sb

//int	*swap_both			/ss

int	*rotate_a(t_stack *stack)
{
	int tmp;
	int	i;

	i = 0;
	tmp = stack->numbers[0];
	while (i < stack->size - 1)
	{
		stack->numbers[i] = stack->numbers[i + 1];
		i++;
	}
	stack->numbers[i] = tmp;
	return (stack->numbers);
}

int	*revrotate_a(t_stack *stack)
{
	int	tmp;
	int	i;

	i = stack->size;
	tmp = stack->numbers[stack->size - 1];
	while (i > 0)
	{
		stack->numbers[i] = stack->numbers[i - 1];
		i--;
	}
	stack->numbers[i] = tmp;
	return (stack->numbers);
}
