/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llatrice <llatrice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 20:04:08 by llatrice          #+#    #+#             */
/*   Updated: 2021/10/16 17:11:40 by llatrice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if ((!dest) && (!src))
		return (NULL);
	if (s < d)
	{
		while (i++ < n)
			d[n - i] = s[n - i];
	}
	else
	{
		while (n-- > 0)
			*(d++) = *(s++);
	}
	return (dest);
}
