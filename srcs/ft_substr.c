/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <naddino@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 16:06:30 by naddino           #+#    #+#             */
/*   Updated: 2020/03/28 19:05:11 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *output;
    size_t    r;
	size_t	s_len;

	s_len = ft_strlen(s);
    r = 0;
    if (!s)
        return (0);
    if (start > s_len)
        len = 0;
    if (len + start > s_len && start < s_len)
        len = (s_len - start);
    if (!(output = malloc(sizeof(char) * (len + 1))))
        return (0);
    while (r < len)
    {
        output[r] = s[start];
        r++;
        start++;
    }
    output[r] = '\0';
    return (output);
}
