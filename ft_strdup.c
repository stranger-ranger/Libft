/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llatrice <llatrice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 13:11:33 by llatrice          #+#    #+#             */
/*   Updated: 2021/10/16 16:47:54 by llatrice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char			*new;
	unsigned int	i;

	i = 0;
	new = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (new)
	{
		while (i < ft_strlen(s1))
		{
			new[i] = s1[i];
			i++;
		}
		new[i] = '\0';
	}
	return (new);
}
