# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/22 16:17:49 by irolaizo          #+#    #+#              #
#    Updated: 2024/02/22 16:28:40 by irolaizo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long.a

SRC = so_long.c

CC = cc 
CFLAGS = -Wall -Wexta -Werror

AR = ar 
AFLAGS = rcs

OBJS = $(SRC:.c=.o)

RM = rm -f

all: $(NAME)
$(NAME): $(OBJS)
	@ $(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean:
	$ (RM) $(OBJS)

fclean: clean
	$ (RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re