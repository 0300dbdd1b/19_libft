/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <naddino@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 17:40:16 by naddino           #+#    #+#             */
/*   Updated: 2021/10/12 00:07:18 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;
	t_list	*item;

	if (!lst)
		return (0);
	if (lst->prev)
		lst->prev->next = NULL;
	i = 0;
	item = lst;
	while (item)
	{
		i++;
		item = item->next;
	}
	if (lst->prev)
		lst->prev->next = lst;
	return (i);
}
