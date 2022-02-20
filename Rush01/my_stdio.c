/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_stdio.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 00:47:37 by rmiranda          #+#    #+#             */
/*   Updated: 2022/02/13 20:30:15 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	str_size(char *str)
{
	int	n;

	n = 0;
	while (*str++)
		n++;
	return (n);
}

int	str_charnbr_count(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			i++;
		str++;
	}
	return (i);
}

int	str_charnbr(char *str, int n)
{
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			if (n == 0)
				return (*str - '0');
			n--;
		}
		str++;
	}
	return (5);
}

int	str_charnbr_most_high(char *str)
{
	int	n;

	n = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			if (*str > n + '0')
				n = *str - '0';
		str++;
	}
	return (n);
}

int	str_charnbr_most_low(char *str)
{
	int	n;

	n = 999999;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			if (*str < n + '0')
				n = *str - '0';
		str++;
	}
	return (n);
}
