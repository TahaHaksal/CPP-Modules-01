CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = $(shell find . -name "*.cpp")

OBJ = $(SRC:.cpp=.o)

NAME = sed_is_for_losers

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
