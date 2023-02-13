/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_text.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhkim <yeonhkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 01:23:41 by yona              #+#    #+#             */
/*   Updated: 2023/01/22 15:53:50 by yeonhkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	put_text(t_mlx *mlx, int x, int y, char *str)
{
	mlx_string_put(mlx->conn, mlx->win, x, y, TEXT_COLOR, str);
}
