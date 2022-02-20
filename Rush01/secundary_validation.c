/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   secundary_validation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-cama <sde-cama@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:57:08 by sde-cama          #+#    #+#             */
/*   Updated: 2022/02/14 01:46:10 by sde-cama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	secundary_validation(int *input)
{
	if (check_adjacent(input))
	{
		write(1, "Error\n", 6);
		return (check_adjacent(input));
	}
	if (check_corner(input))
	{	
		write(1, "Error\n", 6);
		return (check_corner(input));
	}
	if (check_opposite(input))
	{
		write(1, "Error\n", 6);
		return (check_opposite(input));
	}
	return (0);
}

int	check_adjacent(int *ptr)
{
	int	i;
	int	count;

	i = 0;
	while (i < 15)
	{
		count = 1;
		while (count < 4)
		{
			if (ptr[i] == ptr[i + 1])
			{
				if (ptr[i] == 4 || ptr[i] == 1)
				{
					return (1);
				}
			}
			i++;
			count++;
		}
		i++;
	}
	return (0);
}

int	check_corner(int *ptr)
{
	int	i;

	i = 0;
	while (i < 4 || (i >= 4 && i <= 7))
	{
		if (ptr[0] == 1 && ptr[8] > 1)
		{
			return (2);
		}
		else if (ptr[3] == 1 && ptr[12] > 1)
		{
			return (2);
		}
		else if (ptr[4] == 1 && ptr[11] > 1)
		{
			return (2);
		}
		else if (ptr[7] == 1 && ptr[15] > 1)
		{
			return (2);
		}
		i++;
	}
	return (0);
}

int	check_opposite(int *ptr)
{
	int	i;

	i = 0;
	while (i <= 3 || (i <= 7 && i >= 4))
	{
		if (ptr[i] == ptr[i + 4])
		{
			if (ptr[i] != 2)
			{
				return (3);
			}
		}
		i++;
	}
	return (0);
}
