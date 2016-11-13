/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chkusg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandriut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 19:15:46 by tandriut          #+#    #+#             */
/*   Updated: 2016/11/13 17:55:08 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	chkusg(int argc, char **argv, int nbrpcs)
{
	if (argc == 2)
	{
		if (openfile(argv[1]) == NULL)
		{
			ft_putstr("error\n");
			return (1);
		}
		if (checkfile(openfile(argv[1]), &nbrpcs) != NULL)
			return (0);
		else
		{
			ft_putstr("error\n");
			return (1);
		}
	}
	else
	{
		ft_putstr("use: ./fillit input_file\n");
		return (1);
	}
	return (0);
}
