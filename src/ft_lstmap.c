/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 14:41:35 by mnikifor          #+#    #+#             */
/*   Updated: 2018/11/03 15:15:16 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem))
{
	t_list *src;
	t_list *dest;
	t_list *begin;

	src = lst;
	dest = f(src);
	begin = dest;
	while (src->next != NULL)
	{
		dest->next = f(src->next);
		dest = dest->next;
		src = src->next;
	}
	return (begin);
}
