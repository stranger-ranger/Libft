/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llatrice <llatrice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:09:54 by llatrice          #+#    #+#             */
/*   Updated: 2021/10/16 18:39:49 by llatrice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while ((src[i]) && (i < size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i++] = '\0';
	}
	return (ft_strlen(src));
}
