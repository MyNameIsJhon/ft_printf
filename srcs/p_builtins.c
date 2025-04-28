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
	char *str = va_arg(*ap, char*);

	if (!str)
		ft_putstr("(null)");
	else
		ft_putstr(str);
}

void	handler_base10(va_list *ap)
{
	int nb = va_arg(*ap, int);
	ft_putnbr(nb);
}

void	handler_unsigned(va_list *ap)
{
	unsigned int nb = va_arg(*ap, unsigned int);
	ft_putnbr_unsigned(nb);
}

void	handler_percent(va_list *ap)
{
	(void)ap;
	ft_putchar('%');
}

void handler_chr(va_list *ap)
{
	char c = (char)va_arg(*ap, int);
	ft_putchar(c);
}

void handler_lower_hex(va_list *ap)
{
	unsigned int nb = va_arg(*ap, unsigned int);
	ft_putnbr_hex(nb, 'x');
}

void handler_upper_hex(va_list *ap)
{
	unsigned int nb = va_arg(*ap, unsigned int);
	ft_putnbr_hex(nb, 'X');
}

void handler_pointer(va_list *ap)
{
	void *ptr = va_arg(*ap, void*);

	if (!ptr)
		ft_putstr("0x0");
	else
	{
		ft_putstr("0x");
		ft_putnbr_hex_ulong((unsigned long)ptr, 'x');
	}
}

void	printf_init(void (*handler_func[])(va_list *ap), char *p_ask)
{
	/* # define PRINT_CHRS "cspdiuxX%" */
	handler_func[0] = handler_chr;
	handler_func[1] = handler_string;
	handler_func[2] = handler_pointer;
	handler_func[3] = handler_base10;
	handler_func[4] = handler_base10;
	handler_func[5] = handler_unsigned;
	handler_func[6] = handler_lower_hex;
	handler_func[7] = handler_upper_hex;
	handler_func[8] = handler_percent;
	handler_func[9] = NULL;

	ft_strlcpy(p_ask, PRINT_CHRS, N_SPECS);
}
