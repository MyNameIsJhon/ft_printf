/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriga <jriga@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:50:24 by jriga             #+#    #+#             */
/*   Updated: 2025/04/28 15:59:19 by jriga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_builtins.h"

void	handler_string(va_list *ap)
{
	char *str = va_arg(*ap, char*);

	if (!str)
		ft_putstr("(null)");
	else
		ft_putstr(str);
}
