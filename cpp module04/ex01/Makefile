# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dchissal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/08 03:13:27 by dchissal          #+#    #+#              #
#    Updated: 2024/09/08 03:13:29 by dchissal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= brain
SRC	= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
CC	= c++
FLAGS	= -Wall -Werror -Wextra -std=c++98
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
