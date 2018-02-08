/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 11:15:04 by mnikifor          #+#    #+#             */
/*   Updated: 2018/01/03 13:10:13 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char			*ft_strndup(const char *s, size_t n)
{
	char	*scop;

	if ((scop = ((char*)malloc(sizeof(char) * n))))
	{
		ft_strncpy(scop, s, n);
		scop[n] = '\0';
		return (scop);
	}
	return (NULL);
}
