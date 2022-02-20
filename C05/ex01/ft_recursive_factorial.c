/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 22:38:38 by gmoreira          #+#    #+#             */
/*   Updated: 2022/02/19 00:57:30 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	if (nb <= 0)
		return (1);
	else if (nb == 1)
		return (1);
	return (nb *= ft_recursive_factorial(nb - 1));
}

#include <stdio.h>

int main()
{
	printf("%d ",ft_recursive_factorial(9));
}