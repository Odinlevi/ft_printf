/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodeaddright.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 12:05:16 by mnikifor          #+#    #+#             */
/*   Updated: 2018/11/12 12:07:44 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_nodeaddright(t_tree *new, t_tree **tree)
{
	t_tree *begin;

	begin = *tree;
	while (begin->right)
		begin = begin->right;
	begin->right = new;
	new->father = begin;
}
