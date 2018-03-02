/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 15:06:30 by mnikifor          #+#    #+#             */
/*   Updated: 2017/11/20 15:20:00 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_memdel(void **ap)
{
	unsigned char	**ptr;

	if (ap)
	{
		ptr = (unsigned char **)ap;
		free((void*)*ptr);
		*ap = NULL;
	}
}
