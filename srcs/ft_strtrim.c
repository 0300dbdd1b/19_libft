/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 16:30:28 by naddino           #+#    #+#             */
/*   Updated: 2020/01/14 19:03:29 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_in_set(char c, const char *set)
{
	size_t x;

	x = 0;
	while (set[x])
	{
		if (c == set[x])
			return (1);
		x++;
	}
	return (0);
}

static size_t	cut_set(const char *str, const char *set, int bool)
{
	size_t	x;

	x = 0;
	if (bool == 0)
	{
		while (is_in_set(str[x], set))
			x++;
		return (x);
	}
	else if (bool == 1)
	{
		x = ft_strlen(str) - 1;
		while (is_in_set(str[x], set) && x > 0)
			x--;
		return (x);
	}
	return (x);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*output;

	if (s1 && !set)
		return ((char *)s1);
	else if (!s1)
		return (NULL);
	start = cut_set(s1, set, 0);
	end = cut_set(s1, set, 1) + 1;
	if (start >= end)
		return (malloc(0));
	if (!(output = malloc(sizeof(char) * (end - start) + 1)))
		return (NULL);
	ft_memcpy((void *)output, (void *)s1 + start, (end - start));
	output[end - start] = '\0';
	return (output);
}
