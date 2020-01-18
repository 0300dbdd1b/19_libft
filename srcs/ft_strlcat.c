/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 15:28:50 by naddino           #+#    #+#             */
/*   Updated: 2020/01/16 16:01:11 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;

	if (!dest || !src)
		return (ft_strlen(dest) + ft_strlen(src));
	dest_len = ft_strlen(dest);
	if (size == 0)
		return (ft_strlen(src));
	if ((int)size < 0)
		size = dest_len + ft_strlen(src) + 1;
	i = 0;
	while (dest_len + i < size - 1 && src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	size = (size > dest_len) ? dest_len : size;
	return (size + ft_strlen(src));
}
