/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 19:15:46 by mmihail           #+#    #+#             */
/*   Updated: 2016/11/08 19:51:14 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		nbrpcs;
	char	**taball;
	int		**alltetrims;
	int		sizemap;

	nbrpcs = 0;
	if (chkusg(argc, argv, nbrpcs) == 1)
		exit(1);
	else
	{
		taball = checkfile(openfile(argv[1]), &nbrpcs);
		alltetrims = add_tetrims(taball, nbrpcs);
		sizemap = get_square(nbrpcs);
		res_small_square(alltetrims, nbrpcs, sizemap);
	}
	return (0);
}
