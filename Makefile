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

NAME = so_long

SRC = so_long.c get_next_line/get_next_line.c get_next_line/get_next_line_utils.c

CC = cc 
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I./get_next_line

OBJS = $(SRC:.c=.o)

RM = rm -f

all: $(NAME)
$(NAME): $(OBJS)
	@ $(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) -c $(CFLAGS) $(INCLUDE) $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
