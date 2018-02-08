/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 12:30:47 by mnikifor          #+#    #+#             */
/*   Updated: 2018/11/10 12:41:00 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_lstpushback(t_list **alst, t_list *new)
{
	t_list *begin;

	begin = *alst;
	if (new)
	{
		while (begin->next != NULL)
			begin = begin->next;
		begin->next = new;
		new->next = NULL;
	}
}
