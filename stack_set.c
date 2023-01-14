/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:45:09 by cgross            #+#    #+#             */
/*   Updated: 2023/01/14 13:56:39 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_setsize(t_stack *stack, int size)
{
	if (!stack)
		return ;
	stack->size = size;
}

void	stack_setnumbers(t_stack *stack, int *numbers)
{
	if (!stack)
		return ;
	stack->numbers = numbers;
}
