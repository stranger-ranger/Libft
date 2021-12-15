/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llatrice <llatrice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:18:20 by llatrice          #+#    #+#             */
/*   Updated: 2021/10/25 19:54:50 by llatrice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t	i;
	char	*stroka;

	stroka = (char *)arr;
	i = 0;
	while (i < n)
	{
		if (*stroka == (char)c)
			return (stroka);
		stroka++;
		i++;
	}
	return (NULL);
}
