/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:47:22 by gribeiro          #+#    #+#             */
/*   Updated: 2025/03/18 01:07:06 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*tmp_str;
	size_t	i;

	i = 0;
	tmp_str = (char *) malloc ((ft_strlen (s1) + 1) * sizeof(char));
	if (tmp_str == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		tmp_str[i] = s1[i];
		i++;
	}
	tmp_str[i] = '\0';
	return (tmp_str);
}
