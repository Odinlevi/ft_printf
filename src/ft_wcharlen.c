/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcharlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 12:44:26 by mnikifor          #+#    #+#             */
/*   Updated: 2018/01/16 12:44:37 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	ft_wcharlen(wchar_t c)
{
	unsigned int e;

	e = (unsigned int)c;
	if (c >= 0 && c <= 255)
		return (1);
	else if (e > 255 && e < 0x10FFFF)
	{
		if (e < 0x07FF)
			return (2);
		else if (e < 0xFFFF)
			return (3);
		else
			return (4);
	}
	else
		return (1);
}
