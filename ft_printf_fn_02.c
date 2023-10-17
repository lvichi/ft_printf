/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fn_02.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skinners77 <lvichi@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 21:12:17 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/17 21:17:27 by skinners77       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x(unsigned int arg, char *base)
{
	return (ft_putnbr_base_u_fd(arg, base, 1));
}
