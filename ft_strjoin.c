/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llatrice <llatrice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:30:30 by llatrice          #+#    #+#             */
/*   Updated: 2021/10/18 17:45:25 by llatrice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sum;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if ((!s1) || (!s2))
		return (NULL);
	sum = (char *)malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!sum)
		return (NULL);
	while (s1[i])
		sum[i++] = s1[j++];
	j = 0;
	while (s2[j])
		sum[i++] = s2[j++];
	sum[i] = '\0';
	return (sum);
}
