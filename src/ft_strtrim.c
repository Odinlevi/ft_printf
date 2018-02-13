/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 12:14:35 by mnikifor          #+#    #+#             */
/*   Updated: 2018/11/08 19:16:53 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (s)
		if ((str = (char*)malloc(sizeof(char) * (i + 1))) == NULL)
			return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	str = ft_strcpy(str, s);
	i = ft_strlen(str);
	while (str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '\t')
		str[--i] = '\0';
	return (str);
}