/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 22:48:49 by gmoreira          #+#    #+#             */
/*   Updated: 2022/02/18 22:53:10 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb);

int ft_iterative_factorial(int nb)
{
	int	conta;
	
	conta = 1;
	while(nb)
	{
		conta *= nb;
		nb = nb - 1;
	}
	return	(conta);
}
