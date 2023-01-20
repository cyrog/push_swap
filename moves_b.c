/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:56:11 by cgross            #+#    #+#             */
/*   Updated: 2023/01/20 14:56:19 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.c"

void	push_a(t_stack *a, t_stack *b)
{
	int	ia = 0;
	int ib = 0;

	while (a->nb[ia])
		ia++;
	b->nb[ia] = a->nb[ia];
	printf("%d", a->nb[ia]);
	printf("%d", a->nb[ib]);
}
