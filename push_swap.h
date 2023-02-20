/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:21:46 by cgross            #+#    #+#             */
/*   Updated: 2023/02/20 17:30:50 by cgross           ###   ########.fr       */
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
t_stack	*b_create(int size);
void	stack_setsize(t_stack *stack, int size);
void	stack_setnumbers(t_stack *stack, int *numbers);

t_stack	*sort2(t_stack *a);
t_stack	*sort3(t_stack *a);
t_stack	*sort4(int argc, t_stack *a, t_stack *b);

int		stack_getminpos(t_stack *stack);
int		stack_getmax(int argc, char **argv, t_stack *stack);

int		push_a(int argc, t_stack *a, t_stack *b);;
int		push_b(int argc, t_stack *a, t_stack *b);;
void	swap(t_stack *stack);

void	swap_both(t_stack *a, t_stack *b);
void	rotate_both(t_stack *a, t_stack *b);
void	revrotate_both(t_stack *a, t_stack *b);

void	rotate_a(t_stack *stack);
void	revrotate_a(t_stack *stack);
void	print_stack(int argc, t_stack *stack);

t_stack	*check_args(int argc, char **argv);


#endif
