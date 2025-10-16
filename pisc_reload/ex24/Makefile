NAME = libft.a
FLAGS = -Wall -Werror -Wextra
SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = $(SRC:.c=.o)
INCLUDE = includes

.c.o:
	cc $(FLAGS) -c $< -o $(<:.c=.o) -I $(INCLUDE)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all