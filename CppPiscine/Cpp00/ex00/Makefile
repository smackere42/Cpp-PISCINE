NAME = megaphone

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

DIR_SRC = ./

DIR_OBJ = obj

SOURCES = megaphone.cpp

SRCS = $(addprefix $(DIR_SRC)/,$(SOURCES))

OBJS = $(addprefix $(DIR_OBJ)/,$(SOURCES:.cpp=.o))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS) Makefile
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

$(DIR_OBJ)/%.o: $(DIR_SRC)/%.cpp
	@mkdir -p $(DIR_OBJ)
	$(CC) $(FLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)
	@rm -rf $(DIR_OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all