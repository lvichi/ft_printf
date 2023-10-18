# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/05 21:17:31 by lvichi            #+#    #+#              #
#    Updated: 2023/10/18 16:13:33 by lvichi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -fr
FILES = *.c
OBJS = *.o
MAIN = main.c

all: fclean $(NAME) clean

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	
$(OBJS): $(FILES)
	@$(CC) $(CFLAGS) -c $(FILES)

clean:
	@$(RM) $(OBJS)

fclean:
	@$(RM) $(OBJS) $(NAME)

re: fclean all