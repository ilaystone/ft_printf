/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 07:06:25 by ikhadem           #+#    #+#             */
/*   Updated: 2019/11/06 17:00:16 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static char		*input_precision(int c, int p, int b)
{
	char	*res;
	char	*nbr;
	int		size;

	nbr = ft_itoa_base(c, b);
	size = p - ft_strlen(nbr);
	size = size < 0 ? 0 : size;
	res = (char *)malloc(size);
	ft_memset(res, '0', size);
	res = ft_strjoin(res, nbr);
	return (res);
}

static void		input_width(int start, int end, char w)
{
	while (start > end)
	{
		ft_putchar(w);
		start--;
	}
}

void			ft_display_number(int content, t_larg *lst)
{
	char	*res;

	res = input_precision(content, lst->precision, 10);
	if (lst->flag == '-')
	{
		ft_putstr(res);
		input_width(lst->width, ft_strlen(res), ' ');
	}
	else if (lst->flag == '0' && lst->precision == 0)
	{
		input_width(lst->width, ft_strlen(res), '0');
		ft_putstr(res);
	}
	else
	{
		input_width(lst->width, ft_strlen(res), ' ');
		ft_putstr(res);
	}
}

void			ft_display_hex(int content, t_larg *lst, int type)
{
	char	*res;
	int		i;

	res = input_precision(content, lst->precision, 16);
	i = 0;
	if (type == U_HEXA)
		res = ft_upperstr(res);
	if (lst->flag == '-')
	{
		ft_putstr(res);
		input_width(lst->width, ft_strlen(res), ' ');
	}
	else if (lst->flag == '0' && lst->precision == 0)
	{
		input_width(lst->width, ft_strlen(res), '0');
		ft_putstr(res);
	}
	else
	{
		input_width(lst->width, ft_strlen(res), ' ');
		ft_putstr(res);
	}
}
