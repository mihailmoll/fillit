/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 18:55:15 by mmihail           #+#    #+#             */
/*   Updated: 2016/11/08 19:49:04 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "struct.h"
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

# define BUF_SIZE 546

char		*openfile(char *filename);
char		**checkfile(char *content, int *blknum);
char		**ft_crmap(int mapsize);
void		ft_putchar(char c);
void		ft_putnbr(int n);
void		ft_bzero(void *s, size_t n);
void		*ft_memalloc(size_t size);
void		ft_putstr(char const *s);
int			ft_showmap(char **map, int mapsize);
int			res_small_square(int **alltetrims, int nbrpcs, int mapsize);
int			resolvesquare(int ***all_tetriminos, int nombrepieces,
						int numeropiece, t_map *map);
int			filter_file(char *b, int i);
int			chkusg(int argc, char **argv, int nbrpcs);
int			get_square(int nbrpcs);
int			**add_tetrims(char **content, int nbrofpc);

#endif
