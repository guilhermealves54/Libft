/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:49:11 by gribeiro          #+#    #+#             */
/*   Updated: 2025/03/18 01:09:24 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	trim(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	n;
	size_t	a;
	char	*str;

	i = 0;
	n = ft_strlen (s1);
	if (s1 == NULL)
		return (NULL);
	while (s1[i] != '\0' && trim (s1[i], set) == 1)
		i++;
	while (n > i && trim (s1[n - 1], set) == 1)
		n--;
	str = malloc(n - i + 1);
	if (str == NULL)
		return (NULL);
	a = 0;
	while (i < n)
	{
		str[a] = s1[i];
		a++;
		i++;
	}
	str[a] = '\0';
	return (str);
}
