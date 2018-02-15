/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter_char.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 10:34:27 by mnikifor          #+#    #+#             */
/*   Updated: 2018/01/16 12:10:37 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	print_char(t_flags *flags, va_list list, int *i)
{
	int c;

	c = va_arg(list, int);
	if (flags->min_size - 1 > 0)
		i[1] += flags->min_size - 1;
	if (!flags->optmin)
	{
		if (flags->min_size - 1 > 0)
			fill_it(flags, flags->min_size - 1);
		if (c >= 0 && c <= 255)
			ft_putchar(c);
	}
	else
	{
		if (c >= 0 && c <= 255)
			ft_putchar(c);
		if (flags->min_size - 1 > 0)
			fill_it(flags, flags->min_size - 1);
	}
	i[1] += 1;
}

void	arg_is_char(t_flags *flags, va_list list, int *i)
{
	if (flags->type == 'C' || flags->formf == 'l')
		arg_is_wchar(flags, list, i);
	else
		print_char(flags, list, i);
}
