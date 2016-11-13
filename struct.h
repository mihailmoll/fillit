/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 18:57:14 by mmihail           #+#    #+#             */
/*   Updated: 2016/11/08 18:57:16 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct		s_map
{
	char			**map;
	int				size;
}					t_map;

typedef struct		s_pos
{
	int				x;
	int				y;
}					t_pos;

typedef struct		s_compt
{
	int				ligne;
	int				dieze;
	int				point;
	int				car;
}					t_compt;

#endif
