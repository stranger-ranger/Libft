/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llatrice <llatrice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:05:23 by llatrice          #+#    #+#             */
/*   Updated: 2021/10/25 19:44:17 by llatrice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int			i;
	int			znak;
	long long	output;

	i = 0;
	znak = 1;
	output = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\v')
		|| (str[i] == '\n') || (str[i] == '\r') || (str[i] == '\f'))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i++] == '-')
			znak = znak * (-1);
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
		output = (output * 10) + ((long)(str[i++] - '0'));
	output = output * (long long)znak;
	if (((-1) * 2147483648 <= output) && (output <= 2147483647))
		return ((int)output);
	else
		return (0);
}
