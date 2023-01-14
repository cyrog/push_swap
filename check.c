/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:20:53 by cgross            #+#    #+#             */
/*   Updated: 2023/01/14 16:45:18 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_args(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;	
	if (argc <= 1)
		return (1);
	else if (argc == 2)
	{
		while (argv[1][i])
		{
			if (!(ft_isdigit(atoi(&argv[1][i])) || argv[1][i] == ' '))
				return (1);
			else
				i++;
		}
	}
	else
	{
		j = 1;
		while (argv[j])
		{
			printf("argv[j]: %s\n", argv[j]);
			if (ft_isdigit(atoi(argv[j])))
				return (1);
			else
				j++;
		}
	}
	return (0);
}
