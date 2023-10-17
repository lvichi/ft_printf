/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skinners77 <lvichi@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:05:33 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/17 21:17:05 by skinners77       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

# define DECIMAL   "0123456789"
# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"

int	ft_printf(const char *format, ...);
int	ft_print_c(char arg);
int	ft_print_s(char *arg);
int	ft_print_p(size_t arg);
int	ft_putnbr_base_fd(int n, char *base, int fd);
int	ft_print_i(int arg);
int	ft_print_u(unsigned int arg);
int	ft_putnbr_base_u_fd(unsigned long int n, char *base, int fd);
int	ft_print_x(unsigned int arg, char *base);

#endif