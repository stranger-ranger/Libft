/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llatrice <llatrice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:47:37 by llatrice          #+#    #+#             */
/*   Updated: 2021/10/28 19:12:50 by llatrice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*str1, const char *str2, size_t len)
{
	size_t	i;

	i = 0;
	if (ft_strlen(str2) == 0)
		return ((char *)str1);
	if (((ft_strlen(str1) == 0) && (ft_strlen(str2) != 0))
		|| (ft_strlen(str2) > len))
		return (NULL);
	while ((i <= (len - ft_strlen(str2)) && (str1)))
	{
		if ((*str1 == *str2)
			&& (ft_strncmp(str1, str2, ft_strlen(str2)) == 0))
			return ((char *)str1);
		str1++;
		i++;
	}
	return (NULL);
}
