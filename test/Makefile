# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/20 10:05:39 by jkaplin           #+#    #+#              #
#    Updated: 2019/03/02 12:37:22 by jkaplin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra -I. -c

SRC =	test_atoi.c			\
		test_bzero.c		\
		test_isalnum.c		\
		test_isalpha.c		\
		test_isascii.c		\
		test_isdigit.c		\
		test_isprint.c		\
		test_itoa.c			\
		test_lstadd.c		\
		test_lstdel.c		\
		test_lstdelone.c	\
		test_lstiter.c		\
		test_lstmap.c		\
		test_lstnew.c		\
		test_memalloc.c		\
		test_memccpy.c		\
		test_memchr.c		\
		test_memcmp.c		\
		test_memcpy.c		\
		test_memdel.c		\
		test_memmove.c		\
		test_memset.c		\
		test_putchar.c		\
		test_putchar_fd.c	\
		test_putendl.c		\
		test_putendl_fd.c	\
		test_putnbr.c		\
		test_putnbr_fd.c	\
		test_putstr.c		\
		test_putstr_fd.c	\
		test_strcat.c		\
		test_strchr.c		\
		test_strclr.c		\
		test_strcmp.c		\
		test_strcpy.c		\
		test_strdel.c		\
		test_strdup.c		\
		test_strequ.c		\
		test_striter.c		\
		test_striteri.c		\
		test_strjoin.c		\
		test_strlcat.c		\
		test_strlen.c		\
		test_strmap.c		\
		test_strmapi.c		\
		test_strncat.c		\
		test_strncmp.c		\
		test_strncpy.c		\
		test_strnequ.c		\
		test_strnew.c		\
		test_strnstr.c		\
		test_strrchr.c		\
		test_strsplit.c		\
		test_strstr.c		\
		test_strsub.c		\
		test_strtrim.c		\
		test_tolower.c		\
		test_toupper.c

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

# This won't run if the .o files don't exist or are not modified
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# This won't run if the source files don't exist or are not modified
$(OBJ): $(SRC)
	gcc $(CFLAGS) $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

# I use .PHONY to make sure that gnu make will still run even if files called
# clean / fclean / all and re already exist in the directory
.PHONY: clean fclean all re
