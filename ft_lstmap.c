/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llatrice <llatrice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:20:45 by llatrice          #+#    #+#             */
/*   Updated: 2021/12/03 13:19:07 by llatrice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*i;
	t_list	*j;

	if ((!lst) || (!f))
		return (NULL);
	i = 0;
	while (lst)
	{
		j = ft_lstnew((*f)(lst->content));
		if (!j)
		{
			ft_lstclear(&i, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&i, j);
	}
	return (i);
}
