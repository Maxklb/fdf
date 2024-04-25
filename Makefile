# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/23 15:22:16 by makoch-l          #+#    #+#              #
#    Updated: 2024/04/25 13:28:10 by makoch-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs

SRC_PATH = src/
LIBFT_PATH = libft/
LIBFT_LIB = libft.a
INCLUDE_PATH = include/
MLX_PATH = minilibx-linux/

SRC_FILES = src/main.c \
			ft_fdf.c   \

SRC_OBJS= $(SRC_FILES:.c=.o)

LIBFT_OBJS = $(LIBFT_PATH)*.OBJS
LIBFTMAKE = $(MAKE) -C $(LIBFT_PATH)

all : $(NAME)

clean :
	$(RM) $(SRC_OBJS)

fclean : clean
			$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re pmake