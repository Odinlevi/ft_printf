NAME	= libftprintf.a
FLAG	= -Werror -Wall -Wextra -std=c99 -I. -c

PATH_SRC = ./src/
SRC = $(PATH_SRC)*.c
OBJ = *.o
OBJ_PATH = ./obj/$(OBJ)

all: $(NAME)

$(NAME):
	@mkdir -p obj
	@cd obj/; gcc $(FLAG) ../$(SRC); cd ..
	@ar rc $(NAME) $(OBJ_PATH)

clean:
	@/bin/rm -f ./obj/$(OBJ)
fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
