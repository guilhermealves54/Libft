/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:46:34 by gribeiro          #+#    #+#             */
/*   Updated: 2025/03/18 01:05:47 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp_b;

	temp_b = (unsigned char *) b;
	i = 0;
	while (i < n)
	{
		temp_b[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
