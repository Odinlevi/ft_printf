/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 14:41:36 by mnikifor          #+#    #+#             */
/*   Updated: 2018/11/05 10:16:06 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char *ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t e;

	i = 0;
	e = 0;
	while (i < n && src[e] != '\0')
		dest[i++] = src[e++];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
