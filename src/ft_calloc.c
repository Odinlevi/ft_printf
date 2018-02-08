/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:56:33 by mnikifor          #+#    #+#             */
/*   Updated: 2018/01/04 13:53:22 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void	*result;
	size_t	i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	result = malloc(size * nmemb);
	while (i <= nmemb)
	{
		((char*)result)[i] = 0;
		i++;
	}
	return (result);
}
