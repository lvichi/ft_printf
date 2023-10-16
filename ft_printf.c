/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:35:10 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/16 17:15:43 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h> //delete

static int	ft_print_s(char *arg)
{	
	write(1, arg, ft_strlen(arg));
	return (ft_strlen(arg));
}

static int	ft_print_c(char arg)
{
	write(1, &arg, 1);
	return (1);
}

static int	ft_check_format(char *format, va_list ap)
{
	int	size;

	size = 0;
	if (*format == 'c')
		size += ft_print_c(va_arg(ap, int));
	if (*format == 's')
		size += ft_print_s(va_arg(ap, char*));
	return (size);
}

int	ft_printf(const char *format, ...)
{
	int	i;
	int	size;
	va_list ap;
	
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
