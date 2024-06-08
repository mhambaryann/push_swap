CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_split.c main.c main_functions.c 
OBJS = $(SRCS:.c=.o)
NAME = push_swap

HEAD = .

all: $(NAME)

$(NAME): $(OBJS)
		   $(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I$(HEAD) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
