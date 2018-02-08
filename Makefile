NAME	= libft.a
FLAG	= -Wall -Werror -Wextra -std=c99 -I. -c
SRC		= src/*.c
			
OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) obj/*.o
	
$(OBJ): $(SRC)
	@mkdir -p obj
	@cd obj/; gcc $(FLAG) ../$(SRC); cd ..
	
clean:
	rm -f $(OBJ)
	rm -f $(SRC)
	
fclean: clean
	rm -f $(NAME)
	
re: fclean all