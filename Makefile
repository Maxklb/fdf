# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 02:35:02 by lraffin           #+#    #+#              #
#    Updated: 2024/06/16 19:34:23 by makoch-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### COMPILATION ###
CC			= clang
CFLAGS		= #-Wall -Wextra -Werror
OS			= $(shell uname -s)

### EXECUTABLE ###
NAME		= fdf

### INCLUDES ###
INCLUDE		= include
SRC_PATH	= src
OBJ_PATH	= obj
LIBFT_PATH	= libft
LIBFT		= -L libft -lft

ifeq ($(OS), Darwin)
	MLX			= -L minilibx-mac-osx -lmlx -framework OpenGL -framework AppKit
	MLX_PATH	= minilibx-mac-osx
else
	MLX			= -L minilibx-linux -lmlx -lXext -lX11 -lm
	MLX_PATH	= minilibx-linux
endif


### SOURCE FILES ###
SOURCES = main.c

### OBJECTS ###
SRC = $(addprefix $(SRC_PATH)/,$(SOURCES))
OBJ = $(addprefix $(OBJ_PATH)/,$(SOURCES:.c=.o))

### COLORS ###
NOC		= \033[0m
RED		= \033[1;31m
GREEN	= \033[1;32m
YELLOW	= \033[1;33m
BLUE	= \033[1;34m
WHITE	= \033[1;37m

### RULES ###

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(YELLOW)libft..$(NOC)"
	@make -sC $(LIBFT_PATH)
	@make -sC $(MLX_PATH)
	@ $(CC) $(CFLAGS) -o $@ $(OBJ) $(LIBFT) $(MLX)
	@echo "$(GREEN)$@$(NOC)"

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c $(INCLUDE)/$(NAME).h
	@mkdir -p obj
	@$(CC) $(CFLAGS) -I$(INCLUDE) -c -o $@ $<
	@echo "$(BLUE)clang $(WHITE)$(notdir $@)$(NOC)"

clean:
	@echo "$(RED)clean$(NOC)"
	@make clean -sC $(LIBFT_PATH)
	@rm -rf $(OBJ_PATH)

fclean: clean
	@echo "$(RED)fclean$(NOC)"
	@make fclean -sC $(LIBFT_PATH)
	@rm -f $(NAME)

re: fclean all

norm:
	-@norminette $(SRC_PATH)
	-@norminette $(INCLUDE)

.PHONY: all clean fclean re norm