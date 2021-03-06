/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 14:41:35 by mnikifor          #+#    #+#             */
/*   Updated: 2018/11/03 15:34:10 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

unsigned char	*threeand4bytesbufferfd(wchar_t c)
{
	unsigned char *buffer;

	buffer = (unsigned char *)malloc(sizeof(char) * 5);
	if (c <= 0xFFFF)
	{
		buffer[3] = '\0';
		buffer[2] = 0x80 | (c & 0x3F);
		c = c >> 6;
		buffer[1] = 0x80 | (c & 0x3F);
		c = c >> 6;
		buffer[0] = 0xE0 | c;
	}
	else
	{
		buffer[4] = '\0';
		buffer[3] = 0x80 | (c & 0x3F);
		c = c >> 6;
		buffer[2] = 0x80 | (c & 0x3F);
		c = c >> 6;
		buffer[1] = 0x80 | (c & 0x3F);
		c = c >> 6;
		buffer[0] = 0xF0 | c;
	}
	return (buffer);
}

unsigned char	*wchartoutf8fd(wchar_t c)
{
	unsigned char *buffer;

	buffer = (unsigned char *)malloc(sizeof(char) * 3);
	if (c <= 0x7FF)
	{
		buffer[2] = '\0';
		buffer[1] = 0x80 | (c & 0x3F);
		c = c >> 6;
		buffer[0] = c | 0xC0;
	}
	else
	{
		free(buffer);
		buffer = threeand4bytesbufferfd(c);
	}
	return (buffer);
}

void			ft_putchar_fd(wchar_t c, int fd)
{
	int				i;
	unsigned char	*buffer;

	if (c <= 0x7F)
	{
		write(fd, &c, 1);
	}
	else
	{
		buffer = wchartoutf8fd(c);
		i = 0;
		while (buffer[i])
		{
			write(fd, &buffer[i], 1);
			i++;
		}
	free(buffer);
	}
}