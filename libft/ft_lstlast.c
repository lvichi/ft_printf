/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:14:53 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/12 19:00:56 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (!lst)
		return (NULL);
	last = lst;
	while (last->next)
		last = last->next;
	return (last);
}

/*#include <stdio.h>

int	main(void)
{
	char	content1[30] = "Round a round";
	char	content2[30] = "First";
	t_list	*lst;

	lst = ft_lstnew(content1);
	ft_lstadd_front(&lst, ft_lstnew(content2));
	printf("last lst.content: %s\n", (char *)(ft_lstlast(lst)->content));
}*/
