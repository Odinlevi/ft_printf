/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 14:41:36 by mnikifor          #+#    #+#             */
/*   Updated: 2018/11/04 10:12:01 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char *ft_strmap(char const *s, char (*f)(char))
{
	char	*result;
	size_t	i;

	if (s == NULL)
		return (NULL);
	result = ft_strdup(s);
	i = 0;
	while (result[i] != '\0')
	{
		result[i] = f(result[i]);
		i++;
	}
	return (result);
}
