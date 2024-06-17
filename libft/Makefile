# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 01:46:15 by makoch-l          #+#    #+#              #
#    Updated: 2024/06/17 17:35:46 by makoch-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =  memory/ft_bzero.c \
		ctype/ft_isalnum.c \
		ctype/ft_isalpha.c \
		ctype/ft_isascii.c \
		ctype/ft_isdigit.c \
		ctype/ft_isprint.c \
		memory/ft_memcpy.c \
		memory/ft_memmove.c \
		memory/ft_memset.c \
		memory/ft_memchr.c \
		memory/ft_memcmp.c \
		memory/ft_calloc.c \
		print/ft_putchar_fd.c \
		print/ft_putstr_fd.c \
		print/ft_putendl_fd.c \
		print/ft_putnbr_fd.c \
		string/ft_split.c \
		string/ft_strchr.c \
		string/ft_strrchr.c \
		string/ft_strncmp.c\
		string/ft_strnstr.c \
		string/ft_strlcat.c \
		string/ft_strlcpy.c \
		string/ft_strlen.c \
		string/ft_strdup.c \
		string/ft_strjoin.c \
		string/ft_strtrim.c \
		string/ft_strmapi.c \
		string/ft_striteri.c \
		string/ft_substr.c \
		conversion/ft_atoi.c \
		conversion/ft_itoa.c \
		conversion/ft_tolower.c \
		conversion/ft_toupper.c \
		printf/ft_printf.c \
		printf/print_char.c \
		printf/print_string.c \
		printf/print_pointer.c \
		printf/print_int.c \
		printf/print_unsigned.c \
		printf/print_hex.c \
		printf/print_percent.c \
		gnl/get_next_line.c 

OBJS = $(SRCS:.c=.o) 

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra 

all : $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)

.PHONY : all clean fclean re