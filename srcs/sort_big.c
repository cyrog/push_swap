/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   by: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:50:43 by cgross            #+#    #+#             */
/*   Updated: 2023/02/23 11:32:29 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

t_stack	*sort_all(t_stack *a, t_stack *b)
{
	t_stack	*new;

	new = normalize(a);
	return (new);
}

/*int	main(void)
{
	int a;
	int	b;

	a = 8;
	b = b>>1;
	printf("%d", 12&23);
	return (b);
}*/
