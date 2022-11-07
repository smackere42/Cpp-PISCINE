NAME = MMA

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SOURCES = main.cpp \
			$(wildcard ./src/*.cpp)

INCLUDES = $(wildcard ./includes/%.cpp)

OBJS = $(SOURCES:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):$(OBJS) Makefile $(INCLUDES)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

.cpp.o:
		@$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all