# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okate <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/09 15:14:09 by okate             #+#    #+#              #
#    Updated: 2020/03/10 14:28:17 by okate            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
HEADER = ./includes/ft.h
FILES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all ::
	gcc -c $(FLAG) $(FILES) -I $(HEADER)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean ::
		rm -f $(OBJ)

fclean :: clean
	rm -f $(NAME)

re :: fclean all
