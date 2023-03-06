/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:26:09 by cgross            #+#    #+#             */
/*   Updated: 2023/03/06 16:35:38 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_both(t_stack *a, t_stack *b)
{
	int	tmp1;
	int	tmp2;

	tmp1 = a->nb[0];
	a->nb[0] = a->nb[1];
	a->nb[1] = tmp1;
	tmp2 = b->nb[0];
	b->nb[0] = b->nb[1];
	b->nb[1] = tmp2;
	printf("ss\n");
}

void	rotate_both(t_stack *a, t_stack *b)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = a->nb[0];
	while (i < a->size - 1)
	{
		a->nb[i] = a->nb[i + 1];
		i++;
	}
	a->nb[i] = tmp;
	i = 0;
	tmp = b->nb[i];
	while (i < b->size - 1)
	{
		b->nb[i] = b->nb[i + 1];
		i++;
	}
	b->nb[i] = tmp;
	write(1, "rr\n", 3);
}

void	revrotate_both(t_stack *a, t_stack *b)
{
	int	tmp;
	int	i;

	i = a->size;
	tmp = a->nb[a->size - 1];
	while (i > 0)
	{
		a->nb[i] = a->nb[i - 1];
		i--;
	}
	a->nb[i] = tmp;
	i = b->size;
	tmp = b->nb[b->size - 1];
	while (i > 0)
	{
		b->nb[i] = b->nb[i - 1];
		i--;
	}
	b->nb[i] = tmp;
	write(1, "rrr\n", 4);
}
