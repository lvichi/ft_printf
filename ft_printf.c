/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:35:10 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/16 20:58:50 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h> //delete

static int	ft_check_format(char *format, va_list ap)
{
	if (*format == 'c')
		return (ft_print_c(va_arg(ap, int)));
	if (*format == 's')
		return (ft_print_s(va_arg(ap, char *)));
	if (*format == 'p')
		return (ft_print_p(va_arg(ap, char *)));
	if (*format == 'i' || *format == 'd')
		return (ft_print_i(va_arg(ap, int)));
	if (*format == 'u')
		return (ft_print_u(va_arg(ap, unsigned int)));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		size;
	va_list	ap;

	i = 0;
	size = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%' && i++)
			size += ft_check_format(&((char *)format)[i++], ap);
		write(1, &format[i++], 1);
		size++;
	}
	va_end(ap);
	return (size);
}
