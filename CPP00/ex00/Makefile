# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/07 15:52:25 by mde-figu          #+#    #+#              #
#    Updated: 2022/02/17 21:27:24 by mde-figu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror -Wpedantic -std=c++98
CC = g++
FILE = megaphone.cpp
NAME = megaphone

all: $(NAME)

clean:
	rm -f $(NAME)

fclean:
	rm -f $(NAME)
	rm -f *.o


$(NAME):
	$(CC) $(FLAGS) $(FILE) -o $@

re: fclean all

.PHONY: all clean fclean re