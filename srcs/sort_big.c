/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:51:59 by cgross            #+#    #+#             */
/*   Updated: 2023/03/07 19:07:38 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*sort_all(t_stack *a, t_stack *b)
{
	int	i;
	int	bit;
	int	size;

	i = 0;
	bit = 0;
	size = 0;
	while (a->nb[size])
		size++;
	while (is_sorted(a) != 0)
	{
		i = 0;
		while (i < size && is_sorted(a) != 0)
		{
			if (((a->nb[0] >> bit) & 1) == 0)
				push_b(a, b);
			else
				rotate_a(a);
			i++;
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
