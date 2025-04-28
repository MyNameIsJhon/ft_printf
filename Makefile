SRC         = ft_printf.c \
              p_builtins.c 
LIB         = libft.a

PRE         = ./srcs/
PRELIB      = ./libft/

SRCS        = ${addprefix ${PRE}, ${SRC}}
LIBS        = ${addprefix ${PRELIB}, ${LIB}}
OBJS        = ${SRCS:.c=.o}

HEAD        = -I./includes/ -I./libft/
NAME        = printf 

GCC         = cc
CFLAGS      = -Wall -Wextra -Werror -g #-fsanitize=undefined 
RM          = rm -f

all: ${NAME}

.c.o:
	${GCC} ${CFLAGS} -c ${HEAD} $< -o ${<:.c=.o}

${NAME}: ${LIBS} ${OBJS}
	${GCC} ${CFLAGS} ${OBJS} -I ${HEAD} -I ./libft -L ./libft -lft -o ${NAME}

${LIBS}:
	make -C ${PRELIB} bonus

clean:
	${RM} ${OBJS}
	make -C ${PRELIB} clean

fclean: clean
	${RM} ${NAME}
	make -C ${PRELIB} fclean

re: fclean all

.PHONY: all clean fclean re ${NAME}
