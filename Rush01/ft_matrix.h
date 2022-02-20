/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-cama <sde-cama@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:08:14 by sde-cama          #+#    #+#             */
/*   Updated: 2022/02/13 21:08:17 by sde-cama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATRIX_H
# define FT_MATRIX_H

char	**ft_make_board(int n_size);
void	ft_free_matrix(char **columns, int n_size);
void	ft_putchar_matrix(char n, char **matrix, int n_size);

#endif