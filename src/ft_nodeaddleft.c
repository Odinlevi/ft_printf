/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodeaddleft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 12:03:10 by mnikifor          #+#    #+#             */
/*   Updated: 2018/11/12 12:09:40 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_nodeaddleft(t_tree *new, t_tree **tree)
{
	t_tree *begin;

	begin = *tree;
	while (begin->left)
		begin = begin->left;
	begin->left = new;
	new->father = begin;
}
