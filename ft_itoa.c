/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <gribeiro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:45:33 by gribeiro          #+#    #+#             */
/*   Updated: 2025/03/18 01:00:27 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc_size(int n)
{
	int	res;

	res = 0;
	if (n < 0)
		n *= -1;
	if (n <= 9)
		return (1);
	while (n > 9)
	{
		n = n / 10;
		res++;
	}
	return (res + 1);
}

static char	*fill(char *s, int n, int neg, size_t i)
{
	s[i] = '\0';
	while (i > 0)
	{
		i--;
		s[i] = (n % 10) + 48;
		n = n / 10;
	}
	if (neg == 1)
		s[i] = '-';
	return (s);
}

char	*ft_itoa(int n)
{
	size_t	i;
	int		neg;
	char	*s;

	neg = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n *= -1;
		neg = 1;
	}
	i = calc_size (n) + neg;
	s = malloc ((i + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	fill (s, n, neg, i);
	return (s);
}
