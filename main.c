/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:05:10 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/16 21:24:39 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

/*int	main(void)
{
	int 			i, t, x, y;
	unsigned int	u;
	char			*ptr = "Pointer";
	
	x = 1245;
	y = -99554;
	u = 784328743;
	i = ft_printf("Print c: %c s: %s p: %p d: %d i: %d u: %u !!\n", 'x', "super", ptr, x, y, u);
	t = printf("Print c: %c s: %s p: %p d: %d i: %d u: %u !!\n", 'x', "super", ptr, x, y, u);
	printf("ft_printf: %d\nprintf: %d\n\n", i, t);

	x = 784328743;
	y = 87348432;
	i = ft_printf("Print x: %x X: %X %% !!\n", x, y);
	t = printf("Print x: %x X: %X %% !!\n", x, y);
	printf("ft_printf: %d\nprintf: %d\n", i, t);
}*/

int	main(void)
{
	int	i;
	int	x;
	
	i = ft_printf("%c", '0');
	printf("\n");
	x = printf("%c", '0');
	printf("\n");
	printf("ft_printf: %d\nprintf: %d\n\n", i, x);
}