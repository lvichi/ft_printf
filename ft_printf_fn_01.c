/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fn_01.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:21:06 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/16 20:52:33 by lvichi           ###   ########.fr       */
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
	write(1, arg, ft_strlen(arg));
	return (ft_strlen(arg));
}

int	ft_print_p(char *arg)
{
	size_t	n;
	int		size;

	n = (size_t)arg;
	size = write(1, "0x", 2);
	size += ft_putnbr_base_fd(n, "0123456789abcdef", 1);
	return (size);
}

int	ft_print_i(int arg)
{
	int	size;
	
	size = ft_putnbr_base_fd(arg, "0123456789", 1);
	return (size);
}

int	ft_print_u(unsigned int arg)
{
	int	size;
	
	size = ft_putnbr_base_u_fd(arg, "0123456789", 1);
	return (size);
}
