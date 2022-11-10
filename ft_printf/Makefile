NAME = libftprintf.a
HEADER = ft_printf.h
SRCS =	ft_printf.c\
		ft_putchar.c\
		ft_putnbr.c\
		ft_putstr.c\
		hex.c\
		ft_strlen.c

OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
AR = @ar -rc

all: $(NAME)

$(NAME):$(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o : %.c $(HEADER)
	cc $(CFLAGS) -c $< -I $(HEADER)
clean:
	$(RM) $(OBJS)

fclean:clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all re fclean clean
