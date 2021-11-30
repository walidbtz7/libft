/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <wboutzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:07:00 by wboutzou          #+#    #+#             */
/*   Updated: 2021/11/24 18:15:28 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const	char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	total;

	i = ft_strlen(src);
	total = 0;
	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	j = ft_strlen(dst);
	if (dstsize <= j)
		total = dstsize + i;
	else
	{
		total = j + i;
		i = 0;
		while (src[i] != '\0' && j < dstsize - 1)
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	return (total);
}
