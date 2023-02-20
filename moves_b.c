/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:56:11 by cgross            #+#    #+#             */
/*   Updated: 2023/02/20 16:45:53 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_a(int argc, t_stack *a, t_stack *b)
{
	int tmp1;
	int	tmp2;
	int	i;

	if (b->size <= 0)
		return (0);
	i = 0;
	tmp2 = b->nb[0];
	while (i < argc - 1)
	{
		tmp1 = a->nb[i];
		a->nb[i] = tmp2;
		tmp2 = tmp1;
		i++;
	}
	i = 0;
	while (i < argc - 1)
	{
		b->nb[i] = b->nb[i + 1];
		i++;
	}
	write(1, "pa\n", 3);
	a->size = a->size + 1;
	b->size = b->size - 1;
	return (a->size);
}

int	push_b(int argc, t_stack *a, t_stack *b)
{
	int	tmp1;
	int tmp2;
	int	i;

	if (a->size <= 0)
		return (0);
	i = 0;
	tmp2 = a->nb[0];
	while (i < argc - 1)
	{
		tmp1 = b->nb[i];
		b->nb[i] = tmp2;
		tmp2 = tmp1;
		i++;
	}
	i = 0;
	while (i < argc - 1)
	{
		a->nb[i] = a->nb[i + 1];
		i++;
	}
	write(1, "pb\n", 3);
	b->size = b->size + 1;
	a->size = a->size - 1;
	return (b->size);
}
