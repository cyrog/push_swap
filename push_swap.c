/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 09:25:42 by cgross            #+#    #+#             */
/*   Updated: 2023/01/18 17:27:27 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *stack_init(int argc, char **argv)
{
	int		i = 0;
	int		j = 1;
	int		*nbs;
	t_stack	*stack;


	nbs = malloc(sizeof(int) * argc - 1);
	if (!nbs)
		return (0);
	if (argc < 1)
		return (0);
	while (argv[j])
	{
		nbs[i] = atoi(argv[j]);
		j++;
		i++;
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
	/*if (check_args(argc, argv) == 1)
	{
		printf("arg error");
		return (1);
	}
	*/
	else
	{
		a = stack_init(argc, argv);
		b = stack_create(0, 0);
		//swap_a(a);
		//rotate_a(&stack);
		//revrotate_a(&stack);
	}
	print_a(argc, a);
	return (0);
}
		
