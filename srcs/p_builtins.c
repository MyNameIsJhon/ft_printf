#include "p_builtins.h"
#include "libft.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	handler_string(va_list *ap)
{
	ft_putstr(va_arg(*ap, char*));
}

void	handler_base10(va_list *ap)
{
	ft_putnbr(va_arg(*ap, int));
}

void	handler_unsigned(va_list *ap)
{
	ft_putnbr_unsigned((unsigned int)va_arg(*ap, unsigned int));
}

void	handler_percent(va_list *ap)
{
	(void)ap;
	ft_putchar('%');
}

void handler_chr(va_list *ap)
{
	ft_putchar(va_arg(*ap, int));
}

void handler_lower_hex(va_list *ap)
{
	ft_putnbr_hex(va_arg(*ap, unsigned int), 'x');
}

void handler_upper_hex(va_list *ap)
{
	ft_putnbr_hex(va_arg(*ap, unsigned int), 'X');
}

void	printf_init(void (*handler_func[])(va_list *ap), char *p_ask)
{
	handler_func[0] = handler_chr;
	handler_func[1] = handler_string;
	handler_func[2] = handler_unsigned;
	handler_func[3] = handler_base10;
	handler_func[4] = handler_base10;
	handler_func[5] = handler_unsigned;
	handler_func[6] = handler_lower_hex;
	handler_func[7] = handler_upper_hex;
	handler_func[8] = NULL;

	ft_strlcpy(p_ask, PRINT_CHRS, N_SPECS);
}
