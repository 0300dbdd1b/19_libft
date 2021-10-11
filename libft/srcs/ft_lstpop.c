/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <naddino@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 00:11:43 by naddino           #+#    #+#             */
/*   Updated: 2021/10/12 00:12:36 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstpop(t_list **lst)
{
	t_list	*item;

	if (!lst || !*lst)
		return (NULL);
	ft_lstlast(*lst)->next = (*lst)->next;
	item = *lst;
	*lst = (*lst)->next;
	if ((*lst)->prev)
	{
		(*lst)->prev = (*lst)->prev->prev;
		item->prev = item;
		item->next = item;
	}
	else
		item->next = NULL;
	if (*lst == item)
		*lst = NULL;
	return (item);
}
