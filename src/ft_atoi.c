/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 14:41:34 by mnikifor          #+#    #+#             */
/*   Updated: 2018/01/16 10:55:33 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_atoi(const char *str)
{
	int result;
	int i;
	int neg;

	result = 0;
	i = 0;
	neg = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\v' || str[i] == '\t'\
			|| str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = 1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10;
		result = result + (((int)str[i]) - 48);
		i++;
	}
	if (neg)
		result = -result;
	return (result);
}
