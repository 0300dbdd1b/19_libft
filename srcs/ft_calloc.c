/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 15:34:22 by naddino           #+#    #+#             */
/*   Updated: 2020/01/14 15:35:49 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*memory;
	size_t	i;

	if (!(memory = (char *)malloc(count * size * sizeof(char))))
		return (0);
	i = 0;
	while (i < count * size)
	{
		memory[i] = 0;
		i++;
	}
	return ((void *)memory);
}
