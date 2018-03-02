/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 16:26:46 by mnikifor          #+#    #+#             */
/*   Updated: 2017/11/25 10:59:14 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char *s, unsigned int start, size_t len)
{
	char *res;

	if (s != NULL)
	{
		if (!(res = (char *)malloc(len + 1)))
			return (NULL);
		res[len] = '\0';
		while (len--)
			res[len] = s[start + len];
		return (res);
	}
	return (NULL);
}
