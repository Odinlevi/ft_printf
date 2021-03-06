# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/17 13:26:38 by mnikifor          #+#    #+#              #
#    Updated: 2018/01/17 13:26:41 by mnikifor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = *.c
OBJ = *.o
LIB = libft
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@ar rcs $(NAME) $(LIB)/$(OBJ)

$(OBJ):
	@make re -C $(LIB) 
	@$(CC) $(CFLAGD) -c -I header/ source/$(SRC)

clean:
	@rm -f $(OBJ)
	@rm -f libft/$(OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -f libft/libft.a

re: fclean all
