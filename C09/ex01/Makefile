SRCS = ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_strcmp.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c
GCC = gcc
OBJCS = ${SRCS:.c=.o}
CFLAGS = -Wall -Wextra -Werror
LIB_NAME = libft.a
INCS = ./includes/
IFLAG = -I${INCS}

all: ${LIB_NAME}

.c.o:
	${GCC} ${CFLAGS} ${IFLAG} -c $< -o $@

${LIB_NAME}: ${OBJCS}
	ar rc ${LIB_NAME} ${OBJCS}

clean:
	rm -f ${OBJCS}

fclean: clean
	rm -f ${LIB_NAME}

re: fclean all
