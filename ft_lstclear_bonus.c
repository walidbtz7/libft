/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <wboutzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:03:57 by wboutzou          #+#    #+#             */
/*   Updated: 2021/11/24 18:03:58 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*n;

	n = (*lst);
	if (!*lst && !del)
		return ;
	while (n)
	{
		n = n->next;
		ft_lstdelone((*lst), del);
		(*lst) = n;
	}
}
