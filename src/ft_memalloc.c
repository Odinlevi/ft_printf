/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 14:41:35 by mnikifor          #+#    #+#             */
/*   Updated: 2018/11/10 10:55:11 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memalloc(size_t size)
{
	void	*p;
	size_t	i;

	i = 0;
	if (size == 0)
		return (NULL);
	p = (void*)malloc(sizeof(void*) * size);
	if (p)
	{
		while (i != size)
			((char*)p)[i++] = 0;
		return (p);
	}
	return (NULL);
}
