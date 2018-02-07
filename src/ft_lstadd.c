/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 14:41:35 by avallete          #+#    #+#             */
/*   Updated: 2014/11/10 12:38:16 by avallete         ###   ########.fr       */
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
