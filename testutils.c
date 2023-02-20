/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testutils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:14:02 by cgross            #+#    #+#             */
/*   Updated: 2023/02/20 13:00:23 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(int argc, t_stack *stack)
{
	int	i;

	i = 0;
	while (i < argc -1)
	{
		printf("%i\n", stack->nb[i]);
		i++;
	}
}
