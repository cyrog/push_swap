/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:03:26 by cgross            #+#    #+#             */
/*   Updated: 2023/03/04 11:48:17 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *a)
{
	int	i;

	i = a->size - 1;
	while (i > 0)
	{
		if (a->nb[i] >= a->nb[i - 1])
			i--;
		else
			return (1);
	}
	return (0);
}

t_stack	*normalize(t_stack *a)
{
	int	i;
	int	pos;
	int	count;
	int	*nbs;

	i = 0;
	pos = 0;
	count = 0;

	nbs = (int*)malloc(sizeof(int) * a->size + 1);
	while (pos < a->size)
	{
		while (i < a->size)
		{
			if (a->nb[pos] < a->nb[i])
				count++;
			i++;
		}
		nbs[pos] = a->size - count;
		pos++;
		count = 0;
		i = 0;
	}
	a = stack_create(nbs, a->size);
	return (a);
}

/*int	main(int argc, char **argv)
{
	t_stack	*a;
	a = stack_init(argc, argv);
	print_stack(argc, a);
	printf("normalized:\n");
	a = normalize(a);
	print_stack(argc, a);
}

*/
