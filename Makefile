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

LIB         = libft.a

PRE         = ./srcs/
PRELIB      = ./libft/

SRCS        = ${addprefix ${PRE}, ${SRC}}
LIBS        = ${addprefix ${PRELIB}, ${LIB}}
OBJS        = ${SRCS:.c=.o}

HEAD        = -I./includes/ -I./libft/
NAME        = printf.a

GCC         = cc
AR          = ar rcs
CFLAGS      = -Wall -Wextra -Werror -g
RM          = rm -f

all: ${NAME}

.c.o:
	${GCC} ${CFLAGS} -c ${HEAD} $< -o ${<:.c=.o}

${NAME}: ${LIBS} ${OBJS}
	${AR} ${NAME} ${OBJS}

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
