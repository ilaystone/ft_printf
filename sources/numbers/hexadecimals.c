/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexadecimals.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 16:17:14 by ikhadem           #+#    #+#             */
/*   Updated: 2019/11/14 22:52:32 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/printf.h"

static char		*set_width(char *s, t_form f)
{
	char	*res;
	char	a;
	int		i;

	i = f.width - ft_strlen(s);
	i = (i < 0) ? 0 : i;
	if (i == 0)
		return (s);
	res = ft_newstr(i + 1);
	a = (f.flag == '0' && f.precision == -1) ? '0' : ' ';
	ft_memset(res, a, i);
	res[i] = '\0';
	if (f.flag == '-')
		res = ft_strjoin(s, res);
	else
	{
		if (s[0] == '-' && res[0] == '0')
			ft_swap(&s[0], &res[0]);
		res = ft_strjoin(res, s);
	}
	return (res);
}

int				display_hex(long c, t_form f)
{
	int		i;
	char	*res;

	if (c == 0 && f.precision == 0)
		res = ft_strdup("");
	else
		res = ft_itoa_pbase((unsigned)c, 16, f.precision);
	if (f.width < 0)
	{
		f.width = -f.width;
		f.flag = '-';
	}
	res = set_width(res, f);
	if (f.type == 'X')
		res = ft_upperstr(res);
	i = ft_wstrlen(res);
	ft_putstr(res);
	free(res);
	return (i);
}
