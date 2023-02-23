/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   by: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:50:43 by cgross            #+#    #+#             */
/*   Updated: 2023/02/23 15:02:47 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

t_stack	*sort_all(t_stack *a, t_stack *b)
{
	int	i;
	int	bit;
	int	size;

	i = 0;
	bit = 0;
	while (size < a->size)
		size++;
	while (is_sorted(a) != 0)
	{
		i = 0;
		while (i < size && is_sorted(a) != 0)
		{
			i++;
			if (((a->nb[0] >> bit) & 1) == 0)
				push_b(a, b);
			else
				rotate_a(a);
		}
		while (b->nb[0])
			push_a(a, b);
		bit++;
	}
	return (a);
}

//test bit operators
/*int	main(void)
{
	int a;
	int	b;

	a = 8;
	b = b>>1;
	printf("%d", 12&23);
	return (b);
}*/
