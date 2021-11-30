/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <wboutzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:07:32 by wboutzou          #+#    #+#             */
/*   Updated: 2021/11/26 02:54:15 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const	char *haystack, const	char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l;

	l = ft_strlen(needle);
	i = 0;
	j = 0;
	if (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	while (i < ft_strlen(haystack) && i < len && len != 0)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			j++;
			if (j == l)
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
