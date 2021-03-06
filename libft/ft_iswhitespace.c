/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 16:19:00 by mnikifor          #+#    #+#             */
/*   Updated: 2017/11/20 16:19:01 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iswhitespace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t' ||
			c == '\r' || c == '\v' || c == '\f')
		return (1);
	return (0);
}
