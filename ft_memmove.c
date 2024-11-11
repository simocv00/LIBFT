/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayyad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 20:40:48 by melayyad          #+#    #+#             */
/*   Updated: 2024/11/08 13:37:40 by melayyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ssrc;
	unsigned char	*ddst;

	ssrc = (unsigned char *)src;
	ddst = (unsigned char *)dst;
	i = -1;
	if (!src && !dst)
		return (NULL);
	if (dst > src)
	{
		i = n;
		while (i-- > 0)
			ddst[i] = ssrc[i];
	}
	else if (dst < src)
		while (++i < n)
			ddst[i] = ssrc[i];
	return (dst);
}
