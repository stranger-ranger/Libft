/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llatrice <llatrice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 20:46:42 by llatrice          #+#    #+#             */
/*   Updated: 2021/10/30 14:00:43 by llatrice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*back;

	if ((lst) && (new))
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			back = ft_lstlast(*(lst));
			back->next = new;
		}
	}
}
