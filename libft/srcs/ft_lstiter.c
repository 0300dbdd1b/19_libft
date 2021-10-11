/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <naddino@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 12:37:19 by naddino           #+#    #+#             */
/*   Updated: 2021/10/11 23:44:09 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*item;

	if (!lst || !f)
		return ;
	if (lst->prev)
		lst->prev->next = NULL;
	item = lst;
	while (item)
	{
		(*f)(item->data);
		item = item->next;
	}
	if (lst->prev)
		lst->prev->next = lst;
}
