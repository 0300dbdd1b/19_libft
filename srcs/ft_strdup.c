/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 08:18:38 by naddino           #+#    #+#             */
/*   Updated: 2020/01/14 14:46:11 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	size;

	size = ft_strlen(s1) + 1;
	if (!(dest = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	ft_memcpy(dest, s1, size);
	return (dest);
}
