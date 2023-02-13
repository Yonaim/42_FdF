/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_matrix_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhkim <yeonhkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 07:27:53 by yeonhkim          #+#    #+#             */
/*   Updated: 2023/01/22 18:56:51 by yeonhkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf_bonus.h"

t_matrix	unit_matrix(void)
{
	return ((t_matrix){
		(t_vector){1, 0, 0, 0},
		(t_vector){0, 1, 0, 0},
		(t_vector){0, 0, 1, 0},
		(t_vector){0, 0, 0, 1}});
}