CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = $(shell find . -name "*.cpp")

OBJ = $(SRC:.cpp=.o)

NAME = hi_this_is_brain

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all