/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testutils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:14:02 by cgross            #+#    #+#             */
/*   Updated: 2023/03/07 18:56:19 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(int size, t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->size)
	{
		printf("%i\n", stack->nb[i]);
		i++;
	}
}
