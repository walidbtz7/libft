/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <wboutzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:04:52 by wboutzou          #+#    #+#             */
/*   Updated: 2021/11/24 18:04:53 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c,	size_t n)
{
	size_t				i;
	size_t				j;
	unsigned char		*str;

	str = (unsigned char *) s;
	i = 0;
	j = 0;
	while (j < n)
	{
		if (str[j] == (unsigned char)c)
		{
			return ((void *)(str + j));
		}
		j++;
	}
	return (NULL);
}
