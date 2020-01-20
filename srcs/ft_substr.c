/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 16:06:30 by naddino           #+#    #+#             */
/*   Updated: 2020/01/14 16:16:49 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*output;
	size_t	i;
	size_t	size;

	if (s)
		size = ft_strlen(s);
	if (!s || size < start)
		return (0);
	len = (start + len < size) ? len : size - start;
	if (!(output = (char *)malloc((len + 1) * sizeof(char))))
		return (0);
	i = 0;
	while (s[start + i] && i < len)
	{
		output[i] = s[start + i];
		i++;
	}
	output[i] = '\0';
	return (output);
}
