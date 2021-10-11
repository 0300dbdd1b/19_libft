/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <naddino@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 18:30:27 by naddino           #+#    #+#             */
/*   Updated: 2021/10/11 23:43:25 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*item;
	t_list	*next_item;

	if (!lst || !*lst || !del)
		return ;
	if ((*lst)->prev)
		(*lst)->prev->next = NULL;
	item = *lst;
	while (item)
	{
		next_item = item->next;
		ft_lstdelone(item, del);
		item = next_item;
	}
	*lst = NULL;
}
