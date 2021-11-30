/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <wboutzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:07:51 by wboutzou          #+#    #+#             */
/*   Updated: 2021/11/24 18:16:24 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*p;

	if (!s1)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && i < j)
		i++;
	while (ft_strchr(set, s1[j]) && j > i)
		j--;
	if (i == ft_strlen(s1))
		return (ft_strdup(""));
	p = ft_substr(s1, i, (j - i + 1));
	if (!p)
		return (NULL);
	return (p);
}
