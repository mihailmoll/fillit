# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tandriut <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/08 18:48:09 by tandriut          #+#    #+#              #
#    Updated: 2016/11/13 17:37:56 by mmihail          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = ft_putchar.c ft_bzero.c checkfile.c chkusg.c\
	  filter.c ft_crmap.c ft_memalloc.c ft_putnbr.c \
	  ft_putstr.c ft_showmap.c get_square.c main.c \
	  openfile.c res_small_square.c res_square.c \
	  touch_tetrims.c

OBJ = $(SRC:.c=.o)
FLAG = -Wall -Werror -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
		@gcc $(FLAG) -o $(NAME) $(OBJ)

$(OBJ):
		@gcc $(FLAG) $*.c -o $@ -c

clean:
		@rm -rf $(OBJ)

fclean: clean
		@rm -rf fillit

re: fclean all
