/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 23:46:24 by naddino           #+#    #+#             */
/*   Updated: 2020/01/14 14:16:43 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int			get_len(int n)
{
	int				len;
	unsigned int	absol;

	len = 1;
	absol = n;
	if (n < 0)
	{
		len++;
		absol *= -1;
	}
	while (absol >= 10)
	{
		absol /= 10;
		len++;
	}
	return (len);
}

char				*ft_itoa(int n)
{
	unsigned int	absol;
	char			*output;
	int				len;

	len = get_len(n);
	absol = n;
	if (!(output = malloc(sizeof(char) * (len + 1))))
		return (0);
	output[len] = '\0';
	if (n == 0 && (output[0] = '0'))
		return (output);
	if (n < 0)
	{
		output[0] = 45;
		absol *= -1;
	}
	while (absol != 0)
	{
		output[len - 1] = absol % 10 + '0';
		absol /= 10;
		len--;
	}
	return (output);
}
