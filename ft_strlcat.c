/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayyad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 20:09:52 by melayyad          #+#    #+#             */
/*   Updated: 2024/11/08 14:18:14 by melayyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	slen;
	size_t	dlen;

	if (size == 0 && !dst)
		return (ft_strlen(src));
	slen = ft_strlen(src);
	j = 0;
	dlen = ft_strlen(dst);
	if (size <= dlen)
		return (size + slen);
	while (src[j] && dlen + j < size - 1)
	{
		dst[dlen + j] = src[j];
		j++;
	}
	dst[dlen + j] = '\0';
	return (dlen + slen);
}
