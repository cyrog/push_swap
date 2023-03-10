/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:56:11 by cgross            #+#    #+#             */
/*   Updated: 2023/03/10 17:28:52 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack *a, t_stack *b)
{
	int	i;
	int	j;
	int	tmp;

	i = 1;
	j = 1;
	tmp = a->nb[0];
	a->nb[0] = b->nb[0];
	while (a->nb[j])
		j++;
	j--;
	while (j > 0)
	{
		a->nb[j + 1] = a->nb[j];
		j--;
	}
	a->nb[1] = tmp;
	while (b->nb[i])
	{
		b->nb[i - 1] = b->nb[i];
		i++;
	}
	b->nb[i - 1] = 0;
	write(1, "pa\n", 3);
}

void	push_b(t_stack *a, t_stack *b)
{
	int	i;
	int	j;
	int	tmp;

	i = 1;
	j = 1;
	tmp = b->nb[0];
	b->nb[0] = a->nb[0];
	while (b->nb[j])
		j++;
	j--;
	while (j > 0)
	{
		b->nb[j + 1] = b->nb[j];
		j--;
	}
	b->nb[1] = tmp;
	while (a->nb[i])
	{
		a->nb[i - 1] = a->nb[i];
		i++;
	}
	a->nb[i - 1] = 0;
	write(1, "pb\n", 3);
}
