/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_showmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 18:44:52 by mmihail           #+#    #+#             */
/*   Updated: 2016/11/08 18:45:17 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_showmap(char **map, int mapsize)
{
	int i;
	int a;

	a = 0;
	while (a < mapsize)
	{
		i = 0;
		while (i < mapsize)
		{
			ft_putchar(map[a][i]);
			i++;
		}
		ft_putchar('\n');
		a++;
	}
	return (0);
}
