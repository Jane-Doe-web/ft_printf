NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c print_num.c print_string.c

OBJS = $(SRCS:.c=.o)

HEADERS = ft_printf.h
# Default rule to compile the program
all: $(NAME)
# Rule to link the object files into the executable
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
# Rule to compile the source files into object files
.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
