/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llatrice <llatrice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:23:25 by llatrice          #+#    #+#             */
/*   Updated: 2021/10/25 20:17:46 by llatrice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned const char	*m1;
	unsigned const char	*m2;

	m1 = (unsigned const char *)str1;
	m2 = (unsigned const char *)str2;
	while (n > 0)
	{
		if (*m1 != *m2)
			return (*m1 - *m2);
		m1++;
		m2++;
		n--;
	}
	return (0);
}
