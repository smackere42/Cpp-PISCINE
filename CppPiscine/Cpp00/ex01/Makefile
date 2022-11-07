NAME = phonebook

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

SOURCES = main.cpp \
			srcs/contact.cpp \
			srcs/phonebook.cpp \

DIR_OBJ = obj

DIR_SRC = ./

INCLIDE = includes/Contact.hpp \
			includes/Phonebook.hpp \

OBJS = $(SOURCES:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS) Makefile $(INCLIDE)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(DIR_OBJ)/%.o: $(DIR_SRC)/%.cpp
	@mkdir -p $(DIR_OBJ)
	$(CC) $(FLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)
	@rm -rf $(DIR_OBJ)

fclean:	clean
	@rm -f $(NAME)

re: fclean all