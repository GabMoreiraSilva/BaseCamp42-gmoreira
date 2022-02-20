/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-cama <sde-cama@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:08:03 by sde-cama          #+#    #+#             */
/*   Updated: 2022/02/13 21:08:07 by sde-cama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKS_H
# define CHECKS_H

int	matrix_line_sum(char **matrix, int size, int line);
int	matrix_row_sum(char **matrix, int size, int row);
int	matrix_line_blocks_visible(char **matrix, int size, int line);
int	matrix_row_blocks_visible(char **matrix, int size, int line);

#endif