NAME = libft.a
CC = cc
SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_memset.c ft_strlen.c ft_toupper
OBJ = $(SRC:.c=.o)
CFLAGS = -w

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

# %.o: %.c
# 	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re