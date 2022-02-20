/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:25:15 by gmoreira          #+#    #+#             */
/*   Updated: 2022/02/13 20:32:27 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	matrix_line_sum(char **matrix, int size, int line)
{
	int	n;

	n = 0;
	while (size)
	{
		n += matrix[size - 1][line] - '0';
		size--;
	}
	return (n);
}

int	matrix_row_sum(char **matrix, int size, int row)
{
	int	n;

	n = 0;
	while (size)
	{
		n += matrix[row][size - 1] - '0';
		size--;
	}
	return (n);
}

int	matrix_line_blocks_visible(char **matrix, int size, int line)
{
	int	i;
	int	n;
	int	highest_block;

	i = 0;
	n = 0;
	highest_block = 0;
	while (i < size)
	{
		if (matrix[i][line] > highest_block + '0')
		{
			highest_block = matrix[i][line] - '0';
			n++;
		}
		i++;
	}
	return (n);
}

int	matrix_row_blocks_visible(char **matrix, int size, int row)
{
	int	i;
	int	n;
	int	highest_block;

	i = 0;
	n = 0;
	highest_block = 0;
	while (i < size)
	{
		if (matrix[row][i] > highest_block + '0')
		{
			highest_block = matrix[row][i] - '0';
			n++;
		}
		i++;
	}
	return (n);
}
