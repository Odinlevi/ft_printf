/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wnstrlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 12:41:15 by mnikifor          #+#    #+#             */
/*   Updated: 2018/01/16 12:43:00 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_wnstrlen(wchar_t *str, int n)
{
	int i;

	i = 0;
	while (*str != '\0' && (i + ft_wcharlen(*str)) <= n)
	{
		i += ft_wcharlen(*str);
		str++;
	}
	return (i);
}
