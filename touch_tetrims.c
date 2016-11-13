/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   touch_tetrims.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 19:15:46 by mmihail           #+#    #+#             */
/*   Updated: 2016/11/08 19:37:17 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	*touch_tetrims(char *curblk)
{
	int i;
	int y;
	int x;
	int m;
	int *piece;

	i = 0;
	y = 0;
	x = 0;
	m = 0;
	piece = malloc(8 * sizeof(int));
	if (piece == NULL)
		return (NULL);
	while (curblk[i] != '\0')
	{
		if (curblk[i] == '#')
		{
			y = (i / 5);
			x = (i % 5);
			piece[m++] = y;
			piece[m++] = x;
		}
		i++;
	}
	return (piece);
}

static int	**rm_line(int **pieces, int nbrofpcs)
{
	int n;

	n = 0;
	while (n < nbrofpcs)
	{
		while ((pieces[n][0] > 0) && (pieces[n][2] > 0) &&
				(pieces[n][4] > 0) && (pieces[n][6] > 0))
		{
			pieces[n][0]--;
			pieces[n][2]--;
			pieces[n][4]--;
			pieces[n][6]--;
		}
		while ((pieces[n][1] > 0) && (pieces[n][3] > 0) &&
				(pieces[n][5] > 0) && (pieces[n][7] > 0))
		{
			pieces[n][1]--;
			pieces[n][3]--;
			pieces[n][5]--;
			pieces[n][7]--;
		}
		n++;
	}
	return (pieces);
}

int			**add_tetrims(char **content, int nbrofpc)
{
	int n;
	int *piece;
	int **pieces;

	piece = malloc(8 * sizeof(int));
	if (piece == NULL)
		return (0);
	pieces = malloc(nbrofpc * sizeof(piece));
	if (piece == NULL)
		return (0);
	n = 0;
	while (n < nbrofpc)
	{
		pieces[n] = touch_tetrims(content[n]);
		n++;
	}
	rm_line(pieces, nbrofpc);
	return (pieces);
}
