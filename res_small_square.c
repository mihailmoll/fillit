/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   res_small_square.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 18:52:11 by mmihail           #+#    #+#             */
/*   Updated: 2016/11/08 19:45:46 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	**inc_mapsize(char **map, int *mapsize)
{
	int i;

	i = 0;
	while (i < *mapsize)
	{
		free(map[i]);
		i++;
	}
	free(map);
	i = 0;
	(*mapsize)++;
	map = ft_crmap(*mapsize);
	return (map);
}

int			res_small_square(int **alltetrims, int nbrpcs, int mapsize)
{
	int		a;
	t_map	map;

	a = 0;
	map.map = ft_crmap(mapsize);
	map.size = mapsize;
	while (resolvesquare(&alltetrims, nbrpcs, a, &map) != 1)
		map.map = inc_mapsize(map.map, &map.size);
	ft_showmap(map.map, map.size);
	return (0);
}
