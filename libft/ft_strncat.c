/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 16:24:42 by mnikifor          #+#    #+#             */
/*   Updated: 2017/11/20 16:24:51 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dst, char *src, int nb)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (dst[size])
		size++;
	while (i < nb && src[i])
	{
		dst[size] = src[i];
		size++;
		i++;
	}
	dst[size] = '\0';
	return (dst);
}
