/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 13:35:57 by naddino           #+#    #+#             */
/*   Updated: 2020/01/14 14:19:42 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr_s;

	ptr_s = (unsigned char *)s;
	i = -1;
	while (++i < n)
		if (ptr_s[i] == (unsigned char)c)
			return ((unsigned char *)&s[i]);
	if (c == '\0')
		return ((unsigned char *)&s[i]);
	return (NULL);
}
