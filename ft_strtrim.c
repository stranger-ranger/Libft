/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llatrice <llatrice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:49:06 by llatrice          #+#    #+#             */
/*   Updated: 2021/10/18 20:49:19 by llatrice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*cut;

	if ((!s1) || (!set))
		return (NULL);
	while ((*s1) && (ft_strchr(set, *s1)))
		s1++;
	len = ft_strlen(s1);
	while ((len) && (ft_strchr(set, s1[len])))
		len--;
	cut = ft_substr((char *)s1, 0, len + 1);
	return (cut);
}
