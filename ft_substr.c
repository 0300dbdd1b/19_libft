/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <naddino@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 16:06:30 by naddino           #+#    #+#             */
/*   Updated: 2020/02/06 21:54:28 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*output;
	size_t	s_len;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (s_len < start)
		s_len = 0;
	else
		s_len = s_len - start;
	if (s_len < len)
		len = s_len;
	if (!(output = malloc(sizeof(*s) * (len + 1)))
			|| !ft_strlcpy(output, s + start, len + 1))
		return (0);
	return (output);
}
