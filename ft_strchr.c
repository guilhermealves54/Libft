/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:47:13 by gribeiro          #+#    #+#             */
/*   Updated: 2025/03/18 01:06:55 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	n;

	i = 0;
	n = (char) c;
	while (s[i] != '\0')
	{
		if (s[i] == n)
		{
			return ((char *) &s[i]);
		}
		i++;
	}
	if (s[i] == n)
		return ((char *) &s[i]);
	return (NULL);
}
