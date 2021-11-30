/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <wboutzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:04:19 by wboutzou          #+#    #+#             */
/*   Updated: 2021/11/24 18:04:20 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*n;
	int		size;

	if (!lst)
		return (NULL);
	size = ft_lstsize(lst);
	n = lst;
	while (size > 1)
	{
		size--;
		n = n->next;
	}
	return (n);
}
