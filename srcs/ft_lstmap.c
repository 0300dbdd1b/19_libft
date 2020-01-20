/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 12:46:45 by naddino           #+#    #+#             */
/*   Updated: 2020/01/18 15:57:18 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mynewlist;
	t_list	*first;

	if (!lst)
		return (NULL);
	if (!(mynewlist = ft_lstnew(f(lst->content))))
		return (NULL);
	first = mynewlist;
	while (lst)
	{
		if (lst->next)
		{
			if (!(mynewlist->next = ft_lstnew(f(lst->next->content))))
			{
				ft_lstclear(&first, del);
				return (0);
			}
			mynewlist = mynewlist->next;
		}
		lst = lst->next;
	}
	mynewlist->next = NULL;
	return (first);
}
