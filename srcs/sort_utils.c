/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:03:26 by cgross            #+#    #+#             */
/*   Updated: 2023/03/06 14:51:13 by cgross           ###   ########.fr       */
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

int	normalize1(int argc, char **argv, char *str, int size)
{
	int	i;
	int	bigger;
	int	nb;

	i = 1;
	bigger = 0;
	if (argc == 2)
		i = 0;
	else
		size = size -1;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) > ft_atoi(str))
			bigger++;
		i++;
		//printf("argv[i]%s\n", argv[i]);
		//printf("i:	%d\n", i);
	//	printf("bigger:	%d\n", bigger);
		//printf("size:	%d\n", size);
	}
	nb = size - bigger;
	return (nb);
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
