NAME = push_swap

CC = cc

CFLAGS = -Werror -Wall -Wextra

RM = rm -rf

SRCS = push_swap.c
LIBS = -Lft_printf -lftprintf -Llibft -lft
OBJ = $(SRCS:.c=.o)

$(NAME): $(OBJ)
	make all -C ft_printf
	make all -C libft
	$(CC) $(CFLAGS) -g -o $(NAME) $(OBJ) $(LIBS)

all : $(NAME)

fclean : clean
	$(RM) $(NAME)
	make fclean -C ft_printf
	make fclean -C libft

clean :
	$(RM) $(OBJ)

re : fclean all
