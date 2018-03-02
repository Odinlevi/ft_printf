/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 16:26:29 by mnikifor          #+#    #+#             */
/*   Updated: 2017/11/20 16:26:35 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*pos;

	pos = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			pos = (char*)s;
		s++;
	}
	if (*s == (char)c)
		return ((char*)s);
	else
		return (pos);
}
