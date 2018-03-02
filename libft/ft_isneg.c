/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isneg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 13:38:34 by mnikifor          #+#    #+#             */
/*   Updated: 2018/01/17 13:38:37 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_isneg(intmax_t num, int base)
{
	char		*s;
	intmax_t	t;

	if (num < 0)
	{
		t = -num;
		s = ft_append("-", ft_utoa(t, base), 2);
	}
	else
		s = ft_utoa(num, base);
	return (s);
}
