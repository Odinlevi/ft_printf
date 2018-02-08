/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 14:41:36 by mnikifor          #+#    #+#             */
/*   Updated: 2018/11/10 10:58:37 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char *ft_strnew(size_t size)
{
	char	*s;
	size_t	i;

	i = 0;
	if ((s = (char*)malloc(sizeof(char) * size)))
	{
		while (i < size)
			s[i++] = '\0';
		return (s);
	}
	return (NULL);
}
