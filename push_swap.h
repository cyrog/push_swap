/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:21:46 by cgross            #+#    #+#             */
/*   Updated: 2023/01/19 15:47:20 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "libft/libft.h"

typedef struct	s_stack
{
	int	*nb;
	int	size;
}				t_stack;

t_stack	*stack_init(int argc, char **argv);
t_stack	*stack_create(int *numbers, int size);
void	stack_setsize(t_stack *stack, int size);
void	stack_setnumbers(t_stack *stack, int *numbers);

t_stack	*sort2(int argc, char **argv);
t_stack	*sort3(int argc, char **argv);


int		*swap_a(t_stack *stack);
int		*rotate_a(t_stack *stack);
int		*revrotate_a(t_stack *stack);
void	print_a(int argc, t_stack *stack);

t_stack	*check_args(int argc, char **argv);


#endif
