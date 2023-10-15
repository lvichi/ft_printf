# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/05 21:17:31 by lvichi            #+#    #+#              #
#    Updated: 2023/10/15 18:48:50 by lvichi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -fr
FILES = $(filter-out $(wildcard main.c), $(wildcard *.c))
OBJS = *.o
LIBFT = libft
LIBFT_PATH = libft/libft.a
MAIN = main.c

all: fclean $(NAME) clean

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	
$(OBJS): $(FILES)
	@make -s -C $(LIBFT)
	@$(CC) $(CFLAGS) -c $(FILES)

run: all
	@$(CC) $(CFLAGS) $(MAIN) $(NAME) $(LIBFT_PATH)
	@./a.out

clean:
	@$(RM) $(OBJS) 

fclean:
	@$(RM) $(OBJS) $(NAME)
	@make -s -C $(LIBFT) fclean

re: fclean all