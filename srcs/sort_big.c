/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   by: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:50:43 by cgross            #+#    #+#             */
/*   Updated: 2023/03/04 11:22:59 by cgross           ###   ########.fr       */
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
	printf("size:%d", size);
	printf("a->nb[0] = %d\n", a->nb[0]);
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
