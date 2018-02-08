/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter_mod.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:40:04 by mnikifor          #+#    #+#             */
/*   Updated: 2018/01/16 12:05:46 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void arg_is_mod(t_flags *flags, int *i)
{
	if (flags->type == '%')
	{
		flags->min_size - 1 > 0 ? (fill_it(flags, flags->min_size - 1), \
				i[1] += flags->min_size - 1) : (i[1] += 0);
		ft_putchar('%');
		i[1] += 1;
	}
}
