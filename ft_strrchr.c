/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:49:03 by gribeiro          #+#    #+#             */
/*   Updated: 2025/03/18 01:09:15 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			n;
	char			*last;

	i = 0;
	n = (char) c;
	last = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == n)
		{
			last = (char *) &s[i];
		}
		i++;
	}
	if (s[i] == n)
		return ((char *) &s[i]);
	return (last);
}
