/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fn_01.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skinners77 <lvichi@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:21:06 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/17 20:47:38 by skinners77       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_c(char arg)
{
	write(1, &arg, 1);
	return (1);
}

int	ft_print_s(char *arg)
{
	if (arg)
		return (write(1, arg, ft_strlen(arg)));
	else
		return (write(1, "(null)", 6));
}

int	ft_print_p(size_t arg)
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

int	ft_print_i(int arg)
{
	int	size;

	size = ft_putnbr_base_fd(arg, DECIMAL, 1);
	return (size);
}

int	ft_print_u(unsigned int arg)
{
	int	size;

	size = ft_putnbr_base_u_fd(arg, DECIMAL, 1);
	return (size);
}
