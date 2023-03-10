/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_strs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhkim <yeonhkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 22:34:22 by yona              #+#    #+#             */
/*   Updated: 2023/01/22 16:02:36 by yeonhkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_strs(char **strs)
{
	int	cnt;

	cnt = 0;
	while (strs[cnt] && *strs[cnt] != '\n')
		cnt++;
	return (cnt);
}
