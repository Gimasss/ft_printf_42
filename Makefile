# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmastroc <gmastroc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/22 15:18:10 by gmastroc          #+#    #+#              #
#    Updated: 2024/01/10 18:06:31 by gmastroc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libftprintf.a
CC			= gcc
INC			= -I. -I./libft
LIBFTPATH 	= ./libft
CFLAGS		= -Wall -Wextra -Werror -g
LIBCMP		= ar rcs
RM			= rm -f
SRC 		= ft_printf.c \
			ft_putnbr_base.c\
			ft_putptr.c

SRC_OBJ = $(SRC:.c=.o)

%.o: %.c
	$(CC) $(INC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(SRC_OBJ) 
	$(MAKE) -C $(LIBFTPATH)
	mv $(LIBFTPATH)/libft.a $(NAME)
	$(LIBCMP) $(NAME) $(SRC_OBJ)

clean:
	$(MAKE) clean -C $(LIBFTPATH)
	$(RM) $(SRC_OBJ)

fclean: clean
	$(MAKE) fclean -C $(LIBFTPATH)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
.SILENT: 