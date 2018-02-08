/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 14:41:35 by mnikifor          #+#    #+#             */
/*   Updated: 2018/11/08 14:58:27 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char *ft_strchr(const char *s, int c)
{
	char	*dest;

	dest = (char*)s;
	while (*dest != c)
	{
		if (*dest == '\0')
			return (NULL);
		dest++;
	}
	return (dest);
}
