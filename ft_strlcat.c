/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llatrice <llatrice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:00:57 by llatrice          #+#    #+#             */
/*   Updated: 2021/10/28 20:19:59 by llatrice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	n;
	size_t	len_dst;
	size_t	len_src;

	i = 0;
	n = ft_strlen(dst);
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dstsize <= len_dst)
		return (dstsize + len_src);
	while ((len_dst + i) < (dstsize - 1) && src[i])
	{
		dst[n] = src[i];
		n++;
		i++;
	}
	dst[n] = '\0';
	return (len_dst + len_src);
}
