/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llatrice <llatrice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:13:43 by llatrice          #+#    #+#             */
/*   Updated: 2021/10/28 17:29:19 by llatrice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char	*sym;

	sym = (char *)str;
	while (*sym != (char) ch)
	{
		if (*sym == '\0')
			return (NULL);
		sym++;
	}
	return (sym);
}
