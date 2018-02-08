/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 12:05:22 by mnikifor          #+#    #+#             */
/*   Updated: 2018/11/10 10:49:29 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*to_return(char *ret, char *src1, size_t e)
{
	while (*src1 != '\0')
	{
		if (e != 1)
		{
			*ret++ = *src1;
			e--;
		}
		src1++;
	}
	*ret = '\0';
	return (src1);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*ret;
	char		*src1;
	size_t		i;
	size_t		e;
	size_t		m;

	i = 0;
	ret = dst;
	src1 = (char*)src;
	e = size;
	while (e-- != 0 && *ret != '\0')
		ret++;
	m = ret - dst;
	e = size - m;
	if (e == 0)
	{
		while (src1[i] != '\0')
			i++;
		return (m + i);
	}
	src1 = to_return(ret, src1, e);
	return (m + (src1 - src));
}
