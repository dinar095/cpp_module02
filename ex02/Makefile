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
	@echo "\033[32;1m\n Binary \"$(NAME)\" created\n\033[0m"

clean:
	rm -rf $(OBJ)
	@echo "\033[36;1m\n Cleaning succeed\n\033[0m"

fclean: clean
	rm -rf $(NAME)
	@echo "\033[33;1m\n All created files deleted\n\033[0m"

re:	fclean all
	@echo "\033[35;1m\n Remake done\n\033[0m"

.PHONY:	all clean fclean re