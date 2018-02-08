/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 14:41:35 by mnikifor          #+#    #+#             */
/*   Updated: 2018/11/10 12:38:16 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_lstadd(t_list **alst, t_list *new)
{
	t_list *begin;

	begin = *alst;
	new->next = begin;
	*alst = new;
}
