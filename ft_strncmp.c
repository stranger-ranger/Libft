/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llatrice <llatrice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:59:22 by llatrice          #+#    #+#             */
/*   Updated: 2021/10/28 18:14:08 by llatrice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			i;
	unsigned char	*new1;
	unsigned char	*new2;

	new1 = (unsigned char *)str1;
	new2 = (unsigned char *)str2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1)
	{
		if ((new1[i] != new2[i]) || (new1[i] == 0) || (new1[i] == 0))
			return (new1[i] - new2[i]);
		i++;
	}
	return (new1[i] - new2[i]);
}
