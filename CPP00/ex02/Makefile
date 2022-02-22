# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 15:43:28 by mde-figu          #+#    #+#              #
#    Updated: 2022/02/21 15:45:07 by mde-figu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror -Wpedantic -std=c++98
CC = g++
FILE = tests.cpp\
		Account.cpp
NAME = main

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