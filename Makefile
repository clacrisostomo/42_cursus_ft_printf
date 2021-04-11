# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/09 18:49:16 by csantos-          #+#    #+#              #
#    Updated: 2021/04/11 16:49:52 by csantos-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = *.c
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
INCLUDES = ft_printf.h

all: $(NAME)

$(NAME): $(INCLUDES)
	@gcc $(CFLAGS) -c $(SRC)
	@gcc $(OBJ)
#	@./a.out
	ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ) a.out

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY:		all clean fclean re