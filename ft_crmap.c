/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_crmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 18:42:25 by mmihail           #+#    #+#             */
/*   Updated: 2016/11/08 18:44:07 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_crmap(int mapsize)
{
	int		x;
	int		y;
	char	**map;

	y = 0;
	map = (char **)malloc(mapsize * sizeof(char *));
	while (y < mapsize)
	{
		x = 0;
		map[y] = (char *)malloc(mapsize * sizeof(char));
		while (x < mapsize)
			map[y][x++] = '.';
		y++;
	}
	return (map);
}
