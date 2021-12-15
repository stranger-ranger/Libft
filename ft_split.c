/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llatrice <llatrice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 20:56:39 by llatrice          #+#    #+#             */
/*   Updated: 2021/12/03 13:23:23 by llatrice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_cnt(char const *s, char c)
{
	int	i;
	int	cnt;

	cnt = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i] != c) && ((s[i + 1] == c) || (s[i + 1] == '\0')))
			cnt++;
		i++;
	}
	return (cnt);
}

int	get_len(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

void	*get_free(char **massiv, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(massiv[i]);
		i++;
	}
	free(massiv);
	return (NULL);
}

char	**get_input(char const *s, int words, char c, char **massiv)
{
	int	i;
	int	j;
	int	len;

	i = -1;
	while (++i < words)
	{
		while (*s == c)
			s++;
		len = get_len(s, c);
		massiv[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!(massiv[i]))
			return (get_free(massiv, i));
		j = 0;
		while (j < len)
			massiv[i][j++] = *s++;
		massiv[i][j] = '\0';
	}
	massiv[i] = NULL;
	return (massiv);
}

char	**ft_split(char const *s, char c)
{
	char	**massiv;
	int		words;

	if (!s)
		return (NULL);
	words = get_cnt(s, c);
	massiv = (char **)malloc(sizeof(char *) * (words + 1));
	if (!massiv)
		return (NULL);
	massiv = get_input(s, words, c, massiv);
	return (massiv);
}
