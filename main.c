/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:05:10 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/16 20:57:12 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int 			i, t, x, y;
	unsigned int	u;
	char			*ptr = "Pointer";
	
	x = -1245;
	y = -99554;
	u = 784328743;
	i = ft_printf("Print c: %c s: %s p: %p d: %d i: %d u: %u !!\n", 'x', "super", ptr, x, y, u);
	t = printf("Print c: %c s: %s p: %p d: %d i: %d u: %u !!\n", 'x', "super", ptr, x, y, u);
	printf("ft_printf: %d\nprintf: %d\n", i, t);
}