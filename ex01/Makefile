# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ricardo <ricardo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/05 16:49:00 by ricardo           #+#    #+#              #
#    Updated: 2025/11/05 16:50:46 by ricardo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = phonebook
CXX         = c++
CXX_FLAGS   = -Wall -Wextra -Werror -std=c++98
RM          = rm -f

SRC         = main.cpp Contact.cpp PhoneBook.cpp
OBJ         = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXX_FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXX_FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
