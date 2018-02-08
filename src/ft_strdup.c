/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 14:41:36 by mnikifor          #+#    #+#             */
/*   Updated: 2018/11/14 11:23:25 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char			*ft_strdup(const char *s)
{
	int		i;
	char	*scop;

	i = ((ft_strlen(s)) + 1);
	if ((scop = ((char*)malloc(sizeof(char) * i))))
	{
		ft_strcpy(scop, s);
		return (scop);
	}
	return (NULL);
}
