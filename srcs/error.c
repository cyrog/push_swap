/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:44:34 by cgross            #+#    #+#             */
/*   Updated: 2023/03/06 16:34:08 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error(void)
{
	write(2, "Error\n", 6);
	return (-1);
}

int	check_int(char *str)
{
	long	nb;

	nb = ft_atol(str);
	if (nb > 2147483647 || nb < -2147483648)
		return (0);
	return (1);
}

int	check_sign(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		return (1);
	return (0);
}

int	check_error(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc == 2)
		i = 0;
	while (argv[i])
	{
		j = 0;
		if (check_sign(argv[i]) == 1)
			j++;
		if (argv[i][j] == '\0')
			return (0);
		while (argv[i][j] != '\0')
		{
			if (ft_isdigit(argv[i][j]) == 0)
				return (0);
			j++;
		}
		if (check_int(argv[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	check_doubles(int argc, char **argv)
{
	int	i;
	int	j;
	int	add;

	i = 1;
	if (argc == 2)
		i = 0;
	j = i;
	while (argv[i])
		i++;
	i--;
	while (j < i)
	{
		add = 0;
		while ((j + add) < i)
		{
			if (ft_atoi(argv[j]) == ft_atoi(argv[i - add]))
				return (0);
			add++;
		}
		j++;
	}
	return (1);
}
