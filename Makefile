# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/14 08:09:19 by ikhadem           #+#    #+#              #
#    Updated: 2019/11/14 20:49:53 by ikhadem          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a

INC := includes/

SRC :=	sources/core/ft_printf.c \
		sources/core/parser.c \
		sources/utils/checkers.c \
		sources/utils/handler.c \
		sources/utils/t_format.c \
		sources/utils/display.c \
		sources/strings/chars.c \
		sources/strings/strings.c \
		sources/numbers/ft_pitoa.c \
		sources/numbers/integer.c \
		sources/numbers/hexadecimals.c \
		sources/numbers/pointer.c \
		sources/numbers/unsigned.c

OBJ := $(SRC:.c=.o)

CC := gcc
CFLAGS := -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(OBJ) $(INC)
			@make -C libft/
			@mv libft/libft.a $(NAME)
			@ar rcs $(NAME) $(OBJ)
			@echo "done"

%.o : %.c
			@$(CC) -I $(INC) -c -o $@ $<

clean :
			@make clean -C libft/
			@rm -rf $(OBJ)

fclean : clean
			@make fclean -C libft/
			@rm -rf $(NAME)

re : fclean all