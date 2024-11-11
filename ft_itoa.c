/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayyad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:28:52 by melayyad          #+#    #+#             */
/*   Updated: 2024/11/08 15:24:57 by melayyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	counter(int s)
{
	int	i;

	i = 0;
	if (s == 0)
		return (1);
	if (s < 0)
	{
		s *= -1;
		i++;
	}
	while (s)
	{
		s /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				len;
	char			*buffer;
	unsigned int	nbr;

	len = counter(n);
	buffer = malloc(len + 1);
	if (!buffer)
		return (NULL);
	buffer[len] = '\0';
	if (n < 0)
	{
		nbr = -n;
		buffer[0] = '-';
	}
	else
		nbr = n;
	if (n == 0)
		buffer[0] = '0';
	while (nbr)
	{
		buffer[--len] = (nbr % 10) + 48;
		nbr /= 10;
	}
	return (buffer);
}
