/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlongnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 12:51:55 by mnikifor          #+#    #+#             */
/*   Updated: 2018/01/16 12:52:26 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putlongnbr(long int nb)
{
	if (nb >= 0 && nb <= 9)
		ft_putchar('0' + nb);
	else
	{
		ft_putlongnbr(nb / 10);
		ft_putlongnbr(nb % 10);
	}
}
