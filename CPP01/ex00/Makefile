# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 16:02:18 by mde-figu          #+#    #+#              #
#    Updated: 2022/02/22 16:03:20 by mde-figu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror -Wpedantic -std=c++98
CC = g++
FILE = main.cpp\
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