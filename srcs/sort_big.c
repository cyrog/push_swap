/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:51:59 by cgross            #+#    #+#             */
/*   Updated: 2023/03/08 15:05:34 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_all(t_stack *a, t_stack *b)
{
	int	i;
	int	bit;
	int	size;

	i = 0;
	bit = 0;
	size = 0;
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
