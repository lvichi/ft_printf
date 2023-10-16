/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:05:10 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/16 17:11:01 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int i, t;
	
	i = ft_printf("Print this: %c and this: %s !!\n", 'x', "super");
	t = printf("Print this: %c and this: %s !!\n", 'x', "super");
	printf("ft_printf: %d\nprintf: %d\n", i, t);
}