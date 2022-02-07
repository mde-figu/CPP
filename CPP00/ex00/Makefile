# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/07 15:52:25 by mde-figu          #+#    #+#              #
#    Updated: 2022/02/07 15:53:23 by mde-figu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
CC = g++
FILE = megaphone.cpp
NAME = megaphone

all: $(NAME)

fclean:
	rm -f $(NAME)
	rm -f *.o


$(NAME):
	$(CC) $(FLAGS) $(FILE) -o $@