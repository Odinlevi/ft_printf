/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 16:20:47 by mnikifor          #+#    #+#             */
/*   Updated: 2017/11/20 16:20:49 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	char	*ptr;

	ptr = s1;
	while (*ptr != '\0')
		ptr++;
	while (*s2 != '\0')
		*ptr++ = *s2++;
	*ptr = '\0';
	return (s1);
}
