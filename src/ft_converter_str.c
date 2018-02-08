/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:42:04 by mnikifor          #+#    #+#             */
/*   Updated: 2018/01/17 12:38:53 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	print_string(t_flags *flags, va_list list, int *i)
{
	char	*str;
	int		size;

	str = NULL;
	str = va_arg(list, char*);
	str ? (size = ft_strlen(str)) : \
	(size = 6);
	if (str || (!(flags->min_size)))
	{
		if ((flags->optdot && (!(flags->prec))))
			size = 0;
		if (size < flags->min_size)
		{
			fill_it(flags, flags->min_size - size);
			size += flags->min_size - size;
		}
		if (!(flags->optdot) || (flags->optdot && flags->prec))
			str ? ft_putstr(str) : ft_putstr("(null)");
		i[1] += size;
	}
	else
	{
		fill_it(flags, flags->min_size);
		i[1] += flags->min_size;
	}
}

void	arg_is_string(t_flags *flags, va_list list, int *i)
{
	if ((!(flags->optdot)) || (flags->optdot && flags->prec) || flags->min_size)
	{
		if ((flags->type == 's' && flags->formf == 'l') || flags->type == 'S')
			arg_is_wstr(flags, list, i);
		else
			print_string(flags, list, i);
	}
}
