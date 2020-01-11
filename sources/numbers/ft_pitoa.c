/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 12:02:44 by ikhadem           #+#    #+#             */
/*   Updated: 2019/11/15 17:57:16 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/printf.h"

static int		nbr(long i, int b)
{
	int		j;

	i /= b;
	j = 1;
	while (i)
	{
		i /= b;
		j++;
	}
	return (j);
}

char			*ft_itoa_pbase(long c, int base, int p)
{
	char	*res;
	char	*tab_base;
	int		i;
	int		sign;

	sign = c < 0 ? -1 : 1;
	i = nbr(c, base);
	i = (i > p ? i : p);
	i += (sign < 0 ? 1 : 0);
	if (!(res = (char *)malloc(sizeof(char) * i)))
		return (NULL);
	tab_base = "0123456789abcdef";
	res[i] = '\0';
	res[--i] = tab_base[sign * (c % base)];
	c = c / base;
	p -= 1;
	while (c != 0 || p > 0)
	{
		res[--i] = tab_base[sign * (c % base)];
		c = c / base;
		p -= 1;
	}
	sign < 0 ? (res[0] = '-') : 0;
	return (res);
}
