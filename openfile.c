/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   openfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 18:51:55 by mmihail           #+#    #+#             */
/*   Updated: 2016/11/08 18:51:57 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		*openfile(char *filename)
{
	int		fd;
	int		ret;
	char	*buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (NULL);
	buf = ft_memalloc(BUF_SIZE + 1);
	ret = read(fd, buf, BUF_SIZE);
	if (buf[ret] != '\0')
		return (NULL);
	buf[ret] = '\0';
	return (buf);
	if (close(fd))
		return (NULL);
}
