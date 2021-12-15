/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llatrice <llatrice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:15:38 by llatrice          #+#    #+#             */
/*   Updated: 2021/10/25 16:36:51 by llatrice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_length(int n)
{
	int		del;
	size_t	dlina;

	del = 10;
	dlina = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		dlina++;
	while (n)
	{
		n = n / 10;
		dlina++;
		del = del * 10;
	}
	return (dlina);
}

char	*ft_itoa(int n)
{
	size_t	i;
	size_t	len;
	char	*out;

	i = 0;
	len = get_length(n);
	out = (char *)malloc(sizeof(char) * (len + 1));
	if (!out)
		return (NULL);
	out[len--] = '\0';
	if (n == (-1) * (2147483648))
		out[len--] = '8';
	if (n == (-1) * (2147483648))
		n = n / 10;
	if (n < 0)
		out[i++] = '-';
	if (n < 0)
		n = n * (-1);
	while (len + 1 > i)
	{
		out[len--] = (n % 10) + '0';
		n = n / 10;
	}
	return (out);
}
