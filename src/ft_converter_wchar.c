/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter_wchar.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 09:56:27 by mnikifor          #+#    #+#             */
/*   Updated: 2018/01/16 12:39:01 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	print_wchar(va_list list, int *i)
{
	wchar_t c;

	c = va_arg(list, wchar_t);
	i[1] += ft_putwchar(c);
}

void	arg_is_wchar(t_flags *flags, va_list list, int *i)
{
	flags = flags;
	print_wchar(list, i);
}
