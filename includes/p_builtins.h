/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_builtins.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriga <jriga@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:00:35 by jriga             #+#    #+#             */
/*   Updated: 2025/04/29 08:46:09 by jriga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_BUILTINS_H
# define P_BUILTINS_H
# define PRINT_CHRS "cspdiuxX%"
# define N_SPECS 9

# include <stdarg.h>
# include "libft.h"

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
