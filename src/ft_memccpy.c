/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 14:41:35 by mnikifor          #+#    #+#             */
/*   Updated: 2018/11/08 19:19:50 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;
	unsigned char	x;

	i = 0;
	s1 = (unsigned char*)dst;
	s2 = (unsigned char*)src;
	x = (unsigned char)c;
	while (i < n)
	{
		if ((*s1++ = *s2++) == x)
			return (s1);
		i++;
	}
	return (NULL);
}
