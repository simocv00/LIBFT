/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayyad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:32:01 by melayyad          #+#    #+#             */
/*   Updated: 2024/11/08 13:54:19 by melayyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	xc;

	i = 0;
	xc = (unsigned char)c;
	while (s[i])
	{
		if (s[i] == xc)
			return ((char *)&s[i]);
		i++;
	}
	if (xc == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
