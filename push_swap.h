/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:21:46 by cgross            #+#    #+#             */
/*   Updated: 2023/01/20 14:54:04 by cgross           ###   ########.fr       */
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

t_stack	*sort2(t_stack *a);
t_stack	*sort3(t_stack *a);
t_stack	*sort4(t_stack *a, t_stack *b);

int		stack_getmin(t_stack *stack);
int		stack_getmax(int argc, char **argv, t_stack *stack);

void	push_a(t_stack *a, t_stack *b);
void	swap_a(t_stack *stack);
void	rotate_a(t_stack *stack);
void	revrotate_a(t_stack *stack);
void	print_a(int argc, t_stack *stack);

t_stack	*check_args(int argc, char **argv);


#endif
