/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:06:45 by cgross            #+#    #+#             */
/*   Updated: 2023/03/10 17:47:21 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort2(t_stack *a)
{
	if (a->nb[0] < a->nb[1])
		return ;
	else
		swap(a);
}

void	sort3(t_stack *a)
{
	if (a->nb[0] < a->nb[1] && a->nb[1] < a->nb[2])
		return ;
	if (a->nb[0] > a->nb[1] && a->nb[1] < a->nb[2] && a->nb[0] > a->nb[2])
		rotate_a(a);
	else if (a->nb[0] < a->nb[1] && a->nb[1] > a->nb[2] && a->nb[0] < a->nb[2])
	{
		revrotate_a(a);
		swap(a);
	}
	else if (a->nb[0] > a->nb[1] && a->nb[1] < a->nb[2])
		swap(a);
	else if (a->nb[0] > a->nb[1] && a->nb[1] > a->nb[2])
	{
		swap(a);
		revrotate_a(a);
	}
	else
		revrotate_a(a);
}

void	sort4(t_stack *a, t_stack *b)
{
	int	pos;

	pos = stack_getminpos(a);
	if (pos == 1)
		swap(a);
	else if (pos == 2)
	{
		revrotate_a(a);
		revrotate_a(a);
	}
	else if (pos == 3)
		revrotate_a(a);
	push_b(a, b);
	sort3(a);
	push_a(a, b);
}

void	sort5(t_stack *a, t_stack *b)
{
	int	pos1;

	pos1 = stack_getminpos(a);
	if (pos1 == 1)
		swap(a);
	else if (pos1 == 2)
	{
		rotate_a(a);
		rotate_a(a);
	}
	else if (pos1 == 3)
	{
		revrotate_a(a);
		revrotate_a(a);
	}
	else if (pos1 == 4)
		revrotate_a(a);
	push_b(a, b);
	a->size = a->size - 1;
	sort4(a, b);
	push_a(a, b);
	a->size = a->size + 1;
}
