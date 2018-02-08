/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:11:07 by mnikifor          #+#    #+#             */
/*   Updated: 2018/11/12 12:50:40 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_lstsize(t_list *list)
{
	t_list *begin;
	size_t i;

	begin = list;
	if (!list)
		return (0);
	i = 0;
	while (begin->next)
	{
		begin = begin->next;
		i++;
	}
	return (i);
}
