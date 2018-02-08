/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:25:00 by mnikifor          #+#    #+#             */
/*   Updated: 2018/11/12 11:26:32 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_list *ft_lstlast(t_list *begin_list)
{
	t_list *end;

	end = begin_list;
	while (end->next != NULL)
		end = end->next;
	return (end);
}
