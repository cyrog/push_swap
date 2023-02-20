/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:06:45 by cgross            #+#    #+#             */
/*   Updated: 2023/02/20 16:34:34 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*sort2(t_stack *a)
{
	if (a->nb[0] <= a->nb[1])
		return (a);
	else
		swap(a);
	return (a);
}

t_stack	*sort3(t_stack *a)
{
	if (a->nb[0] < a->nb[1] && a->nb[1] < a->nb[2])
		return (a);
	else if (a->nb[0] > a->nb[1] && a->nb[1] < a->nb[2] && a->nb[0] > a->nb[2])
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
	return (a);
}

t_stack *sort4(int argc, t_stack *a, t_stack *b)
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
	push_b(argc, a, b);
	sort3(a);
	push_a(argc, a, b);
	return (a);
}
