NAME = minitalk

CL = client
SV = server

PATH_SRCS = ./sources/
PATH_OBJS = ./objects/
PATH_INCL = ./includes/
PATH_LIBFT = ./libraries/42_libft/

SRC_SV = $(addprefix $(PATH_SRCS), server.c)
SRC_CL = $(addprefix $(PATH_SRCS), client.c)

OBJ_SV = $(patsubst $(PATH_SRCS)%.c, $(PATH_OBJS)%.o, $(SRC_SV))
OBJ_CL = $(patsubst $(PATH_SRCS)%.c, $(PATH_OBJS)%.o, $(SRC_CL))

LIBFT = $(PATH_LIBFT)libft.a

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SV) $(CL) 

$(SV): $(OBJ_SV) $(LIBFT)
	@cc $(CFLAGS) -I $(PATH_INCL) -o $(SV) $(OBJ_SV) $(LIBFT)

$(OBJ_SV): $(SRC_SV)
	@mkdir -p $(PATH_OBJS)
	@cc $(CFLAGS) -I $(PATH_INCL) -c $< -o $@

$(CL): $(OBJ_CL) $(LIBFT)
	@cc $(CFLAGS) -I $(PATH_INCL) -o $(CL) $(OBJ_CL) $(LIBFT)

$(OBJ_CL): $(SRC_CL)
	@mkdir -p $(PATH_OBJS)
	@cc $(CFLAGS) -I $(PATH_INCL) -c $< -o $@

$(LIBFT):
	@make -C $(PATH_LIBFT)

clean:
	@make clean -C $(PATH_LIBFT)
	rm -rf $(PATH_OBJS)

fclean: clean
	@make fclean -C $(PATH_LIBFT)
	rm $(SV) $(CL)

re: fclean all

norm: 
	@norminette ./sources ./includes

PHONY: all clean fclean re