/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skinners77 <lvichi@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:32:32 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/17 21:05:02 by skinners77       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_size(int n, int b_size)
{
	int	size;

	size = 0;
	if (n < 0)
		size++;
	if (!n)
		size = 1;
	while (n)
	{
		n = n / b_size;
		size++;
	}
	return (size);
}

int	ft_putnbr_base_fd(int n, char *base, int fd)
{
	long	nbr;
	int		b_size;

	b_size = 0;
	while (base[b_size])
		b_size++;
	nbr = n;
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= b_size)
	{
		ft_putnbr_base_fd(nbr / b_size, base, fd);
		nbr = nbr % b_size;
	}
	write(fd, &base[nbr], 1);
	return (ft_size(n, b_size));
}

int	ft_putnbr_base_u_fd(unsigned long int n, char *base, int fd)
{
	unsigned long int	nbr;
	unsigned long int	b_size;
	int				size;

	b_size = 0;
	while (base[b_size])
		b_size++;
	nbr = n;
	if (nbr >= b_size)
	{
		ft_putnbr_base_u_fd(nbr / b_size, base, fd);
		nbr = nbr % b_size;
	}
	write(fd, &base[nbr], 1);
	size = 0;
	if (!n)
		size = 1;
	while (n)
	{
		n = n / b_size;
		size++;
	}
	return (size);
}

/*#include <stdio.h>

int	main(void)
{
	size_t	n = 2147483648555555;
	char	*base = "01";

	printf("\n%d\n", ft_putnbr_base_u_fd(n, base, 1));
}*/
