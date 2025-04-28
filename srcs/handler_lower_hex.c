/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler_lower_hex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriga <jriga@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 16:03:10 by jriga             #+#    #+#             */
/*   Updated: 2025/04/28 16:04:43 by jriga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <libft.h>

void handler_lower_hex(va_list *ap)
{
	unsigned int nb = va_arg(*ap, unsigned int);
	ft_putnbr_hex(nb, 'x');
}
