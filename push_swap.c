/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 09:25:42 by cgross            #+#    #+#             */
/*   Updated: 2023/01/19 16:58:22 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *stack_init(int argc, char **argv)
{
	int		i = 0;
	int		j = 1;
	int		*nbs;
	char 	**res;
	t_stack	*stack;


	nbs = malloc(sizeof(int) * argc - 1);
	if (!nbs)
		return (0);
	if (argc < 1)
		return (0);
	if (argc == 2)
	{
		printf("need parse with 2 args\n");
		printf("why arg needs a space????????\n");
		res = ft_split(argv[1], ' ');
		printf("%s", res[0]);
	}
	else
	{
		i = 0;
		while (argv[j])
		{
			nbs[i] = atoi(argv[j]);
			j++;
			i++;
		}
	}
	stack = stack_create(nbs, argc - 1);
	return (stack);
}



int	main(int argc, char **argv)
{
	t_stack *a;
	t_stack *b;

	if (argc < 1)
		return (0);
	if (argc == 3)
		a = sort2(argc, argv);
	if (argc == 4)
		a = sort3(argc, argv);
	else
	{
		a = stack_init(argc, argv);
		b = stack_create(0, 0);
	}
	//swap_a(a);
	//rotate_a(&stack);
	//revrotate_a(&stack);
	print_a(argc, a);
	return (0);
}
		
