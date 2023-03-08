/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:03:26 by cgross            #+#    #+#             */
/*   Updated: 2023/03/08 15:48:08 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *a)
{
	int	i;

	i = a->size - 1;
	while (i > 0)
	{
		if (a->nb[i] > a->nb[i - 1])
			i--;
		else
			return (1);
	}
	return (0);
}

int	normalize(int argc, char **argv, char *str, int size)
{
	int	i;
	int	bigger;
	int	nb;

	i = 1;
	bigger = 0;
	if (argc == 2)
		i = 0;
	else
		size = size -1;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) > ft_atoi(str))
			bigger++;
		i++;
	}
	nb = size - bigger;
	return (nb);
}
