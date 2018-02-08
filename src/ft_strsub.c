/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 14:41:36 by mnikifor          #+#    #+#             */
/*   Updated: 2018/11/10 12:21:31 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static char		*ft_sttrcpy(char *dest, const char *src, size_t i, size_t n)
{
	unsigned int c;

	c = 0;
	while (c < n)
	{
		dest[c] = src[i];
		i++;
		c++;
	}
	dest[n] = '\0';
	return (dest);
}

char			*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *scop;

	if (s == NULL)
		return (NULL);
	if ((scop = ((char*)malloc(sizeof(char) * len + 1))))
	{
		scop = ft_sttrcpy(scop, s, start, len);
		return (scop);
	}
	return (scop);
}
