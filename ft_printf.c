/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skinners77 <lvichi@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:35:10 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/17 21:10:00 by skinners77       ###   ########.fr       */
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
		return (ft_print_p(va_arg(ap, size_t)));
	if (*format == 'i' || *format == 'd')
		return (ft_print_i(va_arg(ap, int)));
	if (*format == 'u')
		return (ft_print_u(va_arg(ap, unsigned int)));
	if (*format == 'x')
		return (ft_print_x(va_arg(ap, long int), HEX_LOWER));
	if (*format == 'X')
		return (ft_print_x(va_arg(ap, long int), HEX_UPPER));
	if (*format == '%')
		return (write(1, "%", 1));
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
		if (format[i] == '%')
		{
			i++;
			size += ft_check_format(&((char *)format)[i++], ap);
		}
		else
		{
			size++;
			write(1, &format[i++], 1);
		}
	}
	va_end(ap);
	return (size);
}
