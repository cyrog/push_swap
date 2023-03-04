/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:21:46 by cgross            #+#    #+#             */
/*   Updated: 2023/03/03 10:28:49 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "libft.h"

typedef struct	s_stack
{
	int	*nb;
	int	size;
}				t_stack;

t_stack	*stack_init(int argc, char **argv);
t_stack	*stack_init1(int argc, char **argv);
t_stack	*stack_init2(int argc, char **argv);
t_stack	*stack_create(int *numbers, int size);
t_stack	*b_create(int size);
void	stack_setsize(t_stack *stack, int size);
void	stack_setnumbers(t_stack *stack, int *numbers);

int		is_sorted(t_stack *a);
t_stack	*normalize(t_stack *a);

t_stack	*sort2(t_stack *a);
t_stack	*sort3(t_stack *a);
t_stack	*sort4(t_stack *a, t_stack *b);
t_stack	*sort5(t_stack *a, t_stack *b);

t_stack	*sort_all(t_stack *a, t_stack *b);

int		stack_getminpos(t_stack *stack);
int		stack_getmax(int argc, char **argv, t_stack *stack);

void	push_a(t_stack *a, t_stack *b);;
void	push_b(t_stack *a, t_stack *b);;
void	swap(t_stack *stack);

void	swap_both(t_stack *a, t_stack *b);
void	rotate_both(t_stack *a, t_stack *b);
void	revrotate_both(t_stack *a, t_stack *b);

void	rotate_a(t_stack *stack);
void	revrotate_a(t_stack *stack);
void	print_stack(int argc, t_stack *stack);

int		error(void);
int		check_int(char *str);
int		check_sign(char *str);
int		check_doubles(int argc, char **argv);
int		check_error(int argc, char **argv);

long	ft_atol(const char *str);
void	free_argv(char **argv);

t_stack	*check_args(int argc, char **argv);


#endif
