/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:44:34 by cgross            #+#    #+#             */
/*   Updated: 2023/02/23 16:52:19 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error(void)
{
	write(2, "Error\n", 6);
	return (-1);
}

int	check(int argc, char **argv)
{
	int	i;
	int	j;
	char	**res;

	i = 0;
	if (argc < 1)
	{
		error();
		return (1);
	}
	if (argc == 2)
		res = ft_split(argv[1], ' ');
	while (res[i])
	{
		j = 0;
		if (ft_isdigit(res[i][j]) != 1)
			return (1);
		}
		i++;
	}
	return (0);

}
