/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriga <jriga@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 16:06:11 by jriga             #+#    #+#             */
/*   Updated: 2025/04/28 16:06:46 by jriga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft.h"

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
