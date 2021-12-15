/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llatrice <llatrice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:25:40 by llatrice          #+#    #+#             */
/*   Updated: 2021/10/30 15:36:27 by llatrice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*first;
	t_list	*second;

	first = *lst;
	while (first)
	{
		second = first -> next;
		if (del)
			del(first -> content);
		free (first);
		first = second;
	}
	*lst = NULL;
}
