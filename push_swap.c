/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 09:25:42 by cgross            #+#    #+#             */
/*   Updated: 2023/01/12 14:50:24 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *init_stack_a(int argc, char **argv, t_stack *stack)
{
	int		i = 0;
	int		j = 1;

	stack->size = argc - 1;	
	stack->numbers = malloc(sizeof(int) * argc);
	if (argc < 1)
		return (0);
	while (argv[j])
	{
		stack->numbers[i] = atoi(argv[j]);
		j++;
		i++;
	}
	return (stack->numbers);
}


int	main(int argc, char **argv)
{
	t_stack stack;

	if (argc < 1)
		return (0);
	else if (argc == 2)
		return (atoi(argv[1])); //need handle single string aswell
	else if (argc >= 3)
	{
		init_stack_a(argc, argv, &stack);
		//swap_a(&stack);
		//rotate_a(&stack);
		//revrotate_a(&stack);
	}
	print_a(argc, &stack);
	return (0);
}
		
