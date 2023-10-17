/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skinners77 <lvichi@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:35:10 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/17 23:07:44 by skinners77       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_c(char arg)
{
	return (write(1, &arg, 1));
}

static int	ft_print_s(char *arg)
{
	if (arg)
		return (write(1, arg, ft_strlen(arg)));
	else
		return (write(1, "(null)", 6));
}

static int	ft_print_p(unsigned long arg)
{
	int		size;

	if (arg)
	{
		size = write(1, "0x", 2);
		size += ft_putnbr_base_u_fd(arg, HEX_LOWER, 1);
	}
	else
		size = write(1, "(nil)", 5);
	return (size);
}

static int	ft_check_format(char *format, va_list ap)
{
	if (*format == 'c')
		return (ft_print_c(va_arg(ap, int)));
	if (*format == 's')
		return (ft_print_s(va_arg(ap, char *)));
	if (*format == 'p')
		return (ft_print_p(va_arg(ap, unsigned long)));
	if (*format == 'i' || *format == 'd')
		return (ft_putnbr_base_fd(va_arg(ap, int), DECIMAL, 1));
	if (*format == 'u')
		return (ft_putnbr_base_u_fd(va_arg(ap, unsigned int), DECIMAL, 1));
	if (*format == 'x')
		return (ft_putnbr_base_u_fd(va_arg(ap, unsigned int), HEX_LOWER, 1));
	if (*format == 'X')
		return (ft_putnbr_base_u_fd(va_arg(ap, unsigned int), HEX_UPPER, 1));
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
		if (format[i] == '%' && ++i)
			size += ft_check_format(&((char *)format)[i++], ap);
		else
		{
			size++;
			write(1, &format[i++], 1);
		}
	}
	va_end(ap);
	return (size);
}
