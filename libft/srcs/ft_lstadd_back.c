/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <naddino@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 17:58:44 by naddino           #+#    #+#             */
/*   Updated: 2021/10/11 23:42:18 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *item)
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
		item->prev = (*lst)->prev;
		item->next = (*lst);
		(*lst)->prev->next = item;
		(*lst)->prev = item;
		return ;
	}
	if (!(*lst)->next)
		item->prev = *lst;
	ft_lstadd_back(&((*lst)->next), item);
}
