/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 14:41:36 by mnikifor          #+#    #+#             */
/*   Updated: 2018/11/04 10:13:46 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;

	if (s == NULL)
		return (NULL);
	result = ft_strdup(s);
	i = 0;
	while (result[i] != '\0')
	{
		result[i] = f(i, result[i]);
		i++;
	}
	return (result);
}
