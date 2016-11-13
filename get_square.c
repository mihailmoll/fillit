/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_square.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandriut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 18:47:32 by tandriut          #+#    #+#             */
/*   Updated: 2016/11/10 16:53:34 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	get_square(int nbrpcs)
{
	int all;
	int square_root;
	int i;

	all = 4 * nbrpcs;
	square_root = 0;
	i = 0;
	while (square_root < all)
	{
		i++;
		square_root = i * i;
	}
	return (i);
}
