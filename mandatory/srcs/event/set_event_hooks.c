/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_event_hooks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yona <yona@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:42:51 by yeonhkim          #+#    #+#             */
/*   Updated: 2023/01/21 21:47:55 by yona             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	set_event_hooks(void *mlx_win, t_fdf *f)
{
	mlx_hook(mlx_win, EVENT_KEY_PRESS, 0, keypress_hook, f);
	mlx_mouse_hook(mlx_win, mouse_hook, f);
	mlx_hook(mlx_win, EVENT_DESTROY, 0, destroy_hook, f);
}
