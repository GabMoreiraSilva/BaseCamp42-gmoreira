/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-cama <sde-cama@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:08:36 by sde-cama          #+#    #+#             */
/*   Updated: 2022/02/13 21:08:39 by sde-cama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TOOLS_H
# define FT_TOOLS_H

void	ft_putchar(char n);
void	print_matrix(char **matrix, int n_size);
int		initial_validation(char *input, int *observer_count, int *board_size);
int		*create_observers(char *input, int observer_count);

#endif