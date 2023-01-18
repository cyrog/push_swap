/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <cgross@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:20:53 by cgross            #+#    #+#             */
/*   Updated: 2023/01/18 17:01:22 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_args(int argc, char **argv)
{
	char **arg;
	int	i;
	int	j;

	if (argc <= 1)
	{
		printf("not enough args");
		return (1);
	}
	arg = ft_split(argv[1], ' ');
	i = 0;
	j = 0;
	if (argc == 2)
	{
		while (arg[i])
		{
			while (arg[i][j])
			{
				if (!(isdigit(arg[i][j])))
				{
					printf("error arg - 1");
					return (1);
				}
				j++;
			}
			i++;
		}
	}
	else
		printf("3");
	return (0);
}





	/*
	else
	{
		j = 1;
		while (argv[j])
		{
			//printf("%s\n", argv[j]);
			//printf("%s\n", argv[j + 1]);
			//printf("%d\n", !(isnumber(atoi(argv[j]))));
			if (isdigit(atoi(argv[j]) == 1))
			{
				printf("wrong\n");
				return (1);
			}
			else
			{
				printf("argv[j]: %d\n", atoi(argv[j]));
				j++;
			}
		}
	}
	*/
