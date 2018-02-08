/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 14:41:36 by mnikifor          #+#    #+#             */
/*   Updated: 2018/11/10 11:12:08 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char *ft_strstr(const char *s1, const char *s2)
{
	size_t i;
	size_t e;

	i = 0;
	e = 0;
	if (s2[0] == '\0' || s2 == NULL)
		return ((char*)s1);
	if (s1 && s2)
	{
		while (s1[i] != '\0')
		{
			e = 0;
			while (s1[i] == s2[e])
			{
				e++;
				i++;
				if (e == ft_strlen(s2))
					return ((char*)&s1[i - (ft_strlen(s2))]);
			}
			i++;
		}
	}
	return (NULL);
}
