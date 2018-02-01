/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 18:48:21 by mnikifor          #+#    #+#             */
/*   Updated: 2018/01/16 18:48:27 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*size_t	ft_strlen(char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}*/

int ft_printf(const char *format, ...) {
    va_list ap;
	int ret;
	char *str;

	va_start(ap, format);
	str = va_arg(ap, char *);
	printf("%s\n",format);
	printf("%d\n", count_args(format));
	va_end(ap);
	ret = 1;
	return (ret);
}

int		main(void)
{
	char *kek = "lol";
	int x;
	//printf("%s\n", ft_printf("%s %s %s", kek, kek, kek));
	//printf("%s\n", recognition_of_cons("%d  %x %i %ss"));
	x = ft_printf("qweqwe%s%s%%", kek, kek);
	return (1);
}