NAME := libft.a

CC := cc

INC_FILE = libft.h

SRC := $(wildcard *.c)

CFLAGS := -Wall -Werror -Wextra

OBJ := $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)

%.o: %.c $(INC_FILE)
		$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re