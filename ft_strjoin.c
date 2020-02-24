/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 15:50:54 by naddino           #+#    #+#             */
/*   Updated: 2020/01/14 16:14:16 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*output;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(output = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	output[0] = '\0';
	ft_strlcat(output, s1, len + 1);
	ft_strlcat(output, s2, len + 1);
	return (output);
}
