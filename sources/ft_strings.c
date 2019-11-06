/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strings.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:20:21 by ikhadem           #+#    #+#             */
/*   Updated: 2019/11/06 17:53:24 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void		input_width(int start, int end, char w)
{
	while (start > end)
	{
		ft_putchar(w);
		start--;
	}
}

static char		*input_precision(char *c, int p)
{
	char	*res;

	res = (char *)malloc(p);
	ft_memcpy(res, c, p);
	return (res);
}

void			ft_display_string(char *str, t_larg *lst)
{
	str = input_precision(str, lst->precision);
	input_width(lst->width, ft_strlen(str), ' ');
	ft_putstr(str);
}
