/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 09:24:11 by cgross            #+#    #+#             */
/*   Updated: 2023/01/12 15:17:54 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_stack(int *numbers, int size)
{
	t_stack	*newstack;

	newstack = (t_stack *)malloc(sizeof(t_stack));
	if (!newstack)
		return (0);
	if (newstack
