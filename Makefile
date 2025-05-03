SRC         = ft_printf.c \
              p_builtins.c \
              handler_base10.c \
              handler_chr.c \
              handler_percent.c \
              handler_pointer.c \
              handler_string.c \
              handler_unsigned.c \
              handler_upper_hex.c \
              handler_lower_hex.c 

PRE         = ./srcs/
PRELIB      = ./libft/

SRCS        = ${addprefix ${PRE}, ${SRC}}
OBJS        = ${SRCS:.c=.o}

HEAD        = -I./includes/ -I./libft/
NAME        = libftprintf.a

GCC         = cc
AR          = ar rcs
CFLAGS      = -Wall -Wextra -Werror -g3
RM          = rm -f

all: ${NAME}

${NAME}: ${OBJS}
	make -C ${PRELIB} bonus
	cp ${PRELIB}*.o .
	${AR} ${NAME} ${OBJS} *.o
	${RM} *.o

%.o: %.c
	${GCC} ${CFLAGS} ${HEAD} -c $< -o $@

clean:
	${RM} ${OBJS}
	make -C ${PRELIB} clean

fclean: clean
	${RM} ${NAME}
	make -C ${PRELIB} fclean

re: fclean all

.PHONY: all clean fclean re
