#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jiglesia <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/18 16:13:20 by jiglesia          #+#    #+#              #
#    Updated: 2019/07/18 18:57:25 by jiglesia         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		=	libft.a
INCLUDE		=	./includes/
SRC			=	./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

OBJS		=	$(SRC:.c=.o)

CFLAGS		=	-Wall -Wextra -Werror

CC			=	/usr/bin/gcc
RM			=	/bin/rm -f

%.o: %.c
				$(CC) $(CFLAGS) -I $(INCLUDE) -c $< -o $@

$(NAME)	: 		$(OBJS)
				ar rc $(NAME) $(OBJS)
				ranlib $(NAME)

clean	:
				$(RM) $(OBJS)

all		:		$(NAME)

fclean	:		clean
				$(RM) $(NAME)

re		:		fclean all