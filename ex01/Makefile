# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/13 18:35:11 by yuboktae          #+#    #+#              #
#    Updated: 2023/12/13 18:36:13 by yuboktae         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Iter

SRC_DIR = src/
OBJ_DIR = obj/
INC_DIR = includes/

SRC_FILES	= main.cpp

SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ = $(patsubst $(SRC_DIR)%.cpp, $(OBJ_DIR)%.o, $(SRC))

RM = rm -f
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CPPFLAGS = -I/usr/local/include -I$(INC_DIR)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -o $@ $(OBJ)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re