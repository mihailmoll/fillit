/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkfile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandriut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 19:15:46 by tandriut          #+#    #+#             */
/*   Updated: 2016/11/09 14:59:57 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	checkdie(char *set)
{
	int i;
	int checkdiez;

	i = 0;
	checkdiez = 0;
	while (set[i] != '\0')
	{
		if (set[i] == '#')
		{
			if ((set[i - 1] == '#') && (i > 0 && i < 19))
				checkdiez++;
			if ((set[i + 1] == '#') && (i < 19))
				checkdiez++;
			if ((set[i - 5] == '#') && (i > 4))
				checkdiez++;
			if ((set[i + 5] == '#') && (i < 15))
				checkdiez++;
		}
		i++;
	}
	if (checkdiez != 6 && checkdiez != 8)
		return (1);
	return (0);
}

static int	ft_setnum(char *content)
{
	int	setnum;
	int	i;

	i = 0;
	setnum = 0;
	while (content[i] != '\0')
	{
		if ((content[i] == '\n') && (content[i + 1] == '\n' ||
					content[i + 1] == '\0'))
			setnum++;
		i++;
	}
	return (setnum);
}

static char	**makebl(int **blnum)
{
	char	**allblk;
	int		i;

	i = 0;
	allblk = (char **)malloc(**blnum * sizeof(char*));
	if (allblk == NULL)
		return (NULL);
	while (i < **blnum)
	{
		allblk[i] = malloc(20);
		if (allblk[i] == NULL)
			return (NULL);
		i++;
	}
	return (allblk);
}

static char	**fillblks(char **allblk, char *content)
{
	int	i;
	int	a;
	int	n;

	i = 0;
	a = 0;
	n = 0;
	while (content[i] != '\0')
	{
		allblk[n][a] = content[i];
		if (a < 20)
			a++;
		else
		{
			if ((content[i] == '\n' && content[i - 1] == '\n'))
				n++;
			a = 0;
		}
		i++;
	}
	return (allblk);
}

char		**checkfile(char *content, int *blknum)
{
	int		n;
	int		i;
	char	**allblk;

	n = 0;
	i = 0;
	if (filter_file(content, i) != 0)
		return (0);
	*blknum = ft_setnum(content);
	allblk = makebl(&blknum);
	allblk = fillblks(allblk, content);
	while (n < *blknum)
	{
		if (checkdie(allblk[n]) != 0)
			return (NULL);
		n++;
	}
	return (allblk);
}
