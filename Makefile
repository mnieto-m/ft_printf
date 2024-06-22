SRC	= ft_printf.c\
	ft_pointer_pf.c\
	ft_putchar_pf.c\
	ft_putnbr_pf.c\
	ft_putstr_pf.c\
	ft_putunbr_base.c

OBJ	= $(SRC:.c=.o)
CC = gcc
RM = rm 
RMFLAGS = -f
CFLAGS = -Wall -Werror -Wextra
AR = ar
R = r

NAME = libftprintf.a

all: ${NAME}

${NAME}: ${OBJ}
	$(AR) $(R) ${NAME} ${OBJ}

clean:
	$(RM) $(RMFLAGS) ${OBJ}

fclean: clean 
	$(RM) $(RMFLAGS) $(NAME)

re: fclean all

.PHONY: all clean fclean re