/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:05:33 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/16 21:14:52 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_print_c(char arg);
int	ft_print_s(char *arg);
int	ft_print_p(char *arg);
int	ft_putnbr_base_fd(int n, char *base, int fd);
int	ft_print_i(int arg);
int	ft_print_u(unsigned int arg);
int	ft_putnbr_base_u_fd(unsigned int n, char *base, int fd);
int	ft_print_x(unsigned int arg, char *base);

#endif