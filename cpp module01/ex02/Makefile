# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dchissal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/02 09:07:30 by dchissal          #+#    #+#              #
#    Updated: 2024/09/02 09:07:31 by dchissal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= brain
SRC	= main.cpp
CC	= c++
FLAGS	= -Wall -Werror -Wextra -std=c++98 -pedantic
RM	= rm -f
OBJ	= $(SRC:.cpp=.o)

all:	${NAME}

${NAME}: ${OBJ}
	@${CC} ${FLAGS} ${OBJ} -o ${NAME}
	
%.o: %.c
	@${CC} ${FLAGS} -c $< -o $@

clean:
	@${RM} ${OBJ}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
