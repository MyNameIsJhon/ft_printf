/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler_upper_hex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriga <jriga@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 16:05:06 by jriga             #+#    #+#             */
/*   Updated: 2025/04/28 16:36:46 by jriga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft.h"

void	handler_upper_hex(va_list *ap)
{
	unsigned int	nb;

	nb = va_arg(*ap, unsigned int);
	ft_putnbr_hex(nb, 'X');
}
