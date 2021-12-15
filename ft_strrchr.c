/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llatrice <llatrice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:08:10 by llatrice          #+#    #+#             */
/*   Updated: 2021/10/28 17:55:56 by llatrice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*sym;

	sym = ft_strchr(str, '\0');
	if (ch == '\0')
		return (sym);
	sym--;
	while (*str)
	{
		if (*sym == (char) ch)
			return (sym);
		str++;
		sym--;
	}
	return (NULL);
}
