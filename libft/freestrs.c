/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freestrs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriga <jriga@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:20:17 by jriga             #+#    #+#             */
/*   Updated: 2025/04/28 13:37:36 by jriga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	freestrs(char **strs, size_t count)
{
	size_t	i;

	for (i = 0; i < count; i++)
		free(strs[i]);
	free(strs);
}
