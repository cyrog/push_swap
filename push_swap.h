/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:21:46 by cgross            #+#    #+#             */
/*   Updated: 2023/01/12 14:11:24 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct	s_stack
{
	int	*numbers;
	int	size;
}				t_stack;

int		*swap_a(t_stack *stack);
int		*rotate_a(t_stack *stack);
int		*revrotate_a(t_stack *stack);
void	print_a(int argc, t_stack *stack);


#endif
