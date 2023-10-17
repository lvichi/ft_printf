# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skinners77 <lvichi@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/05 21:17:31 by lvichi            #+#    #+#              #
#    Updated: 2023/10/17 23:44:13 by skinners77       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -fr
FILES = $(filter-out $(wildcard main.c), $(wildcard *.c))
OBJS = *.o
MAIN = main.c

all: fclean $(NAME) clean

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	
$(OBJS): $(FILES)
	@$(CC) $(CFLAGS) -c $(FILES)

run: all
	@$(CC) $(CFLAGS) $(MAIN) $(NAME)
	@fclean
	@./a.out

clean:
	@$(RM) $(OBJS)

fclean:
	@$(RM) $(OBJS) $(NAME)

re: fclean all