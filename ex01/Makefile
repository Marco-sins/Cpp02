CPP := c++
CPPFLAGS := -Wall -Werror -Wextra -std=c++98
RM := rm -fr

SRC :=	main.cpp \
		Fixed.cpp

HEADERS := Fixed.hpp

OBJ = $(SRC:.cpp=.o)

NAME := fixed

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re