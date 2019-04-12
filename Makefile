# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkchikec <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/06 04:09:48 by hkchikec          #+#    #+#              #
#    Updated: 2019/04/12 15:30:39 by hkchikec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

LDFLAGS = -L

LDLIBS = -lft

SRC = 	ft_isalpha.c ft_strcat.c ft_strncpy.c ft_toupper.c ft_isdigit.c\
		ft_isascii.c ft_memcpy.c  ft_strcmp.c  ft_strlen.c ft_isalnum.c\
		ft_atoi.c    ft_isprint.c ft_strcpy.c  ft_strstr.c ft_strnstr.c\
		ft_memchr.c  ft_memset.c  ft_strdup.c  ft_strncmp.c ft_tolower.c\
		ft_strchr.c ft_strrchr.c ft_memccpy.c ft_memalloc.c ft_memdel.c\
		ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c\
		ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c\
		ft_strjoin.c ft_strtrim.c ft_putchar.c ft_putstr.c ft_putendl.c\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr.c
	
		

OBJ = $(SRC:.c=.o)

$(NAME): libft.h
	$(CC) $(CFLAGS) -c $(SRC) 
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean
