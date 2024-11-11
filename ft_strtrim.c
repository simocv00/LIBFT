/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayyad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 22:05:03 by melayyad          #+#    #+#             */
/*   Updated: 2024/11/07 20:41:08 by melayyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sstrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_sstrchr(set, s1[start]))
		start++;
	while (end >= start && ft_sstrchr(set, s1[end]))
		end--;
	len = end - start + 1;
	trim = malloc(len + 1);
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, s1 + start, len + 1);
	trim[len] = '\0';
	return (trim);
}
