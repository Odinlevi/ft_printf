/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 12:43:15 by mnikifor          #+#    #+#             */
/*   Updated: 2018/01/16 12:43:44 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_putwnstr(wchar_t *str, int n)
{
	int i;

	i = 0;
	while (*str != '\0' && (i + ft_wcharlen(*str)) <= n)
	{
		i += ft_putwchar(*str);
		str++;
	}
	return (i);
}
