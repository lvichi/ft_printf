/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:35:10 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/15 20:18:26 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_format(char *format, void *var)
{
	int	i;

	i = 1;
	if (format[i] == c)
		ft_printf_c(var);
	return (i);

}

int	ft_printf(const char *format, ...)
{
	int	i;
	va_list ap;
	
	i = 0;
	va_start(va_list ap, format)
	if (format )
	while (format[i])
	{	
		if (format[i] == '%')
			i += ft_check_format(format[i]);
		write(1, format[i++], 1);
	}
	return (0);
}
