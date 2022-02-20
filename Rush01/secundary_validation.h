/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   secundary_validation.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-cama <sde-cama@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 01:35:37 by sde-cama          #+#    #+#             */
/*   Updated: 2022/02/14 01:38:32 by sde-cama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SECUNDARY_VALIDATION_H
# define SECUNDARY_VALIDATION_H

void	ft_puterror(void);
int		secundary_validation(int *ptr);
int		check_adjacent(int *ptr);
int		check_corner(int *ptr);
int		check_opposite(int *ptr);

#endif