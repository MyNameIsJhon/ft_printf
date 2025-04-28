#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define PRINT_CHRS "cspdiuxX%"
# define N_SPECS    (sizeof(PRINT_CHRS))

#include <stdarg.h>
#include "libft.h"

void	handler_string(va_list *ap);
void	handler_base10(va_list *ap);
void	handler_unsigned(va_list *ap);
void	printf_init(void (*handler_func[])(va_list *ap), char *p_ask);
void	ft_putchar(char c);
void	handler_upper_hex(va_list *ap);
void	handler_unsigned(va_list *ap);
void	handler_string(va_list *ap);
void	handler_pointer(va_list *ap);
void	handler_percent(va_list *ap);
void	handler_lower_hex(va_list *ap);
void	handler_chr(va_list *ap);
void	handler_base10(va_list *ap);
void	ft_printf(char *str, ...);

#endif
