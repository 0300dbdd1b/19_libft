/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 15:32:58 by naddino           #+#    #+#             */
/*   Updated: 2020/01/16 16:17:46 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	x;

	if ((!s) || (!(str = malloc(sizeof(char) * ft_strlen(s) + 1))))
		return (NULL);
	x = 0;
	while (s[x])
	{
		str[x] = (f)(x, s[x]);
		x++;
	}
	str[x] = '\0';
	return (str);
}
