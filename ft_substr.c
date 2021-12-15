/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llatrice <llatrice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 13:27:56 by llatrice          #+#    #+#             */
/*   Updated: 2021/10/28 17:47:22 by llatrice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*pod;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	pod = (char *)malloc(sizeof(*s) * (len + 1));
	if (pod)
	{
		while (s[i])
		{
			if ((start <= i) && (j < len))
				pod[j++] = s[i];
			i++;
		}
		pod[j] = '\0';
	}
	return (pod);
}
