/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:06:45 by cgross            #+#    #+#             */
/*   Updated: 2023/01/19 17:55:08 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*sort2(int argc, char **argv)
{
	t_stack	*a;

	a = stack_init(argc, argv);
	if ((strcmp(argv[1], argv[2]) <= 0))
		return (a);
	else
		swap_a(a);
	return (a);
}

t_stack	*sort3(int argc, char **argv)
{
	t_stack	*a;

	a = stack_init(argc, argv);
	if (a->nb[0] < a->nb[1] && a->nb[1] < a->nb[2])
		return (a);
	else if (a->nb[0] < a->nb[1] && a->nb[1] > a->nb[2])
	{
		revrotate_a(a);
		swap_a(a);
	}
	else if (a->nb[0] > a->nb[1] && a->nb[1] < a->nb[2] && a->nb[0] > a->nb[2])
	   rotate_a(a);	
	else if (a->nb[0] > a->nb[1] && a->nb[1] < a->nb[2])
		swap_a(a);
	else if (a->nb[0] > a->nb[1] && a->nb[1] > a->nb[2])
	{
		swap_a(a);
		revrotate_a(a);
	}
	return (a);
}

t_stack *sort4(int argc, char **argv);
{
	t_stack *a;
	t_stack	*b;

	b = (t_stack *)malloc(sizeof(t_stack);

	
