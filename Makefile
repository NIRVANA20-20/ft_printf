NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCS = ft_printf.c  ft_putadrr.c  ft_putchar.c  ft_puthexa.c  ft_putnbr.c  ft_putstr.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c  $< -o $@
	
clean:
	rm -f $(OBJS) $(BOBJ)
	
fclean: clean
	rm -rf $(NAME)	

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

re: fclean all

.PHONY: clean
