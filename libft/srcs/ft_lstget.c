/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <naddino@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 23:37:53 by naddino           #+#    #+#             */
/*   Updated: 2021/10/12 00:12:57 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstget(t_list *lst, int i)
{
	t_list	*item;

	item = lst;
	while (i < 0 && item)
	{
		item = item->prev;
		i++;
	}
	while (i > 0 && item)
	{
		item = item->next;
		i--;
	}
	return (item);
}
