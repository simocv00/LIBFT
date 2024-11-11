/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayyad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:56:43 by melayyad          #+#    #+#             */
/*   Updated: 2024/11/08 14:29:19 by melayyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *src, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[0] == '\0')
		return ((char *)&src[0]);
	while (i < n && src[i])
	{
		j = 0;
		while (src[i + j] && src[i + j] == to_find[j] && i + j < n)
			j++;
		if (to_find[j] == '\0')
			return ((char *)&src[i]);
		i++;
	}
	return (NULL);
}
