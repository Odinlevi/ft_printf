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

void	ft_putchar_fd(t_wint c, int fd)
{
	if (c <= 0x7F)
		ft_putchar_fd_x(c, fd);
	else if (c <= 0x7FF)
	{
		ft_putchar_fd_x((c >> 6) + 0xC0, fd);
		ft_putchar_fd_x((c & 0x3F) + 0x80, fd);
	}
	else if (c <= 0xFFFF)
	{
		ft_putchar_fd_x((c >> 12) + 0xE0, fd);
		ft_putchar_fd_x(((c >> 6) & 0x3F) + 0x80, fd);
		ft_putchar_fd_x((c & 0x3F) + 0x80, fd);
	}
	else if (c <= 0x10FFFF)
	{
		ft_putchar_fd_x((c >> 18) + 0xF0, fd);
		ft_putchar_fd_x(((c >> 12) & 0x3F) + 0x80, fd);
		ft_putchar_fd_x(((c >> 6) & 0x3F) + 0x80, fd);
		ft_putchar_fd_x((c & 0x3F) + 0x80, fd);
	}
}

void ft_putchar_fd_x(t_wint c, int fd)
{
  write(fd, &c, 1);
}