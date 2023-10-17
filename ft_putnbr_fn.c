/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fn.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skinners77 <lvichi@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:32:32 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/17 23:42:22 by skinners77       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putnbr_base_fd(long nbr, char *base, int fd)
{
	int		b_size;
	int		size;

	b_size = 0;
	size = 0;
	while (base[b_size])
		b_size++;
	if (nbr < 0)
	{
		size = write(fd, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= b_size)
	{
		size += ft_putnbr_base_fd(nbr / b_size, base, fd);
		nbr = nbr % b_size;
	}
	size += write(fd, &base[nbr], 1);
	return (size);
}

int	ft_putnbr_base_u_fd(unsigned long nbr, char *base, int fd)
{
	unsigned long	b_size;
	int				size;

	b_size = 0;
	size = 0;
	while (base[b_size])
		b_size++;
	if (nbr >= b_size)
	{
		size += ft_putnbr_base_u_fd(nbr / b_size, base, fd);
		nbr = nbr % b_size;
	}
	size += write(fd, &base[nbr], 1);
	return (size);
}
