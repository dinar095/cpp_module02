NAME = fpointclass
HEADER = Fixed.hpp
FUNCTIONS = main Fixed

CC = clang++
CFLAGS = -Wall -Wextra -Werror

OBJ = $(patsubst %,%.o,$(FUNCTIONS))
SRC = $(patsubst %,%.cpp,$(FUNCTIONS))

.PHONY: all clean fclean re

all: $(NAME)

obj_f: $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(SRC) -std=c++98 -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

.PHONY:	all clean fclean re