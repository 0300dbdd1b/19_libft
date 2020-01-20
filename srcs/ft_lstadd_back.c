/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 17:58:44 by naddino           #+#    #+#             */
/*   Updated: 2020/01/18 13:31:46 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (!alst)
		return ;
	else if (!(*alst))
		*alst = new;
	else
	{
		new->next = NULL;
		ft_lstlast((*alst))->next = new;
	}
}
