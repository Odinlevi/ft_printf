/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_conv_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 13:42:05 by mnikifor          #+#    #+#             */
/*   Updated: 2018/01/17 13:46:09 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*pf_conv_i(va_list *ap, t_pf *pf)
{
	intmax_t	im;
	char		*s;

	im = va_arg(*ap, intmax_t);
	s = pf_int_length(im, 10, pf);
	return (s);
}

char	*pf_conv_d(va_list *ap, t_pf *pf)
{
	intmax_t	im;
	char		*s;

	im = va_arg(*ap, intmax_t);
	s = pf_int_length(im, 10, pf);
	return (s);
}

char	*pf_conv_ld(va_list *ap, t_pf *pf)
{
	intmax_t	im;
	char		*s;

	im = va_arg(*ap, intmax_t);
	pf->length = 'l';
	s = pf_int_length(im, 10, pf);
	return (s);
}

char	*pf_conv_u(va_list *ap, t_pf *pf)
{
	uintmax_t	um;
	char		*s;

	um = va_arg(*ap, uintmax_t);
	s = pf_uint_length(um, 10, pf);
	return (s);
}

char	*pf_conv_lu(va_list *ap, t_pf *pf)
{
	uintmax_t	um;
	char		*s;

	um = va_arg(*ap, uintmax_t);
	pf->length = 'l';
	s = pf_uint_length(um, 10, pf);
	return (s);
}
