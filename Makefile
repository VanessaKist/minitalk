NAME = minitalk

PATH_SRCS = ./sources/
PATH_OBJS = ./objects/
PATH_INCL = ./includes/
PATH_LIBFT = ./libraries/42_libft/

SRCS = $(addprefix $(PATH_SRCS), server.c\
		client.c)

OBJS = $(patsubst $(PATH_SRCS)%.c, $(PATH_OBJS)%.o, $(SRCS))

LIBFT = $(PATH_LIBFT)libft.a

CFLAGS = -Wall -Wextra -Werror

REMOVE = rm -rf

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	@cc $(CFLAGS) -I $(PATH_INCL) -o $(NAME) $(OBJS)

$(PATH_OBJS)%.o: $(PATH_SRCS)%.c
	@mkdir -p $(PATH_OBJS)
	@$(CC) $(CFLAGS) -I $(PATH_INCL) -c $< -o $@

$(LIBFT):
	@make -C $(PATH_LIBFT)

clean:
	@$(REMOVE) $(PATH_OBJS)
	@make clean -C $(PATH_LIBFT)

fclean: clean
	@$(REMOVE) $(NAME)
	@make fclean -C $(PATH_LIBFT)

re: fclean all

PHONY: all clean fclean re