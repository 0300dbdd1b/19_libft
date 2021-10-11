/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <naddino@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 17:10:15 by naddino           #+#    #+#             */
/*   Updated: 2021/10/11 23:42:49 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *item)
{
	if (!lst || !item)
		return ;
	if (!*lst)
	{
		*lst = item;
		return ;
	}
	if (item->prev)
	{
		ft_lstadd_back(lst, item);
		*lst = (*lst)->prev;
		return ;
	}
	(*lst)->prev = item;
	item->next = *lst;
	*lst = item;
}
